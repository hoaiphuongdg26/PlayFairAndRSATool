#include "pch.h"
#include "RSA_Utils.h"

// Hàm chuyển đổi char sang BIGNUM*
BIGNUM* ConvertCharToAsciiBIGNUM(char character) {
    // Chuyển ký tự thành một dãy byte
    unsigned char byteValue = static_cast<unsigned char>(character);

    // Tạo BIGNUM từ dãy byte
    BIGNUM* result = BN_bin2bn(&byteValue, 1, NULL);

    return result;
}

// Hàm chuyển đổi giá trị Ascii ở kiểu BIGNUM* thành ký tự char
char ConvertBIGNUMToChar(const BIGNUM* asciiValue) {
    // Convert BIGNUM to decimal string
    char* decimalStr = BN_bn2dec(asciiValue);

    // Convert decimal string to integer
    int intValue = atoi(decimalStr);

    // Free allocated memory
    OPENSSL_free(decimalStr);

    // Convert integer to char
    char character = static_cast<char>(intValue);

    return character;
}

// Hàm chuyển đổi System::String^ sang BIGNUM*
BIGNUM* ConvertStringToBIGNUM(System::String^ input) {
    // Chuyển đổi System::String^ sang string
    string inputString = msclr::interop::marshal_as<string>(input);

    // Tạo một BIGNUM* và gán giá trị từ chuỗi số
    BIGNUM* number = BN_new();
    if (BN_dec2bn(&number, inputString.c_str()) == 0) {
        // Xử lý lỗi nếu có
        BN_free(number);
        return nullptr;
    }

    return number;
}

// Hàm chuyển đổi BIGNUM* sang System::String^
System::String^ ConvertBIGNUMToString(BIGNUM* number) {
    if (number == nullptr) {
        return nullptr; // Trả về null nếu number là null
    }

    // Chuyển đổi BIGNUM* sang chuỗi (string)
    char* charString = BN_bn2dec(number);

    // Chuyển đổi chuỗi char* sang System::String^
    System::String^ result = msclr::interop::marshal_as<System::String^>(charString);

    // Giải phóng bộ nhớ
    OPENSSL_free(charString);

    return result;
}

// Hàm chuyển đổi vector<BIGNUM*> sang System::String^
System::String^ ConvertBIGNUMVectorToString(const vector<BIGNUM*>& bignumVector) {
    string resultString;

    for (const auto& bn : bignumVector) {
        // Sử dụng BN_bn2dec để chuyển đổi BIGNUM thành chuỗi
        char* bnDecString = BN_bn2dec(bn);

        // Kiểm tra xem chuyển đổi có thành công không
        if (bnDecString) {
            // Nối chuỗi vào kết quả
            resultString += bnDecString;

            // Giải phóng bộ nhớ được cấp phát bởi BN_bn2dec
            OPENSSL_free(bnDecString);
        }
        else {
            // Xử lý lỗi nếu chuyển đổi không thành công
            return nullptr;
        }

        // Thêm dấu "#" giữa các chuỗi BIGNUM
        resultString += " # ";
    }

    // Chuyển đổi chuỗi kết quả thành System::String^
    return msclr::interop::marshal_as<System::String^>(resultString);
}

// Hàm kiểm tra số nguyên tố (Dùng trong file này thôi, file khác dùng trực tiếp dòng code)
bool primalityCheck(const BIGNUM* num) {
    // Kiểm tra số nguyên tố
    return BN_is_prime_ex(const_cast<BIGNUM*>(num), BN_prime_checks, NULL, NULL);
}

// Hàm tạo số nguyên tố ngẫu nhiên với số bit được nhập vào
BIGNUM* createRandomPrime(int numBits) {
    BIGNUM* randomNum = BN_new();

    // Kiểm tra giá trị trả về từ BN_generate_prime
    if (!BN_generate_prime(randomNum, numBits, NULL, NULL, NULL, NULL, NULL)) {
        // Xử lý lỗi và giải phóng bộ nhớ
        BN_free(randomNum);
        return nullptr;
    }

    // Kiểm tra xem số tạo ra có phải là số nguyên tố không
    if (!BN_is_prime(randomNum, NULL, NULL, NULL, NULL)) {
        // Xử lý lỗi và giải phóng bộ nhớ
        BN_free(randomNum);
        return nullptr;
    }

    return randomNum;
}

