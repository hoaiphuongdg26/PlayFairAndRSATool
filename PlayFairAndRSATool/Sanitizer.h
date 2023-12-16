#pragma once
#include <algorithm>
#include <string>
using namespace std;

class Sanitizer {
public:
    static string sanitizeInputKey(const string& key) {
        string sanitizedKey = key;
        // Chuyển đổi tất cả ký tự thành chữ in hoa
        transform(sanitizedKey.begin(), sanitizedKey.end(), sanitizedKey.begin(), toupper);
        // Loại bỏ ký tự trùng lặp
        sanitizedKey.erase(unique(sanitizedKey.begin(), sanitizedKey.end()), sanitizedKey.end());
        return sanitizedKey;
    }
};