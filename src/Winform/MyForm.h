#pragma once
#include"QINT.h"
#include <msclr/marshal_cppstd.h>
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//TODO: Add the constructor code here
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::TextBox^  txtDisplay;

	protected:

	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btnHEX;
	private: System::Windows::Forms::Button^  btnDEC;
	private: System::Windows::Forms::Button^  btnBIN;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  btnResult;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnSHIFT_RIGHT;
	private: System::Windows::Forms::Button^  btnROL;
	private: System::Windows::Forms::Button^  btnDiv;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnSub;
	private: System::Windows::Forms::Button^  btnMul;
	private: System::Windows::Forms::Label^  lbShowOp;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  btnNOT;
	private: System::Windows::Forms::Button^  btnXOR;
	private: System::Windows::Forms::Button^  btnOR;
	private: System::Windows::Forms::Button^  btnAND;
	private: System::Windows::Forms::Button^  btnROR;
	private: System::Windows::Forms::Button^  btnSHIFT_LEFT;
	private: System::Windows::Forms::TabControl^  tabCTRL;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::RadioButton^  btnMODE_BIN;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  btnMODE_DEC;
	private: System::Windows::Forms::RadioButton^  btnMODE_HEX;

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
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnHEX = (gcnew System::Windows::Forms::Button());
			this->btnDEC = (gcnew System::Windows::Forms::Button());
			this->btnBIN = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnSHIFT_RIGHT = (gcnew System::Windows::Forms::Button());
			this->btnROL = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->lbShowOp = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnNOT = (gcnew System::Windows::Forms::Button());
			this->btnXOR = (gcnew System::Windows::Forms::Button());
			this->btnOR = (gcnew System::Windows::Forms::Button());
			this->btnAND = (gcnew System::Windows::Forms::Button());
			this->btnROR = (gcnew System::Windows::Forms::Button());
			this->btnSHIFT_LEFT = (gcnew System::Windows::Forms::Button());
			this->tabCTRL = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnMODE_BIN = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnMODE_DEC = (gcnew System::Windows::Forms::RadioButton());
			this->btnMODE_HEX = (gcnew System::Windows::Forms::RadioButton());
			this->tabCTRL->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(13, 349);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(60, 60);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(1, 53);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(421, 97);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(145, 349);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(60, 60);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(79, 350);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(60, 60);
			this->btn2->TabIndex = 3;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(79, 284);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(60, 60);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(145, 284);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(60, 60);
			this->btn6->TabIndex = 5;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(13, 283);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(60, 60);
			this->btn4->TabIndex = 4;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(79, 218);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(60, 60);
			this->btn8->TabIndex = 9;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(145, 217);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(60, 60);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(13, 217);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(60, 60);
			this->btn7->TabIndex = 7;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btnHEX
			// 
			this->btnHEX->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHEX->Location = System::Drawing::Point(94, 176);
			this->btnHEX->Name = L"btnHEX";
			this->btnHEX->Size = System::Drawing::Size(75, 35);
			this->btnHEX->TabIndex = 18;
			this->btnHEX->Text = L"Hex";
			this->btnHEX->UseVisualStyleBackColor = true;
			this->btnHEX->Click += gcnew System::EventHandler(this, &MyForm::btnHEX_Click);
			// 
			// btnDEC
			// 
			this->btnDEC->Enabled = false;
			this->btnDEC->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDEC->Location = System::Drawing::Point(175, 176);
			this->btnDEC->Name = L"btnDEC";
			this->btnDEC->Size = System::Drawing::Size(75, 35);
			this->btnDEC->TabIndex = 17;
			this->btnDEC->Text = L"Dec";
			this->btnDEC->UseVisualStyleBackColor = true;
			this->btnDEC->Click += gcnew System::EventHandler(this, &MyForm::btnDEC_Click);
			// 
			// btnBIN
			// 
			this->btnBIN->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBIN->Location = System::Drawing::Point(13, 176);
			this->btnBIN->Name = L"btnBIN";
			this->btnBIN->Size = System::Drawing::Size(75, 35);
			this->btnBIN->TabIndex = 16;
			this->btnBIN->Text = L"Bin";
			this->btnBIN->UseVisualStyleBackColor = true;
			this->btnBIN->Click += gcnew System::EventHandler(this, &MyForm::btnBIN_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(351, 415);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(60, 60);
			this->btnClear->TabIndex = 15;
			this->btnClear->Text = L"CE";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button14->Location = System::Drawing::Point(351, 217);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 13;
			this->button14->Text = L"";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// btnResult
			// 
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResult->Location = System::Drawing::Point(145, 415);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(60, 60);
			this->btnResult->TabIndex = 11;
			this->btnResult->Text = L"=";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(13, 416);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(126, 59);
			this->btn0->TabIndex = 10;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// btnSHIFT_RIGHT
			// 
			this->btnSHIFT_RIGHT->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSHIFT_RIGHT->Location = System::Drawing::Point(256, 176);
			this->btnSHIFT_RIGHT->Name = L"btnSHIFT_RIGHT";
			this->btnSHIFT_RIGHT->Size = System::Drawing::Size(75, 35);
			this->btnSHIFT_RIGHT->TabIndex = 31;
			this->btnSHIFT_RIGHT->Text = L">>";
			this->btnSHIFT_RIGHT->UseVisualStyleBackColor = true;
			this->btnSHIFT_RIGHT->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnROL
			// 
			this->btnROL->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnROL->Location = System::Drawing::Point(351, 349);
			this->btnROL->Name = L"btnROL";
			this->btnROL->Size = System::Drawing::Size(60, 60);
			this->btnROL->TabIndex = 29;
			this->btnROL->Text = L"ROL";
			this->btnROL->UseVisualStyleBackColor = true;
			this->btnROL->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(217, 415);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(60, 60);
			this->btnDiv->TabIndex = 27;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(217, 218);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(60, 60);
			this->btnAdd->TabIndex = 25;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(217, 284);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(60, 60);
			this->btnSub->TabIndex = 23;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnMul
			// 
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->Location = System::Drawing::Point(217, 349);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(60, 60);
			this->btnMul->TabIndex = 21;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// lbShowOp
			// 
			this->lbShowOp->AutoSize = true;
			this->lbShowOp->BackColor = System::Drawing::Color::White;
			this->lbShowOp->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbShowOp->Location = System::Drawing::Point(4, 27);
			this->lbShowOp->Name = L"lbShowOp";
			this->lbShowOp->Size = System::Drawing::Size(0, 22);
			this->lbShowOp->TabIndex = 32;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(7, 486);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(194, 30);
			this->listBox1->TabIndex = 33;
			this->listBox1->Visible = false;
			// 
			// btnNOT
			// 
			this->btnNOT->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNOT->Location = System::Drawing::Point(283, 415);
			this->btnNOT->Name = L"btnNOT";
			this->btnNOT->Size = System::Drawing::Size(60, 60);
			this->btnNOT->TabIndex = 34;
			this->btnNOT->Text = L"NOT";
			this->btnNOT->UseVisualStyleBackColor = true;
			this->btnNOT->Click += gcnew System::EventHandler(this, &MyForm::btnNOT_Click);
			// 
			// btnXOR
			// 
			this->btnXOR->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXOR->Location = System::Drawing::Point(283, 349);
			this->btnXOR->Name = L"btnXOR";
			this->btnXOR->Size = System::Drawing::Size(60, 60);
			this->btnXOR->TabIndex = 35;
			this->btnXOR->Text = L"XOR";
			this->btnXOR->UseVisualStyleBackColor = true;
			this->btnXOR->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnOR
			// 
			this->btnOR->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOR->Location = System::Drawing::Point(283, 284);
			this->btnOR->Name = L"btnOR";
			this->btnOR->Size = System::Drawing::Size(60, 60);
			this->btnOR->TabIndex = 36;
			this->btnOR->Text = L"OR";
			this->btnOR->UseVisualStyleBackColor = true;
			this->btnOR->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnAND
			// 
			this->btnAND->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAND->Location = System::Drawing::Point(283, 218);
			this->btnAND->Name = L"btnAND";
			this->btnAND->Size = System::Drawing::Size(60, 60);
			this->btnAND->TabIndex = 37;
			this->btnAND->Text = L"AND";
			this->btnAND->UseVisualStyleBackColor = true;
			this->btnAND->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnROR
			// 
			this->btnROR->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnROR->Location = System::Drawing::Point(351, 283);
			this->btnROR->Name = L"btnROR";
			this->btnROR->Size = System::Drawing::Size(60, 60);
			this->btnROR->TabIndex = 38;
			this->btnROR->Text = L"ROR";
			this->btnROR->UseVisualStyleBackColor = true;
			this->btnROR->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// btnSHIFT_LEFT
			// 
			this->btnSHIFT_LEFT->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSHIFT_LEFT->Location = System::Drawing::Point(337, 176);
			this->btnSHIFT_LEFT->Name = L"btnSHIFT_LEFT";
			this->btnSHIFT_LEFT->Size = System::Drawing::Size(75, 35);
			this->btnSHIFT_LEFT->TabIndex = 39;
			this->btnSHIFT_LEFT->Text = L"<<";
			this->btnSHIFT_LEFT->UseVisualStyleBackColor = true;
			this->btnSHIFT_LEFT->Click += gcnew System::EventHandler(this, &MyForm::Math_Operator);
			// 
			// tabCTRL
			// 
			this->tabCTRL->Controls->Add(this->tabPage1);
			this->tabCTRL->Controls->Add(this->tabPage2);
			this->tabCTRL->Location = System::Drawing::Point(0, 0);
			this->tabCTRL->Name = L"tabCTRL";
			this->tabCTRL->SelectedIndex = 0;
			this->tabCTRL->Size = System::Drawing::Size(135, 21);
			this->tabCTRL->TabIndex = 40;
			this->tabCTRL->Visible = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(127, 0);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(127, 0);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnMODE_BIN
			// 
			this->btnMODE_BIN->AutoSize = true;
			this->btnMODE_BIN->Location = System::Drawing::Point(99, 154);
			this->btnMODE_BIN->Name = L"btnMODE_BIN";
			this->btnMODE_BIN->Size = System::Drawing::Size(40, 17);
			this->btnMODE_BIN->TabIndex = 41;
			this->btnMODE_BIN->Text = L"Bin";
			this->btnMODE_BIN->UseVisualStyleBackColor = true;
			this->btnMODE_BIN->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnMODE_BIN_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 16);
			this->label1->TabIndex = 42;
			this->label1->Text = L"MODE";
			// 
			// btnMODE_DEC
			// 
			this->btnMODE_DEC->AutoSize = true;
			this->btnMODE_DEC->Checked = true;
			this->btnMODE_DEC->Location = System::Drawing::Point(247, 154);
			this->btnMODE_DEC->Name = L"btnMODE_DEC";
			this->btnMODE_DEC->Size = System::Drawing::Size(45, 17);
			this->btnMODE_DEC->TabIndex = 43;
			this->btnMODE_DEC->TabStop = true;
			this->btnMODE_DEC->Text = L"Dec";
			this->btnMODE_DEC->UseVisualStyleBackColor = true;
			this->btnMODE_DEC->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnMODE_DEC_CheckedChanged);
			// 
			// btnMODE_HEX
			// 
			this->btnMODE_HEX->AutoSize = true;
			this->btnMODE_HEX->Location = System::Drawing::Point(175, 154);
			this->btnMODE_HEX->Name = L"btnMODE_HEX";
			this->btnMODE_HEX->Size = System::Drawing::Size(44, 17);
			this->btnMODE_HEX->TabIndex = 44;
			this->btnMODE_HEX->Text = L"Hex";
			this->btnMODE_HEX->UseVisualStyleBackColor = true;
			this->btnMODE_HEX->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnMODE_HEX_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 478);
			this->Controls->Add(this->btnMODE_HEX);
			this->Controls->Add(this->btnMODE_DEC);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMODE_BIN);
			this->Controls->Add(this->tabCTRL);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnSHIFT_LEFT);
			this->Controls->Add(this->btnROR);
			this->Controls->Add(this->btnAND);
			this->Controls->Add(this->btnOR);
			this->Controls->Add(this->btnXOR);
			this->Controls->Add(this->btnNOT);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->lbShowOp);
			this->Controls->Add(this->btnSHIFT_RIGHT);
			this->Controls->Add(this->btnROL);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btnHEX);
			this->Controls->Add(this->btnDEC);
			this->Controls->Add(this->btnBIN);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"1753107_1753107";
			this->tabCTRL->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		double iFirstnum;
		double iSecondnum;
		double iResult;
		int a;
		String^ iOperator;
		char iOperation;
		QINT* Q1 ;
		QINT* Q2 ;
		QINT* QRes;
		int mode = 10;
		
		//btnMODE_DEC
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		Button ^ Numbers = safe_cast<Button^>(sender);
		if (txtDisplay->Text == "0") {
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
		if (txtDisplay->Text != ""&&txtDisplay->Text!="-") {
			if (mode == 10)
				Q1 = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
			else if (mode == 2)
				Q1 = new QINT(str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));
			else
				Q1 = new QINT(hex2Bin(msclr::interop::marshal_as<std::string>(txtDisplay->Text)));

			txtDisplay->Text = "";
			iOperator = op->Text;
			lbShowOp->Text = msclr::interop::marshal_as<System::String^>(Q1->toDec()) + " " + iOperator;
		}
		else if(txtDisplay->Text == "" && op->Text=="-"){
			txtDisplay->Text = op->Text;
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
			if (Q1)
				delete Q1;
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
			if (Q1)
			delete Q1;
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
			if (Q1)
				delete Q1;
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
			if (Q1)
				delete Q1;
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
			if (Q1)
				delete Q1;
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
			if (Q1)
				delete Q1;
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
			if (Q1)
				delete Q1;
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
			if (Q1)
				delete Q1;
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
			if (Q1) delete Q1;
			iOperator = "";
		}
		else if (iOperator == "ROR"){
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
			if (Q1) delete Q1;
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
			if (Q1) delete Q1;
			iOperator = "";
		}
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text->Length > 0) {
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}
	}
	private: System::Void btnBIN_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text != "") {
			QRes = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
			txtDisplay->Text = msclr::interop::marshal_as<System::String^>(bool2Str(QRes->data2Bin()));
			lbShowOp->Text = "";
			delete QRes;
			if (Q1)
				delete Q1;
		}
	}
	private: System::Void btnHEX_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text != "") {
			QRes = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
			txtDisplay->Text = msclr::interop::marshal_as<System::String^>(bin2Hex(QRes->data2Bin()));
			lbShowOp->Text = "";
			delete QRes;
			if (Q1)
				delete Q1;
		}
	}
	private: System::Void btnDEC_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text != "") {
			bool*temp = str2Bool(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
			QRes = new QINT(temp);
			txtDisplay->Text = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			lbShowOp->Text = "";
			delete[]temp;
			delete QRes;
			if (Q1)
				delete Q1;
		}
	}
	private: System::Void btnNOT_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDisplay->Text != "") {
			QRes = new QINT(msclr::interop::marshal_as<std::string>(txtDisplay->Text));
			*QRes = ~*QRes;
			txtDisplay->Text = msclr::interop::marshal_as<System::String^>(QRes->toDec());
			lbShowOp->Text = "";
		}
	}

private: System::Void btnMODE_BIN_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	btnBIN->Enabled = FALSE;
	btnDEC->Enabled = TRUE;
	btnHEX->Enabled = TRUE;
	mode = 2;
}
private: System::Void btnMODE_HEX_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	btnBIN->Enabled = TRUE;
	btnDEC->Enabled = TRUE;
	btnHEX->Enabled = FALSE;
	mode = 6;
}
private: System::Void btnMODE_DEC_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	btnBIN->Enabled = TRUE;
	btnDEC->Enabled = FALSE;
	btnHEX->Enabled = TRUE;
	mode = 10;
}
};
}