// Hàm tính ước chung lớn nhất
BIGNUM* gcd(const BIGNUM* a, const BIGNUM* b) {
    BIGNUM* result = BN_new();
    BN_gcd(result, a, b, BN_CTX_new());
    return result;
}

//Hàm tạo số nguyên tố e đặc biệt ngẫu nhiên
BIGNUM* createRandomPrime_e(BIGNUM* phiN) {
    BIGNUM* num = createRandomPrime(BN_num_bits(phiN));

    // Thêm điều kiện gcd(num, phiN) == 1
    if (primalityCheck(num)) {
        BIGNUM* gcdResult = gcd(num, phiN);
        if (BN_is_one(gcdResult)) {
            BN_free(gcdResult);
            return num;
        }
        BN_free(gcdResult);
    }
    // Giải phóng bộ nhớ nếu không thỏa mãn điều kiện
    BN_free(num);
    return nullptr;
}

// Hàm kiểm tra điều kiện của e
bool checkEConditions(BIGNUM* e, BIGNUM* phiN) {
    // Kiểm tra xem e có phải là số nguyên tố không
    if (!primalityCheck(e)) {
        return false;
    }

    // Kiểm tra xem gcd(e, phiN) có bằng 1 không
    BIGNUM* gcdResult = gcd(e, phiN);
    bool satisfiesConditions = BN_is_one(gcdResult);

    // Giải phóng bộ nhớ
    BN_free(gcdResult);

    return satisfiesConditions;
}
// Thuật toán Euclidean
BIGNUM* ExtendedEuclidean(BIGNUM* a, BIGNUM* b, BIGNUM* x, BIGNUM* y) {
    // Trường hợp cơ bản: Nếu b bằng 0, ta đã tìm thấy x và y.
    if (BN_is_zero(b)) {
        BN_one(x);
        BN_zero(y);
        return BN_dup(a);
    }

    BIGNUM* x1 = BN_new();
    BIGNUM* y1 = BN_new();
    BIGNUM* a_mod_b = BN_new();
    BIGNUM* gcd = BN_new();

    // a_mod_b = a % b
    BN_mod(a_mod_b, a, b, BN_CTX_new());

    // Đệ quy để tìm gcd và giá trị của x1, y1
    gcd = ExtendedEuclidean(b, a_mod_b, x1, y1);

    // Cập nhật giá trị của x và y từ các giá trị trung gian
    BN_copy(x, y1);
    BIGNUM* temp = BN_new();
    BN_div(temp, NULL, a, b, BN_CTX_new());
    BN_mul(temp, temp, y1, BN_CTX_new());
    BN_sub(y, x1, temp);

    // Giải phóng bộ nhớ
    BN_free(x1);
    BN_free(y1);
    BN_free(a_mod_b);
    BN_free(temp);

    return gcd;
}

// Hàm tính D
BIGNUM* calculateD(BIGNUM* e, BIGNUM* phiN) {
    BIGNUM* x = BN_new();
    BIGNUM* y = BN_new();
    BIGNUM* gcd = ExtendedEuclidean(e, phiN, x, y);

    if (!BN_is_one(gcd)) {
        // Không có giá trị d hợp lệ
        BN_free(x);
        BN_free(y);
        BN_free(gcd);
        return nullptr;
    }
    else {
        // Đảm bảo x là một số nguyên dương
        BIGNUM* d = BN_new();
        BN_nnmod(d, x, phiN, BN_CTX_new());

        // Giải phóng bộ nhớ
        BN_free(x);
        BN_free(y);
        BN_free(gcd);

        return d;
    }
}

