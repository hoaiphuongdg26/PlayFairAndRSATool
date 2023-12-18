#include "PlayfairCipher.h"
namespace PlayFairAndRSATool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlayFairForm
	/// </summary>
	public ref class PlayFairForm : public System::Windows::Forms::Form
	{
	public:
		PlayFairForm(void)
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
		~PlayFairForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_Key;
	private: System::Windows::Forms::TextBox^ tb_Input;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tb_Output;

	private: System::Windows::Forms::Button^ btn_Encrypt;
	private: System::Windows::Forms::Button^ btn_Decrypt;
	private: System::Windows::Forms::Button^ btn_ClrInput;




	private: System::Windows::Forms::Button^ btn_ClrKey;
	private: System::Windows::Forms::TextBox^ tb_Formatted;

	private: System::Windows::Forms::TextBox^ tb_Encrypted;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ cb_5x5;
	private: System::Windows::Forms::CheckBox^ cb_6x6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tb_Separator1;
	private: System::Windows::Forms::TextBox^ tb_Separator2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_00;
	private: System::Windows::Forms::Button^ btn_01;
	private: System::Windows::Forms::Button^ btn_02;
	private: System::Windows::Forms::Button^ btn_03;
	private: System::Windows::Forms::Button^ btn_04;
	private: System::Windows::Forms::Button^ btn_05;
	private: System::Windows::Forms::Button^ btn_10;
	private: System::Windows::Forms::Button^ btn_20;
	private: System::Windows::Forms::Button^ btn_30;
	private: System::Windows::Forms::Button^ btn_40;
	private: System::Windows::Forms::Button^ btn_50;
	private: System::Windows::Forms::Button^ btn_51;












	private: System::Windows::Forms::Button^ btn_41;

	private: System::Windows::Forms::Button^ btn_31;

	private: System::Windows::Forms::Button^ btn_21;

	private: System::Windows::Forms::Button^ btn_11;
	private: System::Windows::Forms::Button^ btn_12;
	private: System::Windows::Forms::Button^ btn_22;
	private: System::Windows::Forms::Button^ btn_32;
	private: System::Windows::Forms::Button^ btn_42;
	private: System::Windows::Forms::Button^ btn_52;
	private: System::Windows::Forms::Button^ btn_53;
	private: System::Windows::Forms::Button^ btn_54;
	private: System::Windows::Forms::Button^ btn_55;









	private: System::Windows::Forms::Button^ btn_45;

	private: System::Windows::Forms::Button^ btn_44;

	private: System::Windows::Forms::Button^ btn_43;

	private: System::Windows::Forms::Button^ btn_33;
	private: System::Windows::Forms::Button^ btn_34;
	private: System::Windows::Forms::Button^ btn_35;



	private: System::Windows::Forms::Button^ btn_25;

	private: System::Windows::Forms::Button^ btn_15;

	private: System::Windows::Forms::Button^ btn_14;

	private: System::Windows::Forms::Button^ btn_13;
	private: System::Windows::Forms::Button^ btn_23;
	private: System::Windows::Forms::Button^ btn_24;
private: System::Windows::Forms::Label^ lb_title;







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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_Key = (gcnew System::Windows::Forms::TextBox());
			this->tb_Input = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_Output = (gcnew System::Windows::Forms::TextBox());
			this->btn_Encrypt = (gcnew System::Windows::Forms::Button());
			this->btn_Decrypt = (gcnew System::Windows::Forms::Button());
			this->btn_ClrInput = (gcnew System::Windows::Forms::Button());
			this->btn_ClrKey = (gcnew System::Windows::Forms::Button());
			this->tb_Formatted = (gcnew System::Windows::Forms::TextBox());
			this->tb_Encrypted = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cb_5x5 = (gcnew System::Windows::Forms::CheckBox());
			this->cb_6x6 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_Separator1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_Separator2 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_00 = (gcnew System::Windows::Forms::Button());
			this->btn_01 = (gcnew System::Windows::Forms::Button());
			this->btn_02 = (gcnew System::Windows::Forms::Button());
			this->btn_03 = (gcnew System::Windows::Forms::Button());
			this->btn_04 = (gcnew System::Windows::Forms::Button());
			this->btn_05 = (gcnew System::Windows::Forms::Button());
			this->btn_10 = (gcnew System::Windows::Forms::Button());
			this->btn_20 = (gcnew System::Windows::Forms::Button());
			this->btn_30 = (gcnew System::Windows::Forms::Button());
			this->btn_40 = (gcnew System::Windows::Forms::Button());
			this->btn_50 = (gcnew System::Windows::Forms::Button());
			this->btn_51 = (gcnew System::Windows::Forms::Button());
			this->btn_41 = (gcnew System::Windows::Forms::Button());
			this->btn_31 = (gcnew System::Windows::Forms::Button());
			this->btn_21 = (gcnew System::Windows::Forms::Button());
			this->btn_11 = (gcnew System::Windows::Forms::Button());
			this->btn_12 = (gcnew System::Windows::Forms::Button());
			this->btn_22 = (gcnew System::Windows::Forms::Button());
			this->btn_32 = (gcnew System::Windows::Forms::Button());
			this->btn_42 = (gcnew System::Windows::Forms::Button());
			this->btn_52 = (gcnew System::Windows::Forms::Button());
			this->btn_53 = (gcnew System::Windows::Forms::Button());
			this->btn_54 = (gcnew System::Windows::Forms::Button());
			this->btn_55 = (gcnew System::Windows::Forms::Button());
			this->btn_45 = (gcnew System::Windows::Forms::Button());
			this->btn_44 = (gcnew System::Windows::Forms::Button());
			this->btn_43 = (gcnew System::Windows::Forms::Button());
			this->btn_33 = (gcnew System::Windows::Forms::Button());
			this->btn_34 = (gcnew System::Windows::Forms::Button());
			this->btn_35 = (gcnew System::Windows::Forms::Button());
			this->btn_25 = (gcnew System::Windows::Forms::Button());
			this->btn_15 = (gcnew System::Windows::Forms::Button());
			this->btn_14 = (gcnew System::Windows::Forms::Button());
			this->btn_13 = (gcnew System::Windows::Forms::Button());
			this->btn_23 = (gcnew System::Windows::Forms::Button());
			this->btn_24 = (gcnew System::Windows::Forms::Button());
			this->lb_title = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 81);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Key:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 228);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Input String:";
			// 
			// tb_Key
			// 
			this->tb_Key->Location = System::Drawing::Point(127, 78);
			this->tb_Key->Multiline = true;
			this->tb_Key->Name = L"tb_Key";
			this->tb_Key->Size = System::Drawing::Size(257, 77);
			this->tb_Key->TabIndex = 1;
			this->tb_Key->TextChanged += gcnew System::EventHandler(this, &PlayFairForm::tb_Key_TextChanged);
			this->tb_Key->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &PlayFairForm::tb_Key_KeyDown);
			// 
			// tb_Input
			// 
			this->tb_Input->Location = System::Drawing::Point(127, 225);
			this->tb_Input->Multiline = true;
			this->tb_Input->Name = L"tb_Input";
			this->tb_Input->Size = System::Drawing::Size(257, 122);
			this->tb_Input->TabIndex = 1;
			this->tb_Input->TextChanged += gcnew System::EventHandler(this, &PlayFairForm::tb_Input_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 450);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Output String:";
			// 
			// tb_Output
			// 
			this->tb_Output->Location = System::Drawing::Point(127, 447);
			this->tb_Output->Multiline = true;
			this->tb_Output->Name = L"tb_Output";
			this->tb_Output->ReadOnly = true;
			this->tb_Output->Size = System::Drawing::Size(257, 122);
			this->tb_Output->TabIndex = 1;
			// 
			// btn_Encrypt
			// 
			this->btn_Encrypt->Location = System::Drawing::Point(12, 371);
			this->btn_Encrypt->Name = L"btn_Encrypt";
			this->btn_Encrypt->Size = System::Drawing::Size(109, 47);
			this->btn_Encrypt->TabIndex = 2;
			this->btn_Encrypt->Text = L"Encrypt";
			this->btn_Encrypt->UseVisualStyleBackColor = true;
			this->btn_Encrypt->Click += gcnew System::EventHandler(this, &PlayFairForm::btn_Encrypt_Click);
			// 
			// btn_Decrypt
			// 
			this->btn_Decrypt->Location = System::Drawing::Point(140, 371);
			this->btn_Decrypt->Name = L"btn_Decrypt";
			this->btn_Decrypt->Size = System::Drawing::Size(111, 47);
			this->btn_Decrypt->TabIndex = 2;
			this->btn_Decrypt->Text = L"Decrypt";
			this->btn_Decrypt->UseVisualStyleBackColor = true;
			this->btn_Decrypt->Click += gcnew System::EventHandler(this, &PlayFairForm::btn_Decrypt_Click);
			// 
			// btn_ClrInput
			// 
			this->btn_ClrInput->BackColor = System::Drawing::Color::White;
			this->btn_ClrInput->Location = System::Drawing::Point(275, 371);
			this->btn_ClrInput->Name = L"btn_ClrInput";
			this->btn_ClrInput->Size = System::Drawing::Size(109, 47);
			this->btn_ClrInput->TabIndex = 2;
			this->btn_ClrInput->Text = L"Clear Input";
			this->btn_ClrInput->UseVisualStyleBackColor = false;
			this->btn_ClrInput->Click += gcnew System::EventHandler(this, &PlayFairForm::btn_ClrInput_Click);
			// 
			// btn_ClrKey
			// 
			this->btn_ClrKey->BackColor = System::Drawing::Color::White;
			this->btn_ClrKey->Location = System::Drawing::Point(275, 166);
			this->btn_ClrKey->Name = L"btn_ClrKey";
			this->btn_ClrKey->Size = System::Drawing::Size(109, 47);
			this->btn_ClrKey->TabIndex = 2;
			this->btn_ClrKey->Text = L"Clear Key";
			this->btn_ClrKey->UseVisualStyleBackColor = false;
			this->btn_ClrKey->Click += gcnew System::EventHandler(this, &PlayFairForm::btn_ClrKey_Click);
			// 
			// tb_Formatted
			// 
			this->tb_Formatted->Location = System::Drawing::Point(545, 404);
			this->tb_Formatted->Multiline = true;
			this->tb_Formatted->Name = L"tb_Formatted";
			this->tb_Formatted->ReadOnly = true;
			this->tb_Formatted->Size = System::Drawing::Size(348, 77);
			this->tb_Formatted->TabIndex = 1;
			this->tb_Formatted->Click += gcnew System::EventHandler(this, &PlayFairForm::tb_Formatted_Click);
			this->tb_Formatted->Leave += gcnew System::EventHandler(this, &PlayFairForm::tb_Formatted_Leave);
			// 
			// tb_Encrypted
			// 
			this->tb_Encrypted->Location = System::Drawing::Point(545, 492);
			this->tb_Encrypted->Multiline = true;
			this->tb_Encrypted->Name = L"tb_Encrypted";
			this->tb_Encrypted->ReadOnly = true;
			this->tb_Encrypted->Size = System::Drawing::Size(348, 77);
			this->tb_Encrypted->TabIndex = 1;
			this->tb_Encrypted->Click += gcnew System::EventHandler(this, &PlayFairForm::tb_Encrypted_Click);
			this->tb_Encrypted->Leave += gcnew System::EventHandler(this, &PlayFairForm::tb_Encrypted_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(391, 429);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Formatted Plaintext:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(391, 514);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Encrypted String:";
			// 
			// cb_5x5
			// 
			this->cb_5x5->AutoSize = true;
			this->cb_5x5->Checked = true;
			this->cb_5x5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->cb_5x5->Location = System::Drawing::Point(425, 91);
			this->cb_5x5->Name = L"cb_5x5";
			this->cb_5x5->Size = System::Drawing::Size(108, 24);
			this->cb_5x5->TabIndex = 4;
			this->cb_5x5->Text = L"5x5 matrix";
			this->cb_5x5->UseVisualStyleBackColor = true;
			this->cb_5x5->CheckedChanged += gcnew System::EventHandler(this, &PlayFairForm::cb_5x5_CheckedChanged);
			// 
			// cb_6x6
			// 
			this->cb_6x6->AutoSize = true;
			this->cb_6x6->Location = System::Drawing::Point(425, 121);
			this->cb_6x6->Name = L"cb_6x6";
			this->cb_6x6->Size = System::Drawing::Size(108, 24);
			this->cb_6x6->TabIndex = 4;
			this->cb_6x6->Text = L"6x6 matrix";
			this->cb_6x6->UseVisualStyleBackColor = true;
			this->cb_6x6->CheckedChanged += gcnew System::EventHandler(this, &PlayFairForm::cb_6x6_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(391, 225);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"First separator:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(391, 289);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Second separator:";
			// 
			// tb_Separator1
			// 
			this->tb_Separator1->Location = System::Drawing::Point(482, 248);
			this->tb_Separator1->Name = L"tb_Separator1";
			this->tb_Separator1->Size = System::Drawing::Size(51, 27);
			this->tb_Separator1->TabIndex = 5;
			this->tb_Separator1->Text = L"X";
			this->tb_Separator1->TextChanged += gcnew System::EventHandler(this, &PlayFairForm::tb_Separator1_TextChanged);
			this->tb_Separator1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &PlayFairForm::tb_Separator1_KeyDown);
			// 
			// tb_Separator2
			// 
			this->tb_Separator2->Location = System::Drawing::Point(482, 320);
			this->tb_Separator2->Name = L"tb_Separator2";
			this->tb_Separator2->Size = System::Drawing::Size(51, 27);
			this->tb_Separator2->TabIndex = 5;
			this->tb_Separator2->Text = L"Y";
			this->tb_Separator2->TextChanged += gcnew System::EventHandler(this, &PlayFairForm::tb_Separator2_TextChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->Controls->Add(this->btn_00, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_01, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_02, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_03, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_04, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_05, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_10, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_20, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_30, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_40, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_50, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->btn_51, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->btn_41, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_31, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_21, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_11, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_12, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_22, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_32, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_42, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_52, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->btn_53, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->btn_54, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->btn_55, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->btn_45, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_44, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_43, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_33, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_34, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_35, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_25, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_15, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_14, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_13, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_23, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_24, 4, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(545, 81);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(348, 317);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// btn_00
			// 
			this->btn_00->Location = System::Drawing::Point(3, 3);
			this->btn_00->Name = L"btn_00";
			this->btn_00->Size = System::Drawing::Size(51, 46);
			this->btn_00->TabIndex = 0;
			this->btn_00->UseVisualStyleBackColor = true;
			// 
			// btn_01
			// 
			this->btn_01->Location = System::Drawing::Point(60, 3);
			this->btn_01->Name = L"btn_01";
			this->btn_01->Size = System::Drawing::Size(51, 46);
			this->btn_01->TabIndex = 0;
			this->btn_01->UseVisualStyleBackColor = true;
			// 
			// btn_02
			// 
			this->btn_02->Location = System::Drawing::Point(117, 3);
			this->btn_02->Name = L"btn_02";
			this->btn_02->Size = System::Drawing::Size(51, 46);
			this->btn_02->TabIndex = 0;
			this->btn_02->UseVisualStyleBackColor = true;
			// 
			// btn_03
			// 
			this->btn_03->Location = System::Drawing::Point(174, 3);
			this->btn_03->Name = L"btn_03";
			this->btn_03->Size = System::Drawing::Size(51, 46);
			this->btn_03->TabIndex = 0;
			this->btn_03->UseVisualStyleBackColor = true;
			// 
			// btn_04
			// 
			this->btn_04->Location = System::Drawing::Point(231, 3);
			this->btn_04->Name = L"btn_04";
			this->btn_04->Size = System::Drawing::Size(51, 46);
			this->btn_04->TabIndex = 0;
			this->btn_04->UseVisualStyleBackColor = true;
			// 
			// btn_05
			// 
			this->btn_05->Location = System::Drawing::Point(288, 3);
			this->btn_05->Name = L"btn_05";
			this->btn_05->Size = System::Drawing::Size(51, 46);
			this->btn_05->TabIndex = 0;
			this->btn_05->UseVisualStyleBackColor = true;
			// 
			// btn_10
			// 
			this->btn_10->Location = System::Drawing::Point(3, 55);
			this->btn_10->Name = L"btn_10";
			this->btn_10->Size = System::Drawing::Size(51, 46);
			this->btn_10->TabIndex = 0;
			this->btn_10->UseVisualStyleBackColor = true;
			// 
			// btn_20
			// 
			this->btn_20->Location = System::Drawing::Point(3, 107);
			this->btn_20->Name = L"btn_20";
			this->btn_20->Size = System::Drawing::Size(51, 46);
			this->btn_20->TabIndex = 0;
			this->btn_20->UseVisualStyleBackColor = true;
			// 
			// btn_30
			// 
			this->btn_30->Location = System::Drawing::Point(3, 159);
			this->btn_30->Name = L"btn_30";
			this->btn_30->Size = System::Drawing::Size(51, 46);
			this->btn_30->TabIndex = 0;
			this->btn_30->UseVisualStyleBackColor = true;
			// 
			// btn_40
			// 
			this->btn_40->Location = System::Drawing::Point(3, 211);
			this->btn_40->Name = L"btn_40";
			this->btn_40->Size = System::Drawing::Size(51, 46);
			this->btn_40->TabIndex = 0;
			this->btn_40->UseVisualStyleBackColor = true;
			// 
			// btn_50
			// 
			this->btn_50->Location = System::Drawing::Point(3, 263);
			this->btn_50->Name = L"btn_50";
			this->btn_50->Size = System::Drawing::Size(51, 46);
			this->btn_50->TabIndex = 0;
			this->btn_50->UseVisualStyleBackColor = true;
			// 
			// btn_51
			// 
			this->btn_51->Location = System::Drawing::Point(60, 263);
			this->btn_51->Name = L"btn_51";
			this->btn_51->Size = System::Drawing::Size(51, 46);
			this->btn_51->TabIndex = 0;
			this->btn_51->UseVisualStyleBackColor = true;
			// 
			// btn_41
			// 
			this->btn_41->Location = System::Drawing::Point(60, 211);
			this->btn_41->Name = L"btn_41";
			this->btn_41->Size = System::Drawing::Size(51, 46);
			this->btn_41->TabIndex = 0;
			this->btn_41->UseVisualStyleBackColor = true;
			// 
			// btn_31
			// 
			this->btn_31->Location = System::Drawing::Point(60, 159);
			this->btn_31->Name = L"btn_31";
			this->btn_31->Size = System::Drawing::Size(51, 46);
			this->btn_31->TabIndex = 0;
			this->btn_31->UseVisualStyleBackColor = true;
			// 
			// btn_21
			// 
			this->btn_21->Location = System::Drawing::Point(60, 107);
			this->btn_21->Name = L"btn_21";
			this->btn_21->Size = System::Drawing::Size(51, 46);
			this->btn_21->TabIndex = 0;
			this->btn_21->UseVisualStyleBackColor = true;
			// 
			// btn_11
			// 
			this->btn_11->Location = System::Drawing::Point(60, 55);
			this->btn_11->Name = L"btn_11";
			this->btn_11->Size = System::Drawing::Size(51, 46);
			this->btn_11->TabIndex = 0;
			this->btn_11->UseVisualStyleBackColor = true;
			// 
			// btn_12
			// 
			this->btn_12->Location = System::Drawing::Point(117, 55);
			this->btn_12->Name = L"btn_12";
			this->btn_12->Size = System::Drawing::Size(51, 46);
			this->btn_12->TabIndex = 0;
			this->btn_12->UseVisualStyleBackColor = true;
			// 
			// btn_22
			// 
			this->btn_22->Location = System::Drawing::Point(117, 107);
			this->btn_22->Name = L"btn_22";
			this->btn_22->Size = System::Drawing::Size(51, 46);
			this->btn_22->TabIndex = 0;
			this->btn_22->UseVisualStyleBackColor = true;
			// 
			// btn_32
			// 
			this->btn_32->Location = System::Drawing::Point(117, 159);
			this->btn_32->Name = L"btn_32";
			this->btn_32->Size = System::Drawing::Size(51, 46);
			this->btn_32->TabIndex = 0;
			this->btn_32->UseVisualStyleBackColor = true;
			// 
			// btn_42
			// 
			this->btn_42->Location = System::Drawing::Point(117, 211);
			this->btn_42->Name = L"btn_42";
			this->btn_42->Size = System::Drawing::Size(51, 46);
			this->btn_42->TabIndex = 0;
			this->btn_42->UseVisualStyleBackColor = true;
			// 
			// btn_52
			// 
			this->btn_52->Location = System::Drawing::Point(117, 263);
			this->btn_52->Name = L"btn_52";
			this->btn_52->Size = System::Drawing::Size(51, 46);
			this->btn_52->TabIndex = 0;
			this->btn_52->UseVisualStyleBackColor = true;
			// 
			// btn_53
			// 
			this->btn_53->Location = System::Drawing::Point(174, 263);
			this->btn_53->Name = L"btn_53";
			this->btn_53->Size = System::Drawing::Size(51, 46);
			this->btn_53->TabIndex = 0;
			this->btn_53->UseVisualStyleBackColor = true;
			// 
			// btn_54
			// 
			this->btn_54->Location = System::Drawing::Point(231, 263);
			this->btn_54->Name = L"btn_54";
			this->btn_54->Size = System::Drawing::Size(51, 46);
			this->btn_54->TabIndex = 0;
			this->btn_54->UseVisualStyleBackColor = true;
			// 
			// btn_55
			// 
			this->btn_55->Location = System::Drawing::Point(288, 263);
			this->btn_55->Name = L"btn_55";
			this->btn_55->Size = System::Drawing::Size(51, 46);
			this->btn_55->TabIndex = 0;
			this->btn_55->UseVisualStyleBackColor = true;
			// 
			// btn_45
			// 
			this->btn_45->Location = System::Drawing::Point(288, 211);
			this->btn_45->Name = L"btn_45";
			this->btn_45->Size = System::Drawing::Size(51, 46);
			this->btn_45->TabIndex = 0;
			this->btn_45->UseVisualStyleBackColor = true;
			// 
			// btn_44
			// 
			this->btn_44->Location = System::Drawing::Point(231, 211);
			this->btn_44->Name = L"btn_44";
			this->btn_44->Size = System::Drawing::Size(51, 46);
			this->btn_44->TabIndex = 0;
			this->btn_44->UseVisualStyleBackColor = true;
			// 
			// btn_43
			// 
			this->btn_43->Location = System::Drawing::Point(174, 211);
			this->btn_43->Name = L"btn_43";
			this->btn_43->Size = System::Drawing::Size(51, 46);
			this->btn_43->TabIndex = 0;
			this->btn_43->UseVisualStyleBackColor = true;
			// 
			// btn_33
			// 
			this->btn_33->Location = System::Drawing::Point(174, 159);
			this->btn_33->Name = L"btn_33";
			this->btn_33->Size = System::Drawing::Size(51, 46);
			this->btn_33->TabIndex = 0;
			this->btn_33->UseVisualStyleBackColor = true;
			// 
			// btn_34
			// 
			this->btn_34->Location = System::Drawing::Point(231, 159);
			this->btn_34->Name = L"btn_34";
			this->btn_34->Size = System::Drawing::Size(51, 46);
			this->btn_34->TabIndex = 0;
			this->btn_34->UseVisualStyleBackColor = true;
			// 
			// btn_35
			// 
			this->btn_35->Location = System::Drawing::Point(288, 159);
			this->btn_35->Name = L"btn_35";
			this->btn_35->Size = System::Drawing::Size(51, 46);
			this->btn_35->TabIndex = 0;
			this->btn_35->UseVisualStyleBackColor = true;
			// 
			// btn_25
			// 
			this->btn_25->Location = System::Drawing::Point(288, 107);
			this->btn_25->Name = L"btn_25";
			this->btn_25->Size = System::Drawing::Size(51, 46);
			this->btn_25->TabIndex = 0;
			this->btn_25->UseVisualStyleBackColor = true;
			// 
			// btn_15
			// 
			this->btn_15->Location = System::Drawing::Point(288, 55);
			this->btn_15->Name = L"btn_15";
			this->btn_15->Size = System::Drawing::Size(51, 46);
			this->btn_15->TabIndex = 0;
			this->btn_15->UseVisualStyleBackColor = true;
			// 
			// btn_14
			// 
			this->btn_14->Location = System::Drawing::Point(231, 55);
			this->btn_14->Name = L"btn_14";
			this->btn_14->Size = System::Drawing::Size(51, 46);
			this->btn_14->TabIndex = 0;
			this->btn_14->UseVisualStyleBackColor = true;
			// 
			// btn_13
			// 
			this->btn_13->Location = System::Drawing::Point(174, 55);
			this->btn_13->Name = L"btn_13";
			this->btn_13->Size = System::Drawing::Size(51, 46);
			this->btn_13->TabIndex = 0;
			this->btn_13->UseVisualStyleBackColor = true;
			// 
			// btn_23
			// 
			this->btn_23->Location = System::Drawing::Point(174, 107);
			this->btn_23->Name = L"btn_23";
			this->btn_23->Size = System::Drawing::Size(51, 46);
			this->btn_23->TabIndex = 0;
			this->btn_23->UseVisualStyleBackColor = true;
			// 
			// btn_24
			// 
			this->btn_24->Location = System::Drawing::Point(231, 107);
			this->btn_24->Name = L"btn_24";
			this->btn_24->Size = System::Drawing::Size(51, 46);
			this->btn_24->TabIndex = 0;
			this->btn_24->UseVisualStyleBackColor = true;
			// 
			// lb_title
			// 
			this->lb_title->AutoSize = true;
			this->lb_title->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_title->Location = System::Drawing::Point(364, 19);
			this->lb_title->Name = L"lb_title";
			this->lb_title->Size = System::Drawing::Size(208, 35);
			this->lb_title->TabIndex = 14;
			this->lb_title->Text = L"Playfair Cipher";
			// 
			// PlayFairForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(912, 585);
			this->Controls->Add(this->lb_title);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tb_Separator2);
			this->Controls->Add(this->tb_Separator1);
			this->Controls->Add(this->cb_6x6);
			this->Controls->Add(this->cb_5x5);
			this->Controls->Add(this->btn_ClrKey);
			this->Controls->Add(this->btn_ClrInput);
			this->Controls->Add(this->btn_Decrypt);
			this->Controls->Add(this->btn_Encrypt);
			this->Controls->Add(this->tb_Output);
			this->Controls->Add(this->tb_Input);
			this->Controls->Add(this->tb_Encrypted);
			this->Controls->Add(this->tb_Formatted);
			this->Controls->Add(this->tb_Key);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PlayFairForm";
			this->Text = L"PlayFairForm";
			this->Load += gcnew System::EventHandler(this, &PlayFairForm::PlayFairForm_Load);
			this->Click += gcnew System::EventHandler(this, &PlayFairForm::PlayFairForm_Click);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
PlayfairCipher^ playfairCipher;
int matrixSize;
private: System::Void PlayFairForm_Load(System::Object^ sender, System::EventArgs^ e) {
	cb_5x5->Checked = true;
	cb_6x6->Checked = false;
	matrixSize = 5;
	playfairCipher = gcnew PlayfairCipher(5);
	DisplayMatrix5();
}
void DisplayMatrix5() {
		   char** temp = new char*;
		   temp = playfairCipher->getMatrix();
		   btn_00->Text = String(static_cast<char>(temp[0][0]), 1).ToString();
		   btn_01->Text = String(static_cast<char>(temp[0][1]), 1).ToString();
		   btn_02->Text = String(static_cast<char>(temp[0][2]), 1).ToString();
		   btn_03->Text = String(static_cast<char>(temp[0][3]), 1).ToString();
		   btn_04->Text = String(static_cast<char>(temp[0][4]), 1).ToString();
		   btn_05->Text = "";
		   btn_10->Text = String(static_cast<char>(temp[1][0]), 1).ToString();
		   btn_11->Text = String(static_cast<char>(temp[1][1]), 1).ToString();
		   btn_12->Text = String(static_cast<char>(temp[1][2]), 1).ToString();
		   btn_13->Text = String(static_cast<char>(temp[1][3]), 1).ToString();
		   btn_14->Text = String(static_cast<char>(temp[1][4]), 1).ToString();
		   btn_15->Text = "";
		   btn_20->Text = String(static_cast<char>(temp[2][0]), 1).ToString();
		   btn_21->Text = String(static_cast<char>(temp[2][1]), 1).ToString();
		   btn_22->Text = String(static_cast<char>(temp[2][2]), 1).ToString();
		   btn_23->Text = String(static_cast<char>(temp[2][3]), 1).ToString();
		   btn_24->Text = String(static_cast<char>(temp[2][4]), 1).ToString();
		   btn_25->Text = "";
		   btn_30->Text = String(static_cast<char>(temp[3][0]), 1).ToString();
		   btn_31->Text = String(static_cast<char>(temp[3][1]), 1).ToString();
		   btn_32->Text = String(static_cast<char>(temp[3][2]), 1).ToString();
		   btn_33->Text = String(static_cast<char>(temp[3][3]), 1).ToString();
		   btn_34->Text = String(static_cast<char>(temp[3][4]), 1).ToString();
		   btn_35->Text = "";
		   btn_40->Text = String(static_cast<char>(temp[4][0]), 1).ToString();
		   btn_41->Text = String(static_cast<char>(temp[4][1]), 1).ToString();
		   btn_42->Text = String(static_cast<char>(temp[4][2]), 1).ToString();
		   btn_43->Text = String(static_cast<char>(temp[4][3]), 1).ToString();
		   btn_44->Text = String(static_cast<char>(temp[4][4]), 1).ToString();
		   btn_45->Text = "";
		   btn_50->Text = "";
		   btn_51->Text = "";
		   btn_52->Text = "";
		   btn_53->Text = "";
		   btn_54->Text = "";
		   btn_55->Text = "";
	   }
void DisplayMatrix6() {
	char** temp = new char*;
	temp = playfairCipher->getMatrix();
	btn_00->Text = String(static_cast<char>(temp[0][0]), 1).ToString();
	btn_01->Text = String(static_cast<char>(temp[0][1]), 1).ToString();
	btn_02->Text = String(static_cast<char>(temp[0][2]), 1).ToString();
	btn_03->Text = String(static_cast<char>(temp[0][3]), 1).ToString();
	btn_04->Text = String(static_cast<char>(temp[0][4]), 1).ToString();
	btn_05->Text = String(static_cast<char>(temp[0][5]), 1).ToString();
	btn_10->Text = String(static_cast<char>(temp[1][0]), 1).ToString();
	btn_11->Text = String(static_cast<char>(temp[1][1]), 1).ToString();
	btn_12->Text = String(static_cast<char>(temp[1][2]), 1).ToString();
	btn_13->Text = String(static_cast<char>(temp[1][3]), 1).ToString();
	btn_14->Text = String(static_cast<char>(temp[1][4]), 1).ToString();
	btn_15->Text = String(static_cast<char>(temp[1][5]), 1).ToString();
	btn_20->Text = String(static_cast<char>(temp[2][0]), 1).ToString();
	btn_21->Text = String(static_cast<char>(temp[2][1]), 1).ToString();
	btn_22->Text = String(static_cast<char>(temp[2][2]), 1).ToString();
	btn_23->Text = String(static_cast<char>(temp[2][3]), 1).ToString();
	btn_24->Text = String(static_cast<char>(temp[2][4]), 1).ToString();
	btn_25->Text = String(static_cast<char>(temp[2][5]), 1).ToString();
	btn_30->Text = String(static_cast<char>(temp[3][0]), 1).ToString();
	btn_31->Text = String(static_cast<char>(temp[3][1]), 1).ToString();
	btn_32->Text = String(static_cast<char>(temp[3][2]), 1).ToString();
	btn_33->Text = String(static_cast<char>(temp[3][3]), 1).ToString();
	btn_34->Text = String(static_cast<char>(temp[3][4]), 1).ToString();
	btn_35->Text = String(static_cast<char>(temp[3][5]), 1).ToString();
	btn_40->Text = String(static_cast<char>(temp[4][0]), 1).ToString();
	btn_41->Text = String(static_cast<char>(temp[4][1]), 1).ToString();
	btn_42->Text = String(static_cast<char>(temp[4][2]), 1).ToString();
	btn_43->Text = String(static_cast<char>(temp[4][3]), 1).ToString();
	btn_44->Text = String(static_cast<char>(temp[4][4]), 1).ToString();
	btn_45->Text = String(static_cast<char>(temp[4][5]), 1).ToString();
	btn_50->Text = String(static_cast<char>(temp[5][0]), 1).ToString();
	btn_51->Text = String(static_cast<char>(temp[5][1]), 1).ToString();
	btn_52->Text = String(static_cast<char>(temp[5][2]), 1).ToString();
	btn_53->Text = String(static_cast<char>(temp[5][3]), 1).ToString();
	btn_54->Text = String(static_cast<char>(temp[5][4]), 1).ToString();
	btn_55->Text = String(static_cast<char>(temp[5][5]), 1).ToString();
}
private: System::Void tb_Key_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	tb_Formatted->Clear();
	tb_Encrypted->Clear();
	tb_Output->Clear();
	String^ temp = this->tb_Key->Text;	
	//chuyen tu dang system ve chuan binh thuong (std::string)
	std::string stlString = "";
	for (int i = 0; i < temp->Length; i++) {stlString += temp[i];}
	// (cStr);

	playfairCipher->createKeyMatrix(stlString);

	if (matrixSize == 5) DisplayMatrix5();
	else DisplayMatrix6();
}
private: System::Void btn_ClrKey_Click(System::Object^ sender, System::EventArgs^ e) {
	tb_Key->Clear();
}
private: System::Void cb_5x5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cb_5x5->Checked) {
		cb_6x6->Checked = false;
		matrixSize = 5;
		PlayfairCipher^ temp = gcnew PlayfairCipher(matrixSize);
		playfairCipher = temp;
		tb_Key_TextChanged(sender, e);
	}
	else {
		cb_6x6->Checked = true;
		cb_6x6_CheckedChanged(sender,e);
	}
}
private: System::Void cb_6x6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cb_6x6->Checked) {
		cb_5x5->Checked = false;
		matrixSize = 6;
		PlayfairCipher^ temp = gcnew PlayfairCipher(matrixSize);
		playfairCipher = temp;
		tb_Key_TextChanged(sender, e);
	}
	else {
		cb_5x5->Checked = true;
		cb_5x5_CheckedChanged(sender,e);
	}
}
	   String^ DisplayFormattedText(string str) {
		   string temp = "";
		   for (int i = 0; i < str.length(); i+=2) {
			   temp = temp+ str[i] + str[i + 1];
			   if (i + 2 < str.length()) temp += ' ';
		   }
		   return String(temp.c_str()).ToString();
	   }
