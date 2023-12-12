#pragma once
#include "RSAForm.h" 
#include "PlayFairForm.h"
namespace MainForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btn_RSA;
	private: System::Windows::Forms::Button^ btn_playFair;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_RSA = (gcnew System::Windows::Forms::Button());
			this->btn_playFair = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(104, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Secure Cipher";
			// 
			// btn_RSA
			// 
			this->btn_RSA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_RSA->Location = System::Drawing::Point(27, 69);
			this->btn_RSA->Name = L"btn_RSA";
			this->btn_RSA->Size = System::Drawing::Size(148, 45);
			this->btn_RSA->TabIndex = 1;
			this->btn_RSA->Text = L"RSA";
			this->btn_RSA->UseVisualStyleBackColor = true;
			this->btn_RSA->Click += gcnew System::EventHandler(this, &MainForm::btn_RSA_Click);
			// 
			// btn_playFair
			// 
			this->btn_playFair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_playFair->Location = System::Drawing::Point(230, 69);
			this->btn_playFair->Name = L"btn_playFair";
			this->btn_playFair->Size = System::Drawing::Size(148, 45);
			this->btn_playFair->TabIndex = 2;
			this->btn_playFair->Text = L"Play Fair";
			this->btn_playFair->UseVisualStyleBackColor = true;
			this->btn_playFair->Click += gcnew System::EventHandler(this, &MainForm::btn_playFair_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(403, 132);
			this->Controls->Add(this->btn_playFair);
			this->Controls->Add(this->btn_RSA);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"Secure Cipher";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void btn_RSA_Click(System::Object^ sender, System::EventArgs^ e) {
		RSAForm^ rsaForm = gcnew RSAForm(); // Create an instance of RSAForm
		rsaForm->Show(); // Show RSAForm
	}

	private: System::Void btn_playFair_Click(System::Object^ sender, System::EventArgs^ e) {
		PlayFairAndRSATool::PlayFairForm playFairForm;
		playFairForm.ShowDialog();
	}
};
}