// Hàm chia chuỗi thành từng khối
vector<string> splitStringIntoBlocks(string input, int blockLength) {
    vector<string> blocks;
    for (int i = 0; i < input.length(); i += blockLength) {
        string block = input.substr(i, blockLength);

        // Thêm khoảng trắng nếu chuỗi không đủ blockLength ký tự
        if (block.length() < blockLength) {
            block.append(blockLength - block.length(), ' ');
        }
        blocks.push_back(block);
    }
    return blocks;
}

// Hàm tính độ dài mỗi khối dựa trên N
int calculateBlockLength(const BIGNUM* N) {
    // Tính độ dài bit của N
    int bitLength = BN_num_bytes(N);

    return bitLength - 1;
}

// Hàm mã hoá
System::String^ EncryptStringOrNumber(const string input, const BIGNUM* e, const BIGNUM* N) {
    BN_CTX* ctx = BN_CTX_new();
    BIGNUM* base = BN_new();
    BN_set_word(base, 256);
    // Kiểm tra xem input có phải là chuỗi text hay là số
    bool isNumber = true;
    for (char c : input) {
        if (!isdigit(c)) {
            isNumber = false;
            break;
        }
    }

    if (isNumber) {
        // Nếu input là số, chuyển nó thành số BIGNUM
        BIGNUM* numberInput = ConvertStringToBIGNUM(msclr::interop::marshal_as<System::String^>(input));
        BIGNUM* encryptedNumber = BN_new();
        // Mã hoá
        BN_mod_exp(encryptedNumber, numberInput, e, N, ctx);
        // Giải phóng bộ nhớ
        BN_free(numberInput);
        BN_free(base);
        BN_CTX_free(ctx);

        return ConvertBIGNUMToString(encryptedNumber);
    }
    else {
        vector<string> blocks = splitStringIntoBlocks(input, calculateBlockLength(N));
        int n = calculateBlockLength(N);
        vector<BIGNUM*> textInputInBase10Format;
        vector<BIGNUM*> cipherText;
        // Lặp qua từng block
        for (const auto& block : blocks) {
            BIGNUM* textBlockInBase10 = BN_new();
            int exponent = 0;
            BIGNUM* exponentBIGNUM = BN_new();
            // Lặp qua từng ký tự trong mỗi block, từ cuối lên đầu
            for (int c = block.length() - 1; c >= 0; c--) {
                // Chuyển ký tự thành mã ASCII
                BIGNUM* asciiValue = ConvertCharToAsciiBIGNUM(block[c]);

                //Tính result = 256^exponent
                BIGNUM* result = BN_new();
                // Thiết lập giá trị cho exponent
                BN_set_word(exponentBIGNUM, exponent);
                // Tính nè
                BN_exp(result, base, exponentBIGNUM, ctx);

                //Tính mỗi ký tự: temp = Asscii * 256^exponent 
                BIGNUM* temp = BN_new();
                BN_mul(temp, asciiValue, result, ctx);

                //Cộng vào từng block
                BN_add(textBlockInBase10, textBlockInBase10, temp);

                BN_free(asciiValue);
                BN_free(result);
                BN_free(temp);
                exponent++;
            }
            // Giải phóng
            BN_free(exponentBIGNUM);
            // Mã hóa số nguyên lớn
            BIGNUM* encryptedBlock = BN_new();
            BN_mod_exp(encryptedBlock, textBlockInBase10, e, N, ctx);
            // Lưu lại các block
            textInputInBase10Format.push_back(textBlockInBase10);
            cipherText.push_back(encryptedBlock);

            // Giải phóng bộ nhớ cho block số
            BN_free(textBlockInBase10);
        }
        // Giải phóng bộ nhớ
        BN_free(base);
        BN_CTX_free(ctx);
        
        return ConvertBIGNUMVectorToString(cipherText);
    }
}

