#pragma once
#include "RSAForm.h"
#include "RSA_Utils.h"
namespace MainForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RSAForm
	/// </summary>
	public ref class RSAForm : public System::Windows::Forms::Form
	{
	public:
		RSAForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RSAForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btn_file;
	private: System::Windows::Forms::TextBox^ tb_Input;
	protected:









	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ tb_d;

	private: System::Windows::Forms::TextBox^ tb_e;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btn_updateParameters;
	private: System::Windows::Forms::TextBox^ tb_phiN;

	private: System::Windows::Forms::TextBox^ tb_N;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btn_generatePrimeNum;
	private: System::Windows::Forms::TextBox^ tb_q;
	private: System::Windows::Forms::TextBox^ tb_p;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lb_title;

	private: System::Windows::Forms::TextBox^ tb_bits;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ btn_Decrypt;
	private: System::Windows::Forms::Button^ btn_Encrypt;
	private: System::Windows::Forms::Button^ btn_Save;
	private: System::Windows::Forms::TextBox^ tb_Output;

	private: System::Windows::Forms::Label^ label1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_Decrypt = (gcnew System::Windows::Forms::Button());
			this->btn_Encrypt = (gcnew System::Windows::Forms::Button());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->tb_Output = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_file = (gcnew System::Windows::Forms::Button());
			this->tb_Input = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tb_d = (gcnew System::Windows::Forms::TextBox());
			this->tb_e = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_updateParameters = (gcnew System::Windows::Forms::Button());
			this->tb_phiN = (gcnew System::Windows::Forms::TextBox());
			this->tb_N = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_generatePrimeNum = (gcnew System::Windows::Forms::Button());
			this->tb_q = (gcnew System::Windows::Forms::TextBox());
			this->tb_p = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tb_bits = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lb_title = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btn_Decrypt);
			this->panel3->Controls->Add(this->btn_Encrypt);
			this->panel3->Controls->Add(this->btn_Save);
			this->panel3->Controls->Add(this->tb_Output);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->btn_file);
			this->panel3->Controls->Add(this->tb_Input);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Location = System::Drawing::Point(11, 431);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(653, 317);
			this->panel3->TabIndex = 16;
			// 
			// btn_Decrypt
			// 
			this->btn_Decrypt->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Decrypt->Location = System::Drawing::Point(345, 284);
			this->btn_Decrypt->Name = L"btn_Decrypt";
			this->btn_Decrypt->Size = System::Drawing::Size(124, 30);
			this->btn_Decrypt->TabIndex = 18;
			this->btn_Decrypt->Text = L"Decrypt";
			this->btn_Decrypt->UseVisualStyleBackColor = true;
			this->btn_Decrypt->Click += gcnew System::EventHandler(this, &RSAForm::btn_Decrypt_Click);
			// 
			// btn_Encrypt
			// 
			this->btn_Encrypt->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Encrypt->Location = System::Drawing::Point(187, 284);
			this->btn_Encrypt->Name = L"btn_Encrypt";
			this->btn_Encrypt->Size = System::Drawing::Size(124, 30);
			this->btn_Encrypt->TabIndex = 17;
			this->btn_Encrypt->Text = L"Encrypt";
			this->btn_Encrypt->UseVisualStyleBackColor = true;
			this->btn_Encrypt->Click += gcnew System::EventHandler(this, &RSAForm::btn_Encrypt_Click);
			// 
			// btn_Save
			// 
			this->btn_Save->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Save->Location = System::Drawing::Point(435, 26);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(124, 30);
			this->btn_Save->TabIndex = 16;
			this->btn_Save->Text = L"Save a File";
			this->btn_Save->UseVisualStyleBackColor = true;
			this->btn_Save->Click += gcnew System::EventHandler(this, &RSAForm::btn_Save_Click);
			// 
			// tb_Output
			// 
			this->tb_Output->Location = System::Drawing::Point(336, 58);
			this->tb_Output->Multiline = true;
			this->tb_Output->Name = L"tb_Output";
			this->tb_Output->ReadOnly = true;
			this->tb_Output->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tb_Output->Size = System::Drawing::Size(291, 220);
			this->tb_Output->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(351, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 22);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Output";
			// 
			// btn_file
			// 
			this->btn_file->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_file->Location = System::Drawing::Point(128, 26);
			this->btn_file->Name = L"btn_file";
			this->btn_file->Size = System::Drawing::Size(124, 30);
			this->btn_file->TabIndex = 13;
			this->btn_file->Text = L"Import a File";
			this->btn_file->UseVisualStyleBackColor = true;
			this->btn_file->Click += gcnew System::EventHandler(this, &RSAForm::btn_file_Click);
			// 
			// tb_Input
			// 
			this->tb_Input->Location = System::Drawing::Point(29, 58);
			this->tb_Input->Multiline = true;
			this->tb_Input->Name = L"tb_Input";
			this->tb_Input->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tb_Input->Size = System::Drawing::Size(291, 220);
			this->tb_Input->TabIndex = 3;
			this->tb_Input->TextChanged += gcnew System::EventHandler(this, &RSAForm::tb_Input_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(44, 33);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(51, 22);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Input";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(0, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(508, 23);
			this->label18->TabIndex = 1;
			this->label18->Text = L"RSA encrytion using e / decryotion using d [alphabet: 256]\r\n";
			// 
			// tb_d
			// 
			this->tb_d->Location = System::Drawing::Point(211, 150);
			this->tb_d->Name = L"tb_d";
			this->tb_d->ReadOnly = true;
			this->tb_d->Size = System::Drawing::Size(345, 22);
			this->tb_d->TabIndex = 11;
			// 
			// tb_e
			// 
			this->tb_e->Location = System::Drawing::Point(211, 112);
			this->tb_e->Name = L"tb_e";
			this->tb_e->Size = System::Drawing::Size(345, 22);
			this->tb_e->TabIndex = 9;
			this->tb_e->TextChanged += gcnew System::EventHandler(this, &RSAForm::tb_e_TextChanged);
			this->tb_e->Leave += gcnew System::EventHandler(this, &RSAForm::tb_e_Leave);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(44, 150);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 22);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Private key d";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(44, 112);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 22);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Public key e";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(562, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 19);
			this->label9->TabIndex = 7;
			this->label9->Text = L"(private)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(562, 33);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 19);
			this->label8->TabIndex = 6;
			this->label8->Text = L"(public)";
			// 
			// btn_updateParameters
			// 
			this->btn_updateParameters->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_updateParameters->Location = System::Drawing::Point(261, 186);
			this->btn_updateParameters->Name = L"btn_updateParameters";
			this->btn_updateParameters->Size = System::Drawing::Size(250, 30);
			this->btn_updateParameters->TabIndex = 5;
			this->btn_updateParameters->Text = L"Update parameters";
			this->btn_updateParameters->UseVisualStyleBackColor = true;
			this->btn_updateParameters->Click += gcnew System::EventHandler(this, &RSAForm::btn_updateParameters_Click);
			// 
			// tb_phiN
			// 
			this->tb_phiN->Location = System::Drawing::Point(211, 71);
			this->tb_phiN->Name = L"tb_phiN";
			this->tb_phiN->ReadOnly = true;
			this->tb_phiN->Size = System::Drawing::Size(345, 22);
			this->tb_phiN->TabIndex = 4;
			// 
			// tb_N
			// 
			this->tb_N->Location = System::Drawing::Point(211, 33);
			this->tb_N->Name = L"tb_N";
			this->tb_N->ReadOnly = true;
			this->tb_N->Size = System::Drawing::Size(345, 22);
			this->tb_N->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(44, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 22);
			this->label6->TabIndex = 2;
			this->label6->Text = L"RSA modulus N";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 23);
			this->label7->TabIndex = 1;
			this->label7->Text = L"RSA Parameters";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tb_d);
			this->panel2->Controls->Add(this->tb_e);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->btn_updateParameters);
			this->panel2->Controls->Add(this->tb_phiN);
			this->panel2->Controls->Add(this->tb_N);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Location = System::Drawing::Point(11, 206);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(653, 219);
			this->panel2->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 22);
			this->label5->TabIndex = 3;
			this->label5->Text = L"ΦN = (p - 1)(q - 1)";
			// 
			// btn_generatePrimeNum
			// 
			this->btn_generatePrimeNum->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_generatePrimeNum->Location = System::Drawing::Point(48, 108);
			this->btn_generatePrimeNum->Name = L"btn_generatePrimeNum";
			this->btn_generatePrimeNum->Size = System::Drawing::Size(250, 30);
			this->btn_generatePrimeNum->TabIndex = 5;
			this->btn_generatePrimeNum->Text = L"Generate Prime Numbers";
			this->btn_generatePrimeNum->UseVisualStyleBackColor = true;
			this->btn_generatePrimeNum->Click += gcnew System::EventHandler(this, &RSAForm::btn_generatePrimeNum_Click);
			// 
			// tb_q
			// 
			this->tb_q->Location = System::Drawing::Point(211, 71);
			this->tb_q->Name = L"tb_q";
			this->tb_q->Size = System::Drawing::Size(345, 22);
			this->tb_q->TabIndex = 4;
			this->tb_q->TextChanged += gcnew System::EventHandler(this, &RSAForm::tb_q_TextChanged);
			this->tb_q->Leave += gcnew System::EventHandler(this, &RSAForm::tb_q_Leave);
			// 
			// tb_p
			// 
			this->tb_p->Location = System::Drawing::Point(211, 33);
			this->tb_p->Name = L"tb_p";
			this->tb_p->Size = System::Drawing::Size(345, 22);
			this->tb_p->TabIndex = 3;
			this->tb_p->TextChanged += gcnew System::EventHandler(this, &RSAForm::tb_p_TextChanged);
			this->tb_p->Leave += gcnew System::EventHandler(this, &RSAForm::tb_p_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Prime number q";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Prime number p";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->tb_bits);
			this->panel1->Controls->Add(this->btn_generatePrimeNum);
			this->panel1->Controls->Add(this->tb_q);
			this->panel1->Controls->Add(this->tb_p);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(11, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(653, 141);
			this->panel1->TabIndex = 14;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(523, 115);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 19);
			this->label15->TabIndex = 7;
			this->label15->Text = L"bits";
			// 
			// tb_bits
			// 
			this->tb_bits->Location = System::Drawing::Point(316, 112);
			this->tb_bits->Name = L"tb_bits";
			this->tb_bits->Size = System::Drawing::Size(195, 22);
			this->tb_bits->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prime number entry";
			// 
			// lb_title
			// 
			this->lb_title->AutoSize = true;
			this->lb_title->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_title->Location = System::Drawing::Point(200, 21);
			this->lb_title->Name = L"lb_title";
			this->lb_title->Size = System::Drawing::Size(256, 35);
			this->lb_title->TabIndex = 13;
			this->lb_title->Text = L"RSA Cryptosystem";
			// 
			// RSAForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 760);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lb_title);
			this->Name = L"RSAForm";
			this->Text = L"RSAForm";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void tb_p_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (tb_p->Text != "") {
		BIGNUM* number = ConvertStringToBIGNUM(tb_p->Text);
		if (number != nullptr) {
			if (!BN_is_prime_ex(const_cast<BIGNUM*>(number), BN_prime_checks, NULL, NULL)) {
				MessageBox::Show("Invalid input. Please enter a prime number.");
				tb_p->Text = "";
				tb_p->Focus();
			}
		}
		else {
			MessageBox::Show("Invalid input. Please enter a valid integer.");
			tb_p->Text = "";
			tb_p->Focus();
		}
		BN_free(number);
	}
}
private: System::Void tb_q_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (tb_p->Text != "") {
		BIGNUM* number = ConvertStringToBIGNUM(tb_q->Text);
		if (number != nullptr) {
			if (!BN_is_prime_ex(const_cast<BIGNUM*>(number), BN_prime_checks, NULL, NULL)) {
				MessageBox::Show("Invalid input. Please enter a prime number.");
				tb_q->Text = "";
				tb_q->Focus();
			}
		}
		else {
			MessageBox::Show("Invalid input. Please enter a valid integer.");
			tb_q->Text = "";
			tb_q->Focus();
		}
		BN_free(number);
	}
}
private: System::Void btn_generatePrimeNum_Click(System::Object^ sender, System::EventArgs^ e) {
	int numBits;
	if (Int32::TryParse(tb_bits->Text, numBits))
	{
		BIGNUM* prime_p = createRandomPrime(numBits);
		BIGNUM* prime_q = createRandomPrime(numBits);

		if (prime_p && prime_q)
		{
			tb_p->Text = ConvertBIGNUMToString(prime_p);
			tb_q->Text = ConvertBIGNUMToString(prime_q);

			BN_free(prime_p);
			BN_free(prime_q);
		}
		else
		{
			// Xử lý lỗi khi sinh số nguyên tố không thành công
			MessageBox::Show("Error generating random primes.");
		}
	}
	else
	{
		// Xử lý lỗi khi chuyển đổi từ chuỗi sang số nguyên không thành công
		MessageBox::Show("Invalid input for bits.");
	}
}