private: System::Void btn_Encrypt_Click(System::Object^ sender, System::EventArgs^ e) {
	//kiem tra input
	if (String::IsNullOrEmpty(tb_Input->Text)) {
		MessageBox::Show("Please enter an input");
		return;
	}
	//kiem tra separator 1 & 2
	if (String::IsNullOrEmpty(tb_Separator1->Text) || String::IsNullOrEmpty(tb_Separator2->Text)
		|| tb_Separator1->Text->ToUpper() == tb_Separator2->Text->ToUpper()) {
		MessageBox::Show("Please check the separators");
		return;
	}
	//formatting the input text
	string formattedInput = formattingInput(tb_Input->Text,tb_Separator1->Text[0], tb_Separator2->Text[0]);
	if (formattedInput.empty()) {
		MessageBox::Show("Please enter a valid input");
		return;
	}
	//hien thi formatted input
	tb_Formatted->Text = DisplayFormattedText(formattedInput);
	//ma hoa
	string encryptedText = playfairCipher->Encrypt(formattedInput);
	tb_Encrypted->Text = DisplayFormattedText(encryptedText);

	//hien thi
	tb_Output->Text = String(encryptedText.c_str()).ToString();
}
	string formattingInput(String^ str, char sep1,char sep2) {
		str = str->ToUpper();
		string temp = "", result = "";
		sep1 = toupper(sep1);
		sep2 = toupper(sep2);
		if (matrixSize == 5) {
			//Loai bo ki tu khong hop le
			for (int i = 0; i < str->Length; i++) {
				if (str[i] <= 'Z' && str[i] >= 'A') {
					temp += str[i];
				}
			}
		}
		else {
			//Loai bo ki tu khong hop le
			for (int i = 0; i < str->Length; i++) {
				if ((str[i] <= 'Z' && str[i] >= 'A') || (str[i] <= '9' && str[i] >= '0')) {
					temp += str[i];
				}
			}
		}
		for (int i = 0; i < temp.length(); i++) {
			result += temp[i];
			//Tach cac ki tu trung nhau : aa -> ax ax; xx -> xy xy
			if (i + 1 < temp.length() && (temp[i + 1] == temp[i]|| (temp[i + 1] == 'I' && temp[i]=='J') || (temp[i + 1] == 'J' && temp[i] == 'I')) && result.length() % 2) {
				if (temp[i] != sep1) result += sep1;
				else result += sep2;
			}
		}
		//kiem tra phan tu cuoi cung co bi le hay khong
		if (result.length() % 2) {
			if (result.back() == sep1) result += sep2;
			else result += sep1;
		}
		return result;
	}
