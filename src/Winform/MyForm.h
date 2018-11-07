#pragma once
#include"QINT.h"
#include"QFloat.h"
#include <msclr/marshal_cppstd.h>
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabCTRL;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::RadioButton^  btnMODE_HEX;
	private: System::Windows::Forms::RadioButton^  btnMODE_DEC;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  btnMODE_BIN;
	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::Windows::Forms::Button^  btnSHIFT_LEFT;
	private: System::Windows::Forms::Button^  btnROR;
	private: System::Windows::Forms::Button^  btnAND;
	private: System::Windows::Forms::Button^  btnOR;
	private: System::Windows::Forms::Button^  btnXOR;
	private: System::Windows::Forms::Button^  btnNOT;
	private: System::Windows::Forms::Label^  lbShowOp;
	private: System::Windows::Forms::Button^  btnSHIFT_RIGHT;
	private: System::Windows::Forms::Button^  btnROL;
	private: System::Windows::Forms::Button^  btnDiv;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnSub;
	private: System::Windows::Forms::Button^  btnMul;
	private: System::Windows::Forms::Button^  btnHEX;
	private: System::Windows::Forms::Button^  btnDEC;
	private: System::Windows::Forms::Button^  btnBIN;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  btnResult;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::TextBox^  textBoxFloat;

	private: System::Windows::Forms::Button^  btnConvert;
	private: System::Windows::Forms::RadioButton^  radioDECBinMODE;
	private: System::Windows::Forms::RadioButton^  radioFLOATBinMODE;
	private: System::Windows::Forms::RadioButton^  radioToBin;

	private: System::Windows::Forms::RadioButton^  radioToDec;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonFloatClear;
	private: System::Windows::Forms::Button^  btnDot;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  btnNegative;
	private: System::Windows::Forms::Button^  btnF;
	private: System::Windows::Forms::Button^  btnE;
	private: System::Windows::Forms::Button^  btnB;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btnD;
	private: System::Windows::Forms::Button^  btnA;


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
			this->tabCTRL = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnMODE_HEX = (gcnew System::Windows::Forms::RadioButton());
			this->btnMODE_DEC = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnMODE_BIN = (gcnew System::Windows::Forms::RadioButton());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnSHIFT_LEFT = (gcnew System::Windows::Forms::Button());
			this->btnROR = (gcnew System::Windows::Forms::Button());
			this->btnAND = (gcnew System::Windows::Forms::Button());
			this->btnOR = (gcnew System::Windows::Forms::Button());
			this->btnXOR = (gcnew System::Windows::Forms::Button());
			this->btnNOT = (gcnew System::Windows::Forms::Button());
			this->lbShowOp = (gcnew System::Windows::Forms::Label());
			this->btnSHIFT_RIGHT = (gcnew System::Windows::Forms::Button());
			this->btnROL = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btnHEX = (gcnew System::Windows::Forms::Button());
			this->btnDEC = (gcnew System::Windows::Forms::Button());
			this->btnBIN = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnNegative = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->buttonFloatClear = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioToBin = (gcnew System::Windows::Forms::RadioButton());
			this->radioToDec = (gcnew System::Windows::Forms::RadioButton());
			this->radioFLOATBinMODE = (gcnew System::Windows::Forms::RadioButton());
			this->radioDECBinMODE = (gcnew System::Windows::Forms::RadioButton());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->textBoxFloat = (gcnew System::Windows::Forms::TextBox());
			this->tabCTRL->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabCTRL
			// 
			this->tabCTRL->Controls->Add(this->tabPage1);
			this->tabCTRL->Controls->Add(this->tabPage2);
			this->tabCTRL->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabCTRL->Location = System::Drawing::Point(-2, -2);
			this->tabCTRL->Name = L"tabCTRL";
			this->tabCTRL->SelectedIndex = 0;
			this->tabCTRL->Size = System::Drawing::Size(427, 524);
			this->tabCTRL->TabIndex = 46;
			this->tabCTRL->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::switchTab);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnF);
			this->tabPage1->Controls->Add(this->btnE);
			this->tabPage1->Controls->Add(this->btnB);
			this->tabPage1->Controls->Add(this->btnC);
			this->tabPage1->Controls->Add(this->btnD);
			this->tabPage1->Controls->Add(this->btnA);
			this->tabPage1->Controls->Add(this->btnMODE_HEX);
			this->tabPage1->Controls->Add(this->btnMODE_DEC);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->btnMODE_BIN);
			this->tabPage1->Controls->Add(this->txtDisplay);
			this->tabPage1->Controls->Add(this->btnSHIFT_LEFT);
			this->tabPage1->Controls->Add(this->btnROR);
			this->tabPage1->Controls->Add(this->btnAND);
			this->tabPage1->Controls->Add(this->btnOR);
			this->tabPage1->Controls->Add(this->btnXOR);
			this->tabPage1->Controls->Add(this->btnNOT);
			this->tabPage1->Controls->Add(this->lbShowOp);
			this->tabPage1->Controls->Add(this->btnSHIFT_RIGHT);
			this->tabPage1->Controls->Add(this->btnROL);
			this->tabPage1->Controls->Add(this->btnDiv);
			this->tabPage1->Controls->Add(this->btnAdd);
			this->tabPage1->Controls->Add(this->btnSub);
			this->tabPage1->Controls->Add(this->btnMul);
			this->tabPage1->Controls->Add(this->btnHEX);
			this->tabPage1->Controls->Add(this->btnDEC);
			this->tabPage1->Controls->Add(this->btnBIN);
			this->tabPage1->Controls->Add(this->btnClear);
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->btnResult);
			this->tabPage1->Controls->Add(this->btn0);
			this->tabPage1->Controls->Add(this->btn8);
			this->tabPage1->Controls->Add(this->btn9);
			this->tabPage1->Controls->Add(this->btn7);
			this->tabPage1->Controls->Add(this->btn5);
			this->tabPage1->Controls->Add(this->btn6);
			this->tabPage1->Controls->Add(this->btn4);
			this->tabPage1->Controls->Add(this->btn2);
			this->tabPage1->Controls->Add(this->btn3);
			this->tabPage1->Controls->Add(this->btn1);
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(419, 496);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"QINT";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnF
			// 
			this->btnF->Enabled = false;
			this->btnF->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnF->Location = System::Drawing::Point(348, 196);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(60, 35);
			this->btnF->TabIndex = 84;
			this->btnF->Text = L"F";
			this->btnF->UseVisualStyleBackColor = true;
			this->btnF->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btnE
			// 
			this->btnE->Enabled = false;
			this->btnE->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnE->Location = System::Drawing::Point(281, 196);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(60, 35);
			this->btnE->TabIndex = 83;
			this->btnE->Text = L"E";
			this->btnE->UseVisualStyleBackColor = true;
			this->btnE->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btnB
			// 
			this->btnB->Enabled = false;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB->Location = System::Drawing::Point(77, 196);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(60, 35);
			this->btnB->TabIndex = 82;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = true;
			this->btnB->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btnC
			// 
			this->btnC->Enabled = false;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(143, 196);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(60, 35);
			this->btnC->TabIndex = 81;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btnD
			// 
			this->btnD->Enabled = false;
			this->btnD->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnD->Location = System::Drawing::Point(215, 196);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(60, 35);
			this->btnD->TabIndex = 80;
			this->btnD->Text = L"D";
			this->btnD->UseVisualStyleBackColor = true;
			this->btnD->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btnA
			// 
			this->btnA->Enabled = false;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA->Location = System::Drawing::Point(11, 196);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(60, 35);
			this->btnA->TabIndex = 79;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = true;
			this->btnA->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btnMODE_HEX
			// 
			this->btnMODE_HEX->AutoSize = true;
			this->btnMODE_HEX->Location = System::Drawing::Point(173, 131);
			this->btnMODE_HEX->Name = L"btnMODE_HEX";
			this->btnMODE_HEX->Size = System::Drawing::Size(46, 19);
			this->btnMODE_HEX->TabIndex = 78;
			this->btnMODE_HEX->Text = L"Hex";
			this->btnMODE_HEX->UseVisualStyleBackColor = true;
			this->btnMODE_HEX->Click += gcnew System::EventHandler(this, &MyForm2::btnMODE_HEX_CheckedChanged);
			// 
			// btnMODE_DEC
			// 
			this->btnMODE_DEC->AutoSize = true;
			this->btnMODE_DEC->Checked = true;
			this->btnMODE_DEC->Location = System::Drawing::Point(245, 131);
			this->btnMODE_DEC->Name = L"btnMODE_DEC";
			this->btnMODE_DEC->Size = System::Drawing::Size(46, 19);
			this->btnMODE_DEC->TabIndex = 77;
			this->btnMODE_DEC->TabStop = true;
			this->btnMODE_DEC->Text = L"Dec";
			this->btnMODE_DEC->UseVisualStyleBackColor = true;
			this->btnMODE_DEC->Click += gcnew System::EventHandler(this, &MyForm2::btnMODE_DEC_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(13, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 15);
			this->label1->TabIndex = 76;
			this->label1->Text = L"MODE";
			// 
			// btnMODE_BIN
			// 
			this->btnMODE_BIN->AutoSize = true;
			this->btnMODE_BIN->Location = System::Drawing::Point(97, 131);
			this->btnMODE_BIN->Name = L"btnMODE_BIN";
			this->btnMODE_BIN->Size = System::Drawing::Size(46, 19);
			this->btnMODE_BIN->TabIndex = 75;
			this->btnMODE_BIN->Text = L"Bin";
			this->btnMODE_BIN->UseVisualStyleBackColor = true;
			this->btnMODE_BIN->Click += gcnew System::EventHandler(this, &MyForm2::btnMODE_BIN_CheckedChanged);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(1, 30);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(417, 97);
			this->txtDisplay->TabIndex = 46;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnSHIFT_LEFT
			// 
			this->btnSHIFT_LEFT->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSHIFT_LEFT->Location = System::Drawing::Point(333, 155);
			this->btnSHIFT_LEFT->Name = L"btnSHIFT_LEFT";
			this->btnSHIFT_LEFT->Size = System::Drawing::Size(75, 35);
			this->btnSHIFT_LEFT->TabIndex = 74;
			this->btnSHIFT_LEFT->Text = L"<<";
			this->btnSHIFT_LEFT->UseVisualStyleBackColor = true;
			this->btnSHIFT_LEFT->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnROR
			// 
			this->btnROR->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnROR->Location = System::Drawing::Point(349, 299);
			this->btnROR->Name = L"btnROR";
			this->btnROR->Size = System::Drawing::Size(60, 60);
			this->btnROR->TabIndex = 73;
			this->btnROR->Text = L"ROR";
			this->btnROR->UseVisualStyleBackColor = true;
			this->btnROR->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnAND
			// 
			this->btnAND->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAND->Location = System::Drawing::Point(281, 234);
			this->btnAND->Name = L"btnAND";
			this->btnAND->Size = System::Drawing::Size(60, 60);
			this->btnAND->TabIndex = 72;
			this->btnAND->Text = L"AND";
			this->btnAND->UseVisualStyleBackColor = true;
			this->btnAND->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnOR
			// 
			this->btnOR->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOR->Location = System::Drawing::Point(281, 299);
			this->btnOR->Name = L"btnOR";
			this->btnOR->Size = System::Drawing::Size(60, 60);
			this->btnOR->TabIndex = 71;
			this->btnOR->Text = L"OR";
			this->btnOR->UseVisualStyleBackColor = true;
			this->btnOR->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnXOR
			// 
			this->btnXOR->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXOR->Location = System::Drawing::Point(281, 364);
			this->btnXOR->Name = L"btnXOR";
			this->btnXOR->Size = System::Drawing::Size(60, 60);
			this->btnXOR->TabIndex = 70;
			this->btnXOR->Text = L"XOR";
			this->btnXOR->UseVisualStyleBackColor = true;
			this->btnXOR->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnNOT
			// 
			this->btnNOT->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNOT->Location = System::Drawing::Point(281, 430);
			this->btnNOT->Name = L"btnNOT";
			this->btnNOT->Size = System::Drawing::Size(60, 60);
			this->btnNOT->TabIndex = 69;
			this->btnNOT->Text = L"NOT";
			this->btnNOT->UseVisualStyleBackColor = true;
			this->btnNOT->Click += gcnew System::EventHandler(this, &MyForm2::btnNOT_Click);
			// 
			// lbShowOp
			// 
			this->lbShowOp->AutoSize = true;
			this->lbShowOp->BackColor = System::Drawing::Color::White;
			this->lbShowOp->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbShowOp->Location = System::Drawing::Point(2, 4);
			this->lbShowOp->Name = L"lbShowOp";
			this->lbShowOp->Size = System::Drawing::Size(0, 22);
			this->lbShowOp->TabIndex = 68;
			// 
			// btnSHIFT_RIGHT
			// 
			this->btnSHIFT_RIGHT->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSHIFT_RIGHT->Location = System::Drawing::Point(252, 155);
			this->btnSHIFT_RIGHT->Name = L"btnSHIFT_RIGHT";
			this->btnSHIFT_RIGHT->Size = System::Drawing::Size(75, 35);
			this->btnSHIFT_RIGHT->TabIndex = 67;
			this->btnSHIFT_RIGHT->Text = L">>";
			this->btnSHIFT_RIGHT->UseVisualStyleBackColor = true;
			this->btnSHIFT_RIGHT->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnROL
			// 
			this->btnROL->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnROL->Location = System::Drawing::Point(349, 364);
			this->btnROL->Name = L"btnROL";
			this->btnROL->Size = System::Drawing::Size(60, 60);
			this->btnROL->TabIndex = 66;
			this->btnROL->Text = L"ROL";
			this->btnROL->UseVisualStyleBackColor = true;
			this->btnROL->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(215, 430);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(60, 60);
			this->btnDiv->TabIndex = 65;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(215, 234);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(60, 60);
			this->btnAdd->TabIndex = 64;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(215, 299);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(60, 60);
			this->btnSub->TabIndex = 63;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnMul
			// 
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->Location = System::Drawing::Point(215, 364);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(60, 60);
			this->btnMul->TabIndex = 62;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &MyForm2::Math_Operator);
			// 
			// btnHEX
			// 
			this->btnHEX->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHEX->Location = System::Drawing::Point(90, 155);
			this->btnHEX->Name = L"btnHEX";
			this->btnHEX->Size = System::Drawing::Size(75, 35);
			this->btnHEX->TabIndex = 61;
			this->btnHEX->Text = L"Hex";
			this->btnHEX->UseVisualStyleBackColor = true;
			this->btnHEX->Click += gcnew System::EventHandler(this, &MyForm2::btnHEX_Click);
			// 
			// btnDEC
			// 
			this->btnDEC->Enabled = false;
			this->btnDEC->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDEC->Location = System::Drawing::Point(171, 155);
			this->btnDEC->Name = L"btnDEC";
			this->btnDEC->Size = System::Drawing::Size(75, 35);
			this->btnDEC->TabIndex = 60;
			this->btnDEC->Text = L"Dec";
			this->btnDEC->UseVisualStyleBackColor = true;
			this->btnDEC->Click += gcnew System::EventHandler(this, &MyForm2::btnDEC_Click);
			// 
			// btnBIN
			// 
			this->btnBIN->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBIN->Location = System::Drawing::Point(9, 155);
			this->btnBIN->Name = L"btnBIN";
			this->btnBIN->Size = System::Drawing::Size(75, 35);
			this->btnBIN->TabIndex = 59;
			this->btnBIN->Text = L"Bin";
			this->btnBIN->UseVisualStyleBackColor = true;
			this->btnBIN->Click += gcnew System::EventHandler(this, &MyForm2::btnBIN_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(349, 430);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(60, 60);
			this->btnClear->TabIndex = 58;
			this->btnClear->Text = L"CE";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm2::btnClear_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button14->Location = System::Drawing::Point(349, 234);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 57;
			this->button14->Text = L"";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm2::button14_Click);
			// 
			// btnResult
			// 
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResult->Location = System::Drawing::Point(143, 430);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(60, 60);
			this->btnResult->TabIndex = 56;
			this->btnResult->Text = L"=";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm2::btnResult_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(11, 430);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(126, 59);
			this->btn0->TabIndex = 55;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(77, 234);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(60, 60);
			this->btn8->TabIndex = 54;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(143, 234);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(60, 60);
			this->btn9->TabIndex = 53;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(11, 234);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(60, 60);
			this->btn7->TabIndex = 52;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(77, 299);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(60, 60);
			this->btn5->TabIndex = 51;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(143, 299);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(60, 60);
			this->btn6->TabIndex = 50;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(11, 299);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(60, 60);
			this->btn4->TabIndex = 49;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(77, 364);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(60, 60);
			this->btn2->TabIndex = 48;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(143, 364);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(60, 60);
			this->btn3->TabIndex = 47;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(11, 364);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(60, 60);
			this->btn1->TabIndex = 45;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm2::button_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnNegative);
			this->tabPage2->Controls->Add(this->btnDot);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->buttonFloatClear);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->radioToBin);
			this->tabPage2->Controls->Add(this->radioToDec);
			this->tabPage2->Controls->Add(this->radioFLOATBinMODE);
			this->tabPage2->Controls->Add(this->radioDECBinMODE);
			this->tabPage2->Controls->Add(this->btnConvert);
			this->tabPage2->Controls->Add(this->textBoxFloat);
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(419, 496);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"QFLOAT";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnNegative
			// 
			this->btnNegative->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNegative->Location = System::Drawing::Point(209, 185);
			this->btnNegative->Name = L"btnNegative";
			this->btnNegative->Size = System::Drawing::Size(60, 59);
			this->btnNegative->TabIndex = 69;
			this->btnNegative->Text = L"-";
			this->btnNegative->UseVisualStyleBackColor = true;
			this->btnNegative->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// btnDot
			// 
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(143, 383);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(60, 59);
			this->btnDot->TabIndex = 68;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(11, 383);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 59);
			this->button2->TabIndex = 66;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(77, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 65;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(143, 185);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 64;
			this->button4->Text = L"9";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(11, 185);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 63;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(77, 251);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 62;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(143, 251);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 61;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(11, 250);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 60;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(77, 316);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 59;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(143, 316);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 58;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(11, 316);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 57;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::btn_Click_Float);
			// 
			// buttonFloatClear
			// 
			this->buttonFloatClear->Location = System::Drawing::Point(314, 185);
			this->buttonFloatClear->Name = L"buttonFloatClear";
			this->buttonFloatClear->Size = System::Drawing::Size(85, 54);
			this->buttonFloatClear->TabIndex = 54;
			this->buttonFloatClear->Text = L"Clear";
			this->buttonFloatClear->UseVisualStyleBackColor = true;
			this->buttonFloatClear->Click += gcnew System::EventHandler(this, &MyForm2::btnFloatClear);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(197, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 15);
			this->label2->TabIndex = 53;
			this->label2->Text = L"TO";
			// 
			// radioToBin
			// 
			this->radioToBin->AccessibleRole = System::Windows::Forms::AccessibleRole::RadioButton;
			this->radioToBin->AutoCheck = false;
			this->radioToBin->AutoSize = true;
			this->radioToBin->Checked = true;
			this->radioToBin->Location = System::Drawing::Point(344, 148);
			this->radioToBin->Name = L"radioToBin";
			this->radioToBin->Size = System::Drawing::Size(46, 19);
			this->radioToBin->TabIndex = 52;
			this->radioToBin->Text = L"BIN";
			this->radioToBin->UseVisualStyleBackColor = true;
			// 
			// radioToDec
			// 
			this->radioToDec->AccessibleRole = System::Windows::Forms::AccessibleRole::RadioButton;
			this->radioToDec->AutoSize = true;
			this->radioToDec->Enabled = false;
			this->radioToDec->Location = System::Drawing::Point(288, 148);
			this->radioToDec->Name = L"radioToDec";
			this->radioToDec->Size = System::Drawing::Size(46, 19);
			this->radioToDec->TabIndex = 51;
			this->radioToDec->Text = L"DEC";
			this->radioToDec->UseVisualStyleBackColor = true;
			// 
			// radioFLOATBinMODE
			// 
			this->radioFLOATBinMODE->AutoSize = true;
			this->radioFLOATBinMODE->Enabled = false;
			this->radioFLOATBinMODE->Location = System::Drawing::Point(74, 150);
			this->radioFLOATBinMODE->Name = L"radioFLOATBinMODE";
			this->radioFLOATBinMODE->Size = System::Drawing::Size(46, 19);
			this->radioFLOATBinMODE->TabIndex = 50;
			this->radioFLOATBinMODE->Text = L"BIN";
			this->radioFLOATBinMODE->UseVisualStyleBackColor = true;
			// 
			// radioDECBinMODE
			// 
			this->radioDECBinMODE->AutoSize = true;
			this->radioDECBinMODE->Checked = true;
			this->radioDECBinMODE->Location = System::Drawing::Point(16, 150);
			this->radioDECBinMODE->Name = L"radioDECBinMODE";
			this->radioDECBinMODE->Size = System::Drawing::Size(46, 19);
			this->radioDECBinMODE->TabIndex = 49;
			this->radioDECBinMODE->TabStop = true;
			this->radioDECBinMODE->Text = L"DEC";
			this->radioDECBinMODE->UseVisualStyleBackColor = true;
			// 
			// btnConvert
			// 
			this->btnConvert->Location = System::Drawing::Point(261, 302);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(138, 54);
			this->btnConvert->TabIndex = 48;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &MyForm2::buttonFloat_Click);
			// 
			// textBoxFloat
			// 
			this->textBoxFloat->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxFloat->Location = System::Drawing::Point(2, 20);
			this->textBoxFloat->Multiline = true;
			this->textBoxFloat->Name = L"textBoxFloat";
			this->textBoxFloat->Size = System::Drawing::Size(415, 114);
			this->textBoxFloat->TabIndex = 47;
			this->textBoxFloat->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 520);
			this->Controls->Add(this->tabCTRL);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(438, 559);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(438, 559);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"1753107_1753";
			this->tabCTRL->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		

	int a;
	String^ iOperator;
	char iOperation;
	QINT* Q1;
	QINT* Q2;
	QINT* QRes;
	QFloat* Float;
	int mode = 10;

	//btnMODE_DEC

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		Button ^ Numbers = safe_cast<Button^>(sender);
		if (txtDisplay->Text == "") {
			txtDisplay->Text = Numbers->Text;
		}
		else {
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
		}
	}
	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
		txtDisplay->Clear();
		lbShowOp->Text = "";
	}
	private: System::Void Math_Operator(System::Object^  sender, System::EventArgs^  e) {
		Button ^ op = safe_cast<Button^>(sender);
		if (txtDisplay->Text == "") {
			if(op->Text=="-")
				txtDisplay->Text = op->Text;
			else
			{
			}

		}
		else if (txtDisplay->Text == "-") {
			if (op->Text == "-") {}
			else if (op->Text == "+" || op->Text == "*" || op->Text == "/") {}
			else if (op->Text == "ROR" || op->Text == "ROL" || op->Text == ">>" || op->Text == "<<") {}
		}
		else
		{
				if (mode == 10)
					Q1 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				else if (mode == 2) {
					bool *temp = str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
					Q1 = new QINT(temp);
					delete[]temp;
				}
				else
					Q1 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));

				txtDisplay->Text = "";
				iOperator = op->Text;
				lbShowOp->Text = msclr::interop::marshal_as<System::String^>(Q1->toDec()) + " " + iOperator;
		}
	}
	private: System::Void btnResult_Click(System::Object^  sender, System::EventArgs^  e) {
		lbShowOp->Text = "";

		if (iOperator == "+") {
			QRes = new QINT();
			System::String^ str;
			if (mode == 10) {
				Q2 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				*QRes = *Q1 + *Q2;
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				Q2 = new QINT(str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 + *Q2;
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				Q2 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 + *Q2;
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete Q2;
			delete QRes;
			QRes = NULL;
			Q2 = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
			iOperator = "";
		}
		else if (iOperator == "-") {
			QRes = new QINT();
			System::String^ str;
			if (mode == 10) {
				Q2 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				*QRes = *Q1 - *Q2;
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				Q2 = new QINT(str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 - *Q2;
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				Q2 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 - *Q2;
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete Q2;
			delete QRes;
			QRes = NULL;
			Q2 = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
			iOperator = "";
		}
		else if (iOperator == "*") {
			QRes = new QINT();
			System::String^ str;
			if (mode == 10) {
				Q2 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				*QRes = *Q1 * *Q2;
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				Q2 = new QINT(str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 * *Q2;
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				Q2 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 * *Q2;
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete Q2;
			delete QRes;
			QRes = NULL;
			Q2 = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
			iOperator = "";
		}
		else if (iOperator == "/") {
			QRes = new QINT();
			System::String^ str;
			if (mode == 10) {
				Q2 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				*QRes = *Q1 / *Q2;
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				Q2 = new QINT(str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 / *Q2;
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				Q2 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 / *Q2;
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete Q2;
			delete QRes;
			QRes = NULL;
			Q2 = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
			iOperator = "";
		}
		else if (iOperator == ">>") {
			a = System::Int32::Parse(txtDisplay->Text);
			QRes = new QINT();
			*QRes = *Q1 >> a;
			System::String^ str;
			if (mode == 10) {
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete QRes;
			QRes = NULL;
			if (Q1) {
				delete Q1; Q1 = NULL;
			}
			a = 0;
			iOperator = "";
		}
		else if (iOperator == "<<") {
			a = System::Int32::Parse(txtDisplay->Text);
			QRes = new QINT();
			*QRes = *Q1 << a;
			System::String^ str;
			if (mode == 10) {
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete QRes;
			QRes = NULL;
			if (Q1) {
				delete Q1; Q1 = NULL;
			}
			a = 0;
			iOperator = "";
		}
		else if (iOperator == "AND") {
			QRes = new QINT();
			System::String^ str;
			if (mode == 10) {
				Q2 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				*QRes = *Q1 & *Q2;
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				Q2 = new QINT(str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 & *Q2;
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				Q2 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 & *Q2;
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete Q2;
			delete QRes;
			QRes = NULL;
			Q2 = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
			iOperator = "";

		}
		else if (iOperator == "XOR") {
			QRes = new QINT();
			System::String^ str;
			if (mode == 10) {
				Q2 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				*QRes = *Q1 ^ *Q2;
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				Q2 = new QINT(str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 ^ *Q2;
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				Q2 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 ^ *Q2;
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete Q2;
			delete QRes;
			QRes = NULL;
			Q2 = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
			iOperator = "";
		}
		else if (iOperator == "OR") {
			QRes = new QINT();
			System::String^ str;
			if (mode == 10) {
				Q2 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				*QRes = *Q1 | *Q2;
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				Q2 = new QINT(str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 | *Q2;
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				Q2 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				*QRes = *Q1 | *Q2;
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete Q2;
			delete QRes;
			QRes = NULL;
			Q2 = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
			iOperator = "";
		}
		else if (iOperator == "ROR") {
			a = System::Int32::Parse(txtDisplay->Text);
			QRes = new QINT();
			*QRes = ror(*Q1, a);
			System::String^ str;
			if (mode == 10) {
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete QRes;
			QRes = NULL;
			if (Q1) {
				delete Q1; Q1 = NULL;
			}
			iOperator = "";
		}
		else if (iOperator == "ROL") {
			a = System::Int32::Parse(txtDisplay->Text);
			QRes = new QINT();
			*QRes = rol(*Q1, a);
			System::String^ str;
			if (mode == 10) {
				str = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else if (mode == 2) {
				bool*temp = QRes->data2Bin();
				str = msclr::interop::marshal_as<System::String^>(bool2Str(temp));
			}
			else {
				str = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			txtDisplay->Text = str;
			delete QRes;
			QRes = NULL;
			if (Q1) {
				delete Q1; Q1 = NULL;
			}
			iOperator = "";
		}
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text->Length > 0) {
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}
	}
	private: System::Void btnBIN_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text != ""&& txtDisplay->Text != "-") {
			if (mode == 10) {
				QRes = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				txtDisplay->Text = msclr::interop::marshal_as<System::String^>(bool2Str(QRes->data2Bin()));
			}
			else {
				QRes = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				txtDisplay->Text = msclr::interop::marshal_as<System::String^>(bool2Str(QRes->data2Bin()));
			}
			lbShowOp->Text = "";
			delete QRes;
			QRes = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
		}
	}
	private: System::Void btnHEX_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text != ""&& txtDisplay->Text != "-") {
			if (mode == 10) {
				QRes = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				txtDisplay->Text = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			else {
				bool *temp = str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				QRes = new QINT(temp);
				delete[]temp;
				txtDisplay->Text = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			}
			lbShowOp->Text = "";
			delete QRes;
			QRes = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
		}
	}
	private: System::Void btnDEC_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text != ""&& txtDisplay->Text !="-") {
			if (mode == 16) {
				QRes = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
				txtDisplay->Text = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			else {
				bool *temp = str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
				QRes = new QINT(temp);
				delete[]temp;
				txtDisplay->Text = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			}
			lbShowOp->Text = "";
			delete QRes;
			QRes = NULL;
			if (Q1) {
				delete Q1;
				Q1 = NULL;
			}
		}
	}
	private: System::Void btnNOT_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text != "" &&txtDisplay->Text!="-") {
			QRes = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
			*QRes = ~*QRes;
			txtDisplay->Text = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			lbShowOp->Text = "";
			delete QRes;
			QRes = NULL;
		}
	}

private: System::Void btnMODE_BIN_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	btnBIN->Enabled = FALSE;
	btnDEC->Enabled = TRUE;
	btnHEX->Enabled = TRUE;
	btnA->Enabled = FALSE;
	btnB->Enabled = FALSE;
	btnC->Enabled = FALSE;
	btnD->Enabled = FALSE;
	btnE->Enabled = FALSE;
	btnF->Enabled = FALSE;
	mode = 2;
}
private: System::Void btnMODE_HEX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	btnBIN->Enabled = TRUE;
	btnDEC->Enabled = TRUE;
	btnHEX->Enabled = FALSE;
	btnA->Enabled = TRUE;
	btnB->Enabled = TRUE;
	btnC->Enabled = TRUE;
	btnD->Enabled = TRUE;
	btnE->Enabled = TRUE;
	btnF->Enabled = TRUE;
	mode = 16;
}
private: System::Void btnMODE_DEC_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	btnBIN->Enabled = TRUE;
	btnDEC->Enabled = FALSE;
	btnHEX->Enabled = TRUE;
	btnA->Enabled = FALSE;
	btnB->Enabled = FALSE;
	btnC->Enabled = FALSE;
	btnD->Enabled = FALSE;
	btnE->Enabled = FALSE;
	btnF->Enabled = FALSE;
	mode = 10;
}
private: System::Void switchTab(System::Object^  sender, System::EventArgs^  e) {
	tabPage2->Show();
}

private: System::Void buttonFloat_Click(System::Object^  sender, System::EventArgs^  e) {
	Float = new QFloat(msclr::interop::marshal_as<std::string>(textBoxFloat->Text));
	textBoxFloat->Text = msclr::interop::marshal_as<System::String^>(bool2Str(Float->data2Bin()));
	delete Float;
}
private: System::Void btnFloatClear(System::Object^  sender, System::EventArgs^  e) {
	textBoxFloat->Clear();
}

private: System::Void btn_Click_Float(System::Object^  sender, System::EventArgs^  e) {
	Button ^ Numbers1 = safe_cast<Button^>(sender);
	if (textBoxFloat->Text == "0") {
		textBoxFloat->Text = Numbers1->Text;
	}
	else {
		textBoxFloat->Text = textBoxFloat->Text + Numbers1->Text;
	}
}
};
}