private: System::Void tb_p_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateRSAParameters();
	tb_Output->Text = "";
}
private: System::Void tb_q_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateRSAParameters();
	tb_Output->Text = "";
}
void updateRSAParameters() {
	BN_CTX* ctx = BN_CTX_new();
	BIGNUM* num_N = BN_new();
	BIGNUM* num_phiN = BN_new();
	BIGNUM* num_e = BN_new();
	BIGNUM* num_d = BN_new();
	if (tb_p->Text != "" && tb_q->Text != "") {
		// Tính N
		if (!BN_mul(num_N, ConvertStringToBIGNUM(tb_p->Text), ConvertStringToBIGNUM(tb_q->Text), ctx)) {
			MessageBox::Show("Error calculating N.");
			BN_free(num_N);
			return;
		}
		tb_N->Text = ConvertBIGNUMToString(num_N);

		// Tính ΦN
		BIGNUM* number1 = BN_new(); // lưu giá trị (p-1)
		BIGNUM* number2 = BN_new(); // lưu giá trị (q-1)
		BIGNUM* one = BN_new();
		BN_set_word(one, 1);
		BN_sub(number1, ConvertStringToBIGNUM(tb_p->Text), one);
		BN_sub(number2, ConvertStringToBIGNUM(tb_q->Text), one);
		if (!BN_mul(num_phiN, number1, number2, ctx)) {
			MessageBox::Show("Error calculating ΦN.");
			BN_free(num_N);
			BN_free(num_phiN);
			BN_free(number1);
			BN_free(number2);
			return;
		}
		tb_phiN->Text = ConvertBIGNUMToString(num_phiN);

		// Tính public key e
		num_e = createRandomPrime_e(num_phiN);
		tb_e->Text = ConvertBIGNUMToString(num_e);

		// Tính private key d
		num_d = calculateD(num_e, num_phiN);
		tb_d->Text = ConvertBIGNUMToString(num_d);

		// Giải phóng bộ nhớ
		BN_free(number1);
		BN_free(number2);
	}
	BN_CTX_free(ctx);
	BN_free(num_N);
	BN_free(num_phiN);
	BN_free(num_e);
	BN_free(num_d);
}
private: System::Void tb_e_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (tb_e->Text != "") {
		BIGNUM* number = ConvertStringToBIGNUM(tb_p->Text);
		if (number != nullptr) {
			if (!BN_is_prime_ex(const_cast<BIGNUM*>(number), BN_prime_checks, NULL, NULL)) {
				MessageBox::Show("Invalid input. Please enter a prime number.");
				tb_e->Text = "";
				tb_e->Focus();
			}
		}
		else {
			MessageBox::Show("Invalid input. Please enter a valid integer.");
			tb_e->Text = "";
			tb_e->Focus();
		}
		BN_free(number);
	}
	// Tính private key d
	BIGNUM* num_d = calculateD(ConvertStringToBIGNUM(tb_e->Text), ConvertStringToBIGNUM(tb_phiN->Text));
	tb_d->Text = ConvertBIGNUMToString(num_d);
	BN_free(num_d);
}
private: System::Void btn_updateParameters_Click(System::Object^ sender, System::EventArgs^ e) {
	// Tính public key e
	BIGNUM* num_e = createRandomPrime_e(ConvertStringToBIGNUM(tb_phiN->Text));
	tb_e->Text = ConvertBIGNUMToString(num_e);
	BN_free(num_e);
	// Tính private key d
	BIGNUM* num_d = calculateD(ConvertStringToBIGNUM(tb_e->Text), ConvertStringToBIGNUM(tb_phiN->Text));
	tb_d->Text = ConvertBIGNUMToString(num_d);
	BN_free(num_d);

}
private: System::Void btn_file_Click(System::Object^ sender, System::EventArgs^ e) {
	// Mở hộp thoại chọn file
	System::Windows::Forms::OpenFileDialog^ openFileDialog1 = gcnew System::Windows::Forms::OpenFileDialog();
	openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
	openFileDialog1->Title = "Select a Text File";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Đọc nội dung của file và đặt vào TextBox
		System::String^ fileName = openFileDialog1->FileName;
		std::string stdFileName = msclr::interop::marshal_as<std::string>(fileName);

		std::ifstream file(stdFileName);
		if (file.is_open()) {
			// Đọc toàn bộ nội dung của file
			std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

			// Đặt nội dung vào TextBox
			tb_Input->Text = gcnew System::String(fileContent.c_str());

			// Đóng file
			file.close();
		}
		else {
			// Xử lý lỗi khi mở file
			MessageBox::Show("Error opening file.");
		}
	}
}
private: System::Void btn_Save_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tb_Output->Text != "") {
		// Mở hộp thoại chọn vị trí và tên file để lưu
		System::Windows::Forms::SaveFileDialog^ saveFileDialog1 = gcnew System::Windows::Forms::SaveFileDialog();
		saveFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
		saveFileDialog1->Title = "Save Text File";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Lấy đường dẫn file được chọn
			System::String^ fileName = saveFileDialog1->FileName;

			// Chuyển đổi System::String thành std::string
			std::string stdFileName = msclr::interop::marshal_as<std::string>(fileName);

			// Lưu nội dung của TextBox vào file
			std::ofstream outFile(stdFileName);
			if (outFile.is_open()) {
				System::String^ textBoxContent = tb_Output->Text;
				std::string stdContent = msclr::interop::marshal_as<std::string>(textBoxContent);

				outFile << stdContent;
				outFile.close();
			}
			else {
				// Xử lý lỗi khi mở file
				MessageBox::Show("Error saving file.");
			}
		}
	}
	else MessageBox::Show("File content is empty.");
}
private: System::Void btn_Encrypt_Click(System::Object^ sender, System::EventArgs^ e) {
	string input = msclr::interop::marshal_as<std::string>(tb_Input->Text);
	tb_Output->Text = EncryptStringOrNumber(input, ConvertStringToBIGNUM(tb_e->Text), ConvertStringToBIGNUM(tb_N->Text));
}
bool IsValidInputStringForDecrypt(String^ input) {
	// Chuyển đổi System::String^ thành std::string
	string inputStr = msclr::interop::marshal_as<string>(input);

	// Sử dụng regex để kiểm tra chuỗi
	regex pattern("^[0-9# ]+$");
	return regex_match(inputStr, pattern);
}
private: System::Void btn_Decrypt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsValidInputStringForDecrypt(tb_Input->Text)) {
		string input = msclr::interop::marshal_as<std::string>(tb_Input->Text);
		tb_Output->Text = Decrypt(input, ConvertStringToBIGNUM(tb_d->Text), ConvertStringToBIGNUM(tb_N->Text));
	}
	else MessageBox::Show("Invalid Input String For Decrypt");
}
private: System::Void tb_e_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (tb_q->Text == "" || tb_p->Text == "") {
		MessageBox::Show("Please enter number p and q before.");
		tb_e->Text = "";
	}
	tb_Output->Text = "";
}
private: System::Void tb_Input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	tb_Output->Text = "";
}
};
}