private: System::Void btn_ClrInput_Click(System::Object^ sender, System::EventArgs^ e) {
	tb_Input->Clear();
	tb_Formatted->Clear();
	tb_Encrypted->Clear();
	tb_Output->Clear();
}
private: System::Void btn_Decrypt_Click(System::Object^ sender, System::EventArgs^ e) {
	//kiem tra input
	if (String::IsNullOrEmpty(tb_Input->Text)) {
		MessageBox::Show("Please enter an input");
		return;
	}
	//kiem tra separator 1 & 2
	if (String::IsNullOrEmpty(tb_Separator1->Text) || String::IsNullOrEmpty(tb_Separator2->Text)
		|| tb_Separator1->Text->ToUpper() == tb_Separator2->Text->ToUpper()) {
		MessageBox::Show("Please enter valid separators");
		return;
	}
	//formatting the input text
	string formattedInput = formattingInput(tb_Input->Text, tb_Separator1->Text[0], tb_Separator2->Text[0]);
	if (formattedInput.empty()) {
		MessageBox::Show("Please enter a valid input");
		return;
	}
	//giai ma
	string decryptedText = playfairCipher->Decrypt(formattedInput);
	tb_Formatted->Text = DisplayFormattedText(decryptedText);
	tb_Encrypted->Text = DisplayFormattedText(formattedInput);
	//hien thi
	tb_Output->Text = String(decryptedText.c_str()).ToString();
}
private: System::Void tb_Formatted_Click(System::Object^ sender, System::EventArgs^ e) {
	lightButtonDown();
	int mouseCursor = (tb_Formatted->SelectionStart / 3) * 3;
	tb_Formatted->SelectionStart = mouseCursor;
	tb_Formatted->SelectionLength = 2;
	char i1 = tb_Formatted->Text[mouseCursor];
	char i2 = tb_Formatted->Text[mouseCursor + 1];
	char o1 = tb_Encrypted->Text[mouseCursor];
	char o2 = tb_Encrypted->Text[mouseCursor + 1];
	if (i1 == o1 || i1 == o2)	lightButtonUp(i1, 3);
	else lightButtonUp(i1, 2);
	if (i2 == o1 || i2 == o2)	lightButtonUp(i2, 3);
	else lightButtonUp(i2, 2);
	if (i1 == o1 || i2 == o1)	lightButtonUp(o1, 3);
	else lightButtonUp(o1, 1);
	if (i1 == o2 || i2 == o2)	lightButtonUp(o2, 3);
	else lightButtonUp(o2, 1);
}
private: System::Void tb_Encrypted_Click(System::Object^ sender, System::EventArgs^ e) {
	lightButtonDown();
	int mouseCursor = (tb_Encrypted->SelectionStart / 3) * 3;
	tb_Encrypted->SelectionStart = mouseCursor;
	tb_Encrypted->SelectionLength = 2;
	char i1 = tb_Formatted->Text[mouseCursor];
	char i2 = tb_Formatted->Text[mouseCursor + 1];
	char o1 = tb_Encrypted->Text[mouseCursor];
	char o2 = tb_Encrypted->Text[mouseCursor + 1];
	if (i1 == o1 || i1 == o2)	lightButtonUp(i1, 3);
	else lightButtonUp(i1, 2);
	if (i2 == o1 || i2 == o2)	lightButtonUp(i2, 3);
	else lightButtonUp(i2, 2);
	if (i1 == o1 || i2 == o1)	lightButtonUp(o1, 3);
	else lightButtonUp(o1, 1);
	if (i1 == o2 || i2 == o2)	lightButtonUp(o2, 3);
	else lightButtonUp(o2, 1);
}
	   void lightButtonDown() {
		   for each (Control ^ btn in tableLayoutPanel1->Controls) {
			   btn->BackColor = BackColor.White;
		   }
	   }
	   void lightButtonUp(char c, int color) {
		   for (int i = 0; i < 6; i++) {
			   for (int j = 0; j < 6; j++) {
				   String^ buttonName = "btn_" + i.ToString() + j.ToString();
				   for each (Control^ btn in tableLayoutPanel1->Controls) {
					   if (btn->Name == buttonName && !String::IsNullOrEmpty(btn->Text) && btn->Text[0] == c) {
							if(color == 1)
							   btn->BackColor = BackColor.LightPink;
							if (color == 2)
								btn->BackColor = BackColor.LightBlue;
							if (color == 3)
								btn->BackColor = BackColor.Orange;
					   }
				   }
			   }
		   }
	   }