// Hàm chia chuỗi BIGNUM* vào biến vector<BIGNUM*>
vector<BIGNUM*> ConvertToVector(const string input) {
    vector<BIGNUM*> result;
    size_t start = 0;
    size_t end = input.find('#');

    while (end != string::npos) {
        std::string substr = input.substr(start, end - start);

        // Xoá khoảng trắng trong chuỗi
        substr.erase(std::remove_if(substr.begin(), substr.end(), ::isspace), substr.end());

        // Chuyển đổi chuỗi thành BIGNUM*
        BIGNUM* number = BN_new();
        if (BN_dec2bn(&number, substr.c_str()) > 0) {
            result.push_back(number);
        }
        else {
            // Xử lý lỗi chuyển đổi
            BN_free(number);
            return {};
        }

        start = end + 1;
        end = input.find('#', start);
    }

    std::string lastSubstring = input.substr(start);
    lastSubstring.erase(std::remove_if(lastSubstring.begin(), lastSubstring.end(), ::isspace), lastSubstring.end());
    BIGNUM* lastNumber = BN_new();
    if (BN_dec2bn(&lastNumber, lastSubstring.c_str()) > 0) {
        result.push_back(lastNumber);
    }
    else {
        BN_free(lastNumber);
        return {};
    }
    return result;
}

// Hàm giải mã
System::String^ Decrypt(string input, const BIGNUM* d, const BIGNUM* N) {
    BN_CTX* ctx = BN_CTX_new();
    try {
        // Chuyển chuỗi input đầu vào thành dạng vector
        vector<BIGNUM*> cipherText = ConvertToVector(input);
        if (cipherText.empty()) {
            // Xử lý trường hợp lỗi
            return nullptr;
        }
        else {
            // Lưu trữ chuỗi text sau khi decode
            string plainText = "";

            //Lặp qua từng khối
            for (int i = 0; i < cipherText.size(); i++) {
                // Lưu trữ chuỗi ASCII
                int assciiValue;
                BIGNUM* decryptedBlock = BN_new();
                BN_mod_exp(decryptedBlock, cipherText[i], d, N, ctx);
                string plainBlock = "";

                // Chuyển kết quả giải mã thành chuỗi ASCII
                int exponent = 0;
                while (exponent < calculateBlockLength(N)) {
                    BIGNUM* temp = BN_dup(decryptedBlock);
                    BIGNUM* jBIGNUM = BN_new();
                    // Phần tử số: temp = temp % Pow(256, i)
                    for (int j = calculateBlockLength(N) - 1; j > exponent; j--) {
                        BN_set_word(jBIGNUM, j);

                        BIGNUM* base = BN_new(); BN_set_word(base, 256);
                        // Tính Pow(256, j)
                        BIGNUM* pow256 = BN_new();
                        BN_exp(pow256, base, jBIGNUM, ctx);
                        // Tính temp = temp % Pow(256, i)
                        BN_mod(temp, temp, pow256, ctx);
                        BN_free(pow256);
                        BN_free(base);
                    }
                    // Giải phóng bộ nhớ
                    BN_free(jBIGNUM);

                    // Tính asciiValue_BIGNUM = temp / Pow(256, exponent)
                    BIGNUM* asciiValue_ = BN_new();
                    BIGNUM* resultPowofBaseExponent = BN_new();
                    BIGNUM* remainder = BN_new();
                    BIGNUM* base = BN_new(); BN_set_word(base, 256);
                    BIGNUM* exponentBIGNUM = BN_new(); BN_set_word(exponentBIGNUM, exponent);
                    BN_exp(resultPowofBaseExponent, base, exponentBIGNUM, ctx);
                    BN_div(asciiValue_, remainder, temp, resultPowofBaseExponent, ctx);

                    // Chuyển giá trị Ascii thành ký tự
                    plainBlock += ConvertBIGNUMToChar(asciiValue_);

                    exponent++;
                    BN_free(temp);
                    BN_free(asciiValue_);
                    BN_free(resultPowofBaseExponent);
                    BN_free(exponentBIGNUM);
                    BN_free(remainder);
                    BN_free(base);
                }

                // Đảo ngược chuỗi lại để được chuỗi plainBlock hoàn chỉnh
                reverse(plainBlock.begin(), plainBlock.end());
                plainText += plainBlock;

                BN_free(decryptedBlock);
            }
            return gcnew System::String(plainText.c_str());
        }
    }
    finally {
        // Clean up BN_CTX in case of exception
        BN_CTX_free(ctx);
    }
}