private: System::Void tb_Formatted_Leave(System::Object^ sender, System::EventArgs^ e) {
	lightButtonDown();
}
private: System::Void tb_Encrypted_Leave(System::Object^ sender, System::EventArgs^ e) {
	lightButtonDown();
}
private: System::Void tb_Input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	tb_Formatted->Clear();
	tb_Encrypted->Clear();
	tb_Output->Clear();
}
private: System::Void tb_Separator1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	tb_Formatted->Clear();
	tb_Encrypted->Clear();
	tb_Output->Clear();
	tb_Separator1->Text = tb_Separator1->Text->ToUpper();
	if (matrixSize == 5) {
		if (tb_Separator1->Text->Length > 1) {
			MessageBox::Show("Please enter a valid separator");
			tb_Separator1->Clear();
		}
		else
		if (tb_Separator1->Text->Length == 1 && (tb_Separator1->Text[0] > 'Z' || tb_Separator1->Text[0] < 'A')) {
			MessageBox::Show("Please enter a valid separator");
			tb_Separator1->Clear();
		}
	}
	else{
		if (tb_Separator1->Text->Length > 1) {
			MessageBox::Show("Please enter a valid separator");
			tb_Separator1->Clear();
		}
		else
		if (tb_Separator1->Text->Length == 1 && (tb_Separator1->Text[0] < '0' || tb_Separator1->Text[0] > 'Z' || (tb_Separator1->Text[0] > '9' && tb_Separator1->Text[0] < 'A'))) {
			MessageBox::Show("Please enter a valid separator");
			tb_Separator1->Clear();
		}
	}
}
private: System::Void tb_Separator2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	tb_Formatted->Clear();
	tb_Encrypted->Clear();
	tb_Output->Clear();
	tb_Separator2->Text = tb_Separator2->Text->ToUpper();
	if (matrixSize == 5) {
		if (tb_Separator2->Text->Length > 1) {
			MessageBox::Show("Please enter a valid separator");
			tb_Separator2->Clear();
		}
		else
			if (tb_Separator2->Text->Length == 1 && (tb_Separator2->Text[0] > 'Z' || tb_Separator2->Text[0] < 'A')) {
				MessageBox::Show("Please enter a valid separator");
				tb_Separator2->Clear();
			}
	}
	else {
		if (tb_Separator2->Text->Length > 1) {
			MessageBox::Show("Please enter a valid separator");
			tb_Separator2->Clear();
		}
		else
			if (tb_Separator2->Text->Length == 1 && (tb_Separator2->Text[0] < '0' || tb_Separator2->Text[0] > 'Z' || (tb_Separator2->Text[0] > '9' && tb_Separator2->Text[0] < 'A'))) {
				MessageBox::Show("Please enter a valid separator");
				tb_Separator2->Clear();
			}
	}
}
private: System::Void tb_Key_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) tb_Input->Focus();
}
private: System::Void tb_Separator1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) tb_Separator2->Focus();
}
private: System::Void PlayFairForm_Click(System::Object^ sender, System::EventArgs^ e) {
	lightButtonDown();
}
};
}

