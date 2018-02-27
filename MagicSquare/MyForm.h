#pragma once

namespace MagicSquare {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
		public:
			MyForm(void) {
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~MyForm() {
				if (components) {
					delete components;
				}
			}
		private: System::Windows::Forms::Timer^  timeCounter;
		protected:
		private: System::Windows::Forms::Label^  Background;
		private: System::Windows::Forms::Button^  numBtn2;
		private: System::Windows::Forms::Button^  numBtn3;
		private: System::Windows::Forms::Button^  numBtn4;
		private: System::Windows::Forms::Button^  numBtn5;
		private: System::Windows::Forms::Button^  numBtn6;
		private: System::Windows::Forms::Button^  numBtn7;
		private: System::Windows::Forms::Button^  numBtn8;
		private: System::Windows::Forms::Button^  numBtn9;
		private: System::Windows::Forms::Button^  numBtn1;
		private: System::Windows::Forms::Label^  clockBack;
		private: System::Windows::Forms::Label^  timeDisplay;
		private: System::Windows::Forms::Button^  solBtn;
		private: System::Windows::Forms::Button^  clearBtn;
		protected:
		private: System::ComponentModel::IContainer^  components;
		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
		private: System::Windows::Forms::Button^  clockBegin;
		private: System::Windows::Forms::Label^  squareTopLeft;
		private: System::Windows::Forms::Label^  squareTopCenter;
		private: System::Windows::Forms::Label^  squareTopRight;
		private: System::Windows::Forms::Label^  squareMidLeft;
		private: System::Windows::Forms::Label^  squareBotLeft;
		private: System::Windows::Forms::Label^  squareMidCenter;
		private: System::Windows::Forms::Label^  squareMidRight;
		private: System::Windows::Forms::Label^  squareBotRight;
		private: System::Windows::Forms::Label^  squareBotCenter;
		private: System::Windows::Forms::Label^  topRowSum;
		private: System::Windows::Forms::Label^  midRowSum;
		private: System::Windows::Forms::Label^  botRowSum;
		private: System::Windows::Forms::Label^  leftColSum;
		private: System::Windows::Forms::Label^  centerColSum;
		private: System::Windows::Forms::Label^  rightColSum;
		private: System::Windows::Forms::Label^  diagSum1;
		private: System::Windows::Forms::Label^  instructions1;
		private: System::Windows::Forms::Label^  instructions2;
		private: System::Windows::Forms::Label^  instruction3;
		private: System::Windows::Forms::Label^  instruction4;

		static int mins;
		static int secs = 0;
		int topRight = 0;
		int topCent = 0;
		int topLeft = 0;
		int midRight = 0;
		int midCent = 0;
		int midLeft = 0;
		int botRight = 0;
		int botCent = 0;
		int botLeft = 0;
		int leftSum = 0;
		int rightSum = 0;
		int centerSum = 0;
		int topSum = 0;
		int midSum = 0;
		int botSum = 0;
		int diagNum1 = 0;
		int diagNum2 = 0;
		int tempNum;
		int i;
		bool dupFlag;
		bool solve = false;
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Label^  diagSum2;
		private: System::Windows::Forms::Timer^  solTimer;


	#pragma region Windows Form Designer generated code
				 /// <summary>
				 /// Required method for Designer support - do not modify
				 /// the contents of this method with the code editor.
				 /// </summary>
				 void InitializeComponent(void)
				 {
					 this->components = (gcnew System::ComponentModel::Container());
					 this->timeCounter = (gcnew System::Windows::Forms::Timer(this->components));
					 this->Background = (gcnew System::Windows::Forms::Label());
					 this->numBtn2 = (gcnew System::Windows::Forms::Button());
					 this->numBtn3 = (gcnew System::Windows::Forms::Button());
					 this->numBtn4 = (gcnew System::Windows::Forms::Button());
					 this->numBtn5 = (gcnew System::Windows::Forms::Button());
					 this->numBtn6 = (gcnew System::Windows::Forms::Button());
					 this->numBtn7 = (gcnew System::Windows::Forms::Button());
					 this->numBtn8 = (gcnew System::Windows::Forms::Button());
					 this->numBtn9 = (gcnew System::Windows::Forms::Button());
					 this->numBtn1 = (gcnew System::Windows::Forms::Button());
					 this->clockBack = (gcnew System::Windows::Forms::Label());
					 this->timeDisplay = (gcnew System::Windows::Forms::Label());
					 this->solBtn = (gcnew System::Windows::Forms::Button());
					 this->clearBtn = (gcnew System::Windows::Forms::Button());
					 this->clockBegin = (gcnew System::Windows::Forms::Button());
					 this->squareTopLeft = (gcnew System::Windows::Forms::Label());
					 this->squareTopCenter = (gcnew System::Windows::Forms::Label());
					 this->squareTopRight = (gcnew System::Windows::Forms::Label());
					 this->squareMidLeft = (gcnew System::Windows::Forms::Label());
					 this->squareBotLeft = (gcnew System::Windows::Forms::Label());
					 this->squareMidCenter = (gcnew System::Windows::Forms::Label());
					 this->squareMidRight = (gcnew System::Windows::Forms::Label());
					 this->squareBotRight = (gcnew System::Windows::Forms::Label());
					 this->squareBotCenter = (gcnew System::Windows::Forms::Label());
					 this->topRowSum = (gcnew System::Windows::Forms::Label());
					 this->midRowSum = (gcnew System::Windows::Forms::Label());
					 this->botRowSum = (gcnew System::Windows::Forms::Label());
					 this->leftColSum = (gcnew System::Windows::Forms::Label());
					 this->centerColSum = (gcnew System::Windows::Forms::Label());
					 this->rightColSum = (gcnew System::Windows::Forms::Label());
					 this->diagSum1 = (gcnew System::Windows::Forms::Label());
					 this->instructions1 = (gcnew System::Windows::Forms::Label());
					 this->instructions2 = (gcnew System::Windows::Forms::Label());
					 this->instruction3 = (gcnew System::Windows::Forms::Label());
					 this->instruction4 = (gcnew System::Windows::Forms::Label());
					 this->label1 = (gcnew System::Windows::Forms::Label());
					 this->diagSum2 = (gcnew System::Windows::Forms::Label());
					 this->solTimer = (gcnew System::Windows::Forms::Timer(this->components));
					 this->SuspendLayout();
					 // 
					 // timeCounter
					 // 
					 this->timeCounter->Interval = 1000;
					 this->timeCounter->Tick += gcnew System::EventHandler(this, &MyForm::timeCounter_Tick_1);
					 // 
					 // Background
					 // 
					 this->Background->BackColor = System::Drawing::Color::SteelBlue;
					 this->Background->Location = System::Drawing::Point(69, 32);
					 this->Background->Name = L"Background";
					 this->Background->Size = System::Drawing::Size(360, 360);
					 this->Background->TabIndex = 0;
					 // 
					 // numBtn2
					 // 
					 this->numBtn2->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn2->Location = System::Drawing::Point(116, 457);
					 this->numBtn2->Name = L"numBtn2";
					 this->numBtn2->Size = System::Drawing::Size(30, 30);
					 this->numBtn2->TabIndex = 21;
					 this->numBtn2->Text = L"2";
					 this->numBtn2->UseVisualStyleBackColor = false;
					 this->numBtn2->Click += gcnew System::EventHandler(this, &MyForm::numBtn2_Click);
					 // 
					 // numBtn3
					 // 
					 this->numBtn3->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn3->Location = System::Drawing::Point(152, 457);
					 this->numBtn3->Name = L"numBtn3";
					 this->numBtn3->Size = System::Drawing::Size(30, 30);
					 this->numBtn3->TabIndex = 22;
					 this->numBtn3->Text = L"3";
					 this->numBtn3->UseVisualStyleBackColor = false;
					 this->numBtn3->Click += gcnew System::EventHandler(this, &MyForm::numBtn3_Click);
					 // 
					 // numBtn4
					 // 
					 this->numBtn4->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn4->Location = System::Drawing::Point(188, 457);
					 this->numBtn4->Name = L"numBtn4";
					 this->numBtn4->Size = System::Drawing::Size(30, 30);
					 this->numBtn4->TabIndex = 23;
					 this->numBtn4->Text = L"4";
					 this->numBtn4->UseVisualStyleBackColor = false;
					 this->numBtn4->Click += gcnew System::EventHandler(this, &MyForm::numBtn4_Click);
					 // 
					 // numBtn5
					 // 
					 this->numBtn5->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn5->Location = System::Drawing::Point(224, 457);
					 this->numBtn5->Name = L"numBtn5";
					 this->numBtn5->Size = System::Drawing::Size(30, 30);
					 this->numBtn5->TabIndex = 24;
					 this->numBtn5->Text = L"5";
					 this->numBtn5->UseVisualStyleBackColor = false;
					 this->numBtn5->Click += gcnew System::EventHandler(this, &MyForm::numBtn5_Click);
					 // 
					 // numBtn6
					 // 
					 this->numBtn6->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn6->Location = System::Drawing::Point(260, 457);
					 this->numBtn6->Name = L"numBtn6";
					 this->numBtn6->Size = System::Drawing::Size(30, 30);
					 this->numBtn6->TabIndex = 25;
					 this->numBtn6->Text = L"6";
					 this->numBtn6->UseVisualStyleBackColor = false;
					 this->numBtn6->Click += gcnew System::EventHandler(this, &MyForm::numBtn6_Click);
					 // 
					 // numBtn7
					 // 
					 this->numBtn7->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn7->Location = System::Drawing::Point(296, 457);
					 this->numBtn7->Name = L"numBtn7";
					 this->numBtn7->Size = System::Drawing::Size(30, 30);
					 this->numBtn7->TabIndex = 26;
					 this->numBtn7->Text = L"7";
					 this->numBtn7->UseVisualStyleBackColor = false;
					 this->numBtn7->Click += gcnew System::EventHandler(this, &MyForm::numBtn7_Click);
					 // 
					 // numBtn8
					 // 
					 this->numBtn8->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn8->Location = System::Drawing::Point(332, 457);
					 this->numBtn8->Name = L"numBtn8";
					 this->numBtn8->Size = System::Drawing::Size(30, 30);
					 this->numBtn8->TabIndex = 27;
					 this->numBtn8->Text = L"8";
					 this->numBtn8->UseVisualStyleBackColor = false;
					 this->numBtn8->Click += gcnew System::EventHandler(this, &MyForm::numBtn8_Click);
					 // 
					 // numBtn9
					 // 
					 this->numBtn9->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn9->Location = System::Drawing::Point(368, 457);
					 this->numBtn9->Name = L"numBtn9";
					 this->numBtn9->Size = System::Drawing::Size(30, 30);
					 this->numBtn9->TabIndex = 28;
					 this->numBtn9->Text = L"9";
					 this->numBtn9->UseVisualStyleBackColor = false;
					 this->numBtn9->Click += gcnew System::EventHandler(this, &MyForm::numBtn9_Click);
					 // 
					 // numBtn1
					 // 
					 this->numBtn1->BackColor = System::Drawing::Color::Chartreuse;
					 this->numBtn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->numBtn1->Location = System::Drawing::Point(80, 457);
					 this->numBtn1->Name = L"numBtn1";
					 this->numBtn1->Size = System::Drawing::Size(30, 30);
					 this->numBtn1->TabIndex = 29;
					 this->numBtn1->Text = L"1";
					 this->numBtn1->UseVisualStyleBackColor = false;
					 this->numBtn1->Click += gcnew System::EventHandler(this, &MyForm::numBtn1_Click);
					 // 
					 // clockBack
					 // 
					 this->clockBack->BackColor = System::Drawing::Color::AntiqueWhite;
					 this->clockBack->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					 this->clockBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
					 this->clockBack->Location = System::Drawing::Point(566, 75);
					 this->clockBack->Margin = System::Windows::Forms::Padding(3);
					 this->clockBack->Name = L"clockBack";
					 this->clockBack->Size = System::Drawing::Size(250, 200);
					 this->clockBack->TabIndex = 20;
					 // 
					 // timeDisplay
					 // 
					 this->timeDisplay->AutoSize = true;
					 this->timeDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->timeDisplay->Location = System::Drawing::Point(639, 95);
					 this->timeDisplay->Name = L"timeDisplay";
					 this->timeDisplay->Size = System::Drawing::Size(107, 39);
					 this->timeDisplay->TabIndex = 31;
					 this->timeDisplay->Text = L"00:00";
					 // 
					 // solBtn
					 // 
					 this->solBtn->BackColor = System::Drawing::Color::Gold;
					 this->solBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->solBtn->Location = System::Drawing::Point(592, 206);
					 this->solBtn->Name = L"solBtn";
					 this->solBtn->Size = System::Drawing::Size(100, 40);
					 this->solBtn->TabIndex = 32;
					 this->solBtn->Text = L"Soultion";
					 this->solBtn->UseVisualStyleBackColor = false;
					 this->solBtn->Click += gcnew System::EventHandler(this, &MyForm::solBtn_Click);
					 // 
					 // clearBtn
					 // 
					 this->clearBtn->BackColor = System::Drawing::Color::Red;
					 this->clearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->clearBtn->Location = System::Drawing::Point(698, 206);
					 this->clearBtn->Name = L"clearBtn";
					 this->clearBtn->Size = System::Drawing::Size(100, 40);
					 this->clearBtn->TabIndex = 33;
					 this->clearBtn->Text = L"Clear All";
					 this->clearBtn->UseVisualStyleBackColor = false;
					 this->clearBtn->Click += gcnew System::EventHandler(this, &MyForm::clearBtn_Click);
					 // 
					 // clockBegin
					 // 
					 this->clockBegin->BackColor = System::Drawing::Color::PaleGreen;
					 this->clockBegin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->clockBegin->Location = System::Drawing::Point(640, 160);
					 this->clockBegin->Name = L"clockBegin";
					 this->clockBegin->Size = System::Drawing::Size(100, 40);
					 this->clockBegin->TabIndex = 34;
					 this->clockBegin->Text = L"Start";
					 this->clockBegin->UseVisualStyleBackColor = false;
					 this->clockBegin->Click += gcnew System::EventHandler(this, &MyForm::clockBegin_Click);
					 // 
					 // squareTopLeft
					 // 
					 this->squareTopLeft->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareTopLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareTopLeft->Location = System::Drawing::Point(102, 65);
					 this->squareTopLeft->Name = L"squareTopLeft";
					 this->squareTopLeft->Size = System::Drawing::Size(75, 75);
					 this->squareTopLeft->TabIndex = 35;
					 this->squareTopLeft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareTopLeft->Click += gcnew System::EventHandler(this, &MyForm::squareTopLeft_Click);
					 this->squareTopLeft->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareTopLeft_DoubleClick);
					 // 
					 // squareTopCenter
					 // 
					 this->squareTopCenter->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareTopCenter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareTopCenter->Location = System::Drawing::Point(210, 65);
					 this->squareTopCenter->Name = L"squareTopCenter";
					 this->squareTopCenter->Size = System::Drawing::Size(75, 75);
					 this->squareTopCenter->TabIndex = 36;
					 this->squareTopCenter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareTopCenter->Click += gcnew System::EventHandler(this, &MyForm::squareTopCenter_Click);
					 this->squareTopCenter->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareTopCenter_DoubleClick);
					 // 
					 // squareTopRight
					 // 
					 this->squareTopRight->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareTopRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareTopRight->Location = System::Drawing::Point(318, 65);
					 this->squareTopRight->Name = L"squareTopRight";
					 this->squareTopRight->Size = System::Drawing::Size(75, 75);
					 this->squareTopRight->TabIndex = 37;
					 this->squareTopRight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareTopRight->Click += gcnew System::EventHandler(this, &MyForm::squareTopRight_Click);
					 this->squareTopRight->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareTopRight_DoubleClick);
					 // 
					 // squareMidLeft
					 // 
					 this->squareMidLeft->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareMidLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareMidLeft->Location = System::Drawing::Point(102, 173);
					 this->squareMidLeft->Name = L"squareMidLeft";
					 this->squareMidLeft->Size = System::Drawing::Size(75, 75);
					 this->squareMidLeft->TabIndex = 38;
					 this->squareMidLeft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareMidLeft->Click += gcnew System::EventHandler(this, &MyForm::squareMidLeft_Click);
					 this->squareMidLeft->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareMidLeft_DoubleClick);
					 // 
					 // squareBotLeft
					 // 
					 this->squareBotLeft->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareBotLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareBotLeft->Location = System::Drawing::Point(102, 278);
					 this->squareBotLeft->Name = L"squareBotLeft";
					 this->squareBotLeft->Size = System::Drawing::Size(75, 75);
					 this->squareBotLeft->TabIndex = 39;
					 this->squareBotLeft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareBotLeft->Click += gcnew System::EventHandler(this, &MyForm::squareBotLeft_Click);
					 this->squareBotLeft->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareBotLeft_DoubleClick);
					 // 
					 // squareMidCenter
					 // 
					 this->squareMidCenter->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareMidCenter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareMidCenter->Location = System::Drawing::Point(210, 173);
					 this->squareMidCenter->Name = L"squareMidCenter";
					 this->squareMidCenter->Size = System::Drawing::Size(75, 75);
					 this->squareMidCenter->TabIndex = 40;
					 this->squareMidCenter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareMidCenter->Click += gcnew System::EventHandler(this, &MyForm::squareMidCenter_Click);
					 this->squareMidCenter->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareMidCenter_DoubleClick);
					 // 
					 // squareMidRight
					 // 
					 this->squareMidRight->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareMidRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareMidRight->Location = System::Drawing::Point(318, 173);
					 this->squareMidRight->Name = L"squareMidRight";
					 this->squareMidRight->Size = System::Drawing::Size(75, 75);
					 this->squareMidRight->TabIndex = 41;
					 this->squareMidRight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareMidRight->Click += gcnew System::EventHandler(this, &MyForm::squareMidRight_Click);
					 this->squareMidRight->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareMidRight_DoubleClick);
					 // 
					 // squareBotRight
					 // 
					 this->squareBotRight->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareBotRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareBotRight->Location = System::Drawing::Point(318, 278);
					 this->squareBotRight->Name = L"squareBotRight";
					 this->squareBotRight->Size = System::Drawing::Size(75, 75);
					 this->squareBotRight->TabIndex = 42;
					 this->squareBotRight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareBotRight->Click += gcnew System::EventHandler(this, &MyForm::squareBotRight_Click);
					 this->squareBotRight->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareBotRight_DoubleClick);
					 // 
					 // squareBotCenter
					 // 
					 this->squareBotCenter->BackColor = System::Drawing::Color::Chartreuse;
					 this->squareBotCenter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->squareBotCenter->Location = System::Drawing::Point(210, 278);
					 this->squareBotCenter->Name = L"squareBotCenter";
					 this->squareBotCenter->Size = System::Drawing::Size(75, 75);
					 this->squareBotCenter->TabIndex = 43;
					 this->squareBotCenter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->squareBotCenter->Click += gcnew System::EventHandler(this, &MyForm::squareBotCenter_Click);
					 this->squareBotCenter->DoubleClick += gcnew System::EventHandler(this, &MyForm::squareBotCenter_DoubleClick);
					 // 
					 // topRowSum
					 // 
					 this->topRowSum->AutoSize = true;
					 this->topRowSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->topRowSum->Location = System::Drawing::Point(435, 95);
					 this->topRowSum->Name = L"topRowSum";
					 this->topRowSum->Size = System::Drawing::Size(27, 29);
					 this->topRowSum->TabIndex = 44;
					 this->topRowSum->Text = L"0";
					 this->topRowSum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->topRowSum->Visible = false;
					 // 
					 // midRowSum
					 // 
					 this->midRowSum->AutoSize = true;
					 this->midRowSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->midRowSum->Location = System::Drawing::Point(435, 194);
					 this->midRowSum->Name = L"midRowSum";
					 this->midRowSum->Size = System::Drawing::Size(27, 29);
					 this->midRowSum->TabIndex = 45;
					 this->midRowSum->Text = L"0";
					 this->midRowSum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->midRowSum->Visible = false;
					 // 
					 // botRowSum
					 // 
					 this->botRowSum->AutoSize = true;
					 this->botRowSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->botRowSum->Location = System::Drawing::Point(435, 299);
					 this->botRowSum->Name = L"botRowSum";
					 this->botRowSum->Size = System::Drawing::Size(27, 29);
					 this->botRowSum->TabIndex = 46;
					 this->botRowSum->Text = L"0";
					 this->botRowSum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->botRowSum->Visible = false;
					 // 
					 // leftColSum
					 // 
					 this->leftColSum->AutoSize = true;
					 this->leftColSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->leftColSum->Location = System::Drawing::Point(111, 402);
					 this->leftColSum->Name = L"leftColSum";
					 this->leftColSum->Size = System::Drawing::Size(27, 29);
					 this->leftColSum->TabIndex = 47;
					 this->leftColSum->Text = L"0";
					 this->leftColSum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->leftColSum->Visible = false;
					 // 
					 // centerColSum
					 // 
					 this->centerColSum->AutoSize = true;
					 this->centerColSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->centerColSum->Location = System::Drawing::Point(219, 402);
					 this->centerColSum->Name = L"centerColSum";
					 this->centerColSum->Size = System::Drawing::Size(27, 29);
					 this->centerColSum->TabIndex = 48;
					 this->centerColSum->Text = L"0";
					 this->centerColSum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->centerColSum->Visible = false;
					 // 
					 // rightColSum
					 // 
					 this->rightColSum->AutoSize = true;
					 this->rightColSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->rightColSum->Location = System::Drawing::Point(327, 402);
					 this->rightColSum->Name = L"rightColSum";
					 this->rightColSum->Size = System::Drawing::Size(27, 29);
					 this->rightColSum->TabIndex = 49;
					 this->rightColSum->Text = L"0";
					 this->rightColSum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->rightColSum->Visible = false;
					 // 
					 // diagSum1
					 // 
					 this->diagSum1->AutoSize = true;
					 this->diagSum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->diagSum1->Location = System::Drawing::Point(435, 402);
					 this->diagSum1->Name = L"diagSum1";
					 this->diagSum1->Size = System::Drawing::Size(27, 29);
					 this->diagSum1->TabIndex = 50;
					 this->diagSum1->Text = L"0";
					 this->diagSum1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->diagSum1->Visible = false;
					 // 
					 // instructions1
					 // 
					 this->instructions1->AutoEllipsis = true;
					 this->instructions1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->instructions1->Location = System::Drawing::Point(534, 333);
					 this->instructions1->Name = L"instructions1";
					 this->instructions1->Size = System::Drawing::Size(199, 20);
					 this->instructions1->TabIndex = 51;
					 this->instructions1->Text = L"1) click start to begin game";
					 // 
					 // instructions2
					 // 
					 this->instructions2->AutoEllipsis = true;
					 this->instructions2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->instructions2->Location = System::Drawing::Point(534, 372);
					 this->instructions2->Name = L"instructions2";
					 this->instructions2->Size = System::Drawing::Size(241, 36);
					 this->instructions2->TabIndex = 52;
					 this->instructions2->Text = L"2) click digit followed by square to place digit";
					 // 
					 // instruction3
					 // 
					 this->instruction3->AutoEllipsis = true;
					 this->instruction3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->instruction3->Location = System::Drawing::Point(534, 419);
					 this->instruction3->Name = L"instruction3";
					 this->instruction3->Size = System::Drawing::Size(241, 26);
					 this->instruction3->TabIndex = 53;
					 this->instruction3->Text = L"3) double click square to erase ";
					 // 
					 // instruction4
					 // 
					 this->instruction4->AutoEllipsis = true;
					 this->instruction4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->instruction4->Location = System::Drawing::Point(534, 457);
					 this->instruction4->Name = L"instruction4";
					 this->instruction4->Size = System::Drawing::Size(264, 43);
					 this->instruction4->TabIndex = 54;
					 this->instruction4->Text = L"4) clicking a square with a number already in it will replace existing number";
					 // 
					 // label1
					 // 
					 this->label1->AutoEllipsis = true;
					 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->label1->Location = System::Drawing::Point(534, 500);
					 this->label1->Name = L"label1";
					 this->label1->Size = System::Drawing::Size(264, 33);
					 this->label1->TabIndex = 55;
					 this->label1->Text = L"5) double click on background to pause";
					 // 
					 // diagSum2
					 // 
					 this->diagSum2->AutoSize = true;
					 this->diagSum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->diagSum2->Location = System::Drawing::Point(12, 402);
					 this->diagSum2->Name = L"diagSum2";
					 this->diagSum2->Size = System::Drawing::Size(27, 29);
					 this->diagSum2->TabIndex = 56;
					 this->diagSum2->Text = L"0";
					 this->diagSum2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 this->diagSum2->Visible = false;
					 // 
					 // solTimer
					 // 
					 this->solTimer->Interval = 1000;
					 this->solTimer->Tick += gcnew System::EventHandler(this, &MyForm::solTimer_Tick);
					 // 
					 // MyForm
					 // 
					 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
					 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					 this->AutoSize = true;
					 this->BackColor = System::Drawing::Color::SeaShell;
					 this->ClientSize = System::Drawing::Size(867, 574);
					 this->Controls->Add(this->diagSum2);
					 this->Controls->Add(this->label1);
					 this->Controls->Add(this->instruction4);
					 this->Controls->Add(this->instruction3);
					 this->Controls->Add(this->instructions2);
					 this->Controls->Add(this->instructions1);
					 this->Controls->Add(this->diagSum1);
					 this->Controls->Add(this->rightColSum);
					 this->Controls->Add(this->centerColSum);
					 this->Controls->Add(this->leftColSum);
					 this->Controls->Add(this->botRowSum);
					 this->Controls->Add(this->midRowSum);
					 this->Controls->Add(this->topRowSum);
					 this->Controls->Add(this->squareBotCenter);
					 this->Controls->Add(this->squareBotRight);
					 this->Controls->Add(this->squareMidRight);
					 this->Controls->Add(this->squareMidCenter);
					 this->Controls->Add(this->squareBotLeft);
					 this->Controls->Add(this->squareMidLeft);
					 this->Controls->Add(this->squareTopRight);
					 this->Controls->Add(this->squareTopCenter);
					 this->Controls->Add(this->squareTopLeft);
					 this->Controls->Add(this->clockBegin);
					 this->Controls->Add(this->clearBtn);
					 this->Controls->Add(this->solBtn);
					 this->Controls->Add(this->timeDisplay);
					 this->Controls->Add(this->clockBack);
					 this->Controls->Add(this->numBtn1);
					 this->Controls->Add(this->numBtn9);
					 this->Controls->Add(this->numBtn8);
					 this->Controls->Add(this->numBtn7);
					 this->Controls->Add(this->numBtn6);
					 this->Controls->Add(this->numBtn5);
					 this->Controls->Add(this->numBtn4);
					 this->Controls->Add(this->numBtn3);
					 this->Controls->Add(this->numBtn2);
					 this->Controls->Add(this->Background);
					 this->Name = L"MyForm";
					 this->Text = L"Magic Square Game by Jose-Pablo Mantilla";
					 this->DoubleClick += gcnew System::EventHandler(this, &MyForm::MyForm_DoubleClick);
					 this->ResumeLayout(false);
					 this->PerformLayout();

				 }
	#pragma endregion

		private: System::Void clockBegin_Click(System::Object^  sender, System::EventArgs^  e) {
			timeCounter->Start();

		}
		private: System::Void timeCounter_Tick_1(System::Object^  sender, System::EventArgs^  e) {
			secs++;
			if (secs > 59) {
				secs = 0;
				mins++;
			}
			timeDisplay->Text = String::Format("{0:00}:{1:00}", mins, secs);
		}
		private: System::Void numBtn1_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn1->Text);
		}
		private: System::Void numBtn2_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn2->Text);
		}
		private: System::Void numBtn3_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn3->Text);
		}
		private: System::Void numBtn4_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn4->Text);
		}
		private: System::Void numBtn5_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn5->Text);
		}
		private: System::Void numBtn6_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn6->Text);
		}
		private: System::Void numBtn7_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn7->Text);
		}
		private: System::Void numBtn8_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn8->Text);
		}
		private: System::Void numBtn9_Click(System::Object^  sender, System::EventArgs^  e) {
			tempNum = Convert::ToInt32(numBtn9->Text);
		}

		private: System::Void squareTopLeft_Click(System::Object^  sender, System::EventArgs^  e) {
			begin();
			checkDuplicate();
			if (dupFlag == false) {
				topLeft = tempNum;
				squareTopLeft->Text = Convert::ToString(topLeft);
				SumTop();
				SumLeft();
				SumDiagonal1();
				SumDiagonal2();
			}
			winCond();
		}
		private: System::Void squareTopCenter_Click(System::Object^  sender, System::EventArgs^  e) {
			begin();
			checkDuplicate();
			if (dupFlag == false) {
				topCent = tempNum;
				squareTopCenter->Text = Convert::ToString(topCent);
				SumTop();
				SumCenter();
				SumDiagonal1();
				SumDiagonal2();
			}
			winCond();
		}
		private: System::Void squareTopRight_Click(System::Object^  sender, System::EventArgs^  e) {
			begin();
			checkDuplicate();
			if (dupFlag == false) {
				topRight = tempNum;
				squareTopRight->Text = Convert::ToString(topRight);
				SumTop();
				SumRight();
			}
			winCond();
		}
		private: System::Void squareMidLeft_Click(System::Object^  sender, System::EventArgs^  e) {
			begin();
			checkDuplicate();
			if (dupFlag == false) {
				midLeft = tempNum;
				squareMidLeft->Text = Convert::ToString(midLeft);
				SumMid();
				SumLeft();
				SumDiagonal1();
				SumDiagonal2();
			}
			winCond();
		}
		private: System::Void squareMidCenter_Click(System::Object^  sender, System::EventArgs^  e) {
			begin();
			checkDuplicate();
			if (dupFlag == false) {
				midCent = tempNum;
				squareMidCenter->Text = Convert::ToString(midCent);
				SumMid();
				SumCenter();
				SumDiagonal1();
				SumDiagonal2();
			}
			winCond();
		}
		private: System::Void squareMidRight_Click(System::Object^  sender, System::EventArgs^  e) {
			begin();
			checkDuplicate();
			if (dupFlag == false) {
				midRight = tempNum;
				squareMidRight->Text = Convert::ToString(midRight);
				SumMid();
				SumRight();
				SumDiagonal1();
				SumDiagonal2();
			}
			winCond();
		}
		private: System::Void squareBotLeft_Click(System::Object^  sender, System::EventArgs^  e) {
			begin();
			checkDuplicate();
			if (dupFlag == false) {
				botLeft = tempNum;
				squareBotLeft->Text = Convert::ToString(botLeft);
				SumBot();
				SumLeft();
				SumDiagonal1();
				SumDiagonal2();
			}
			winCond();
		}
		private: System::Void squareBotCenter_Click(System::Object^  sender, System::EventArgs^  e) {
			checkDuplicate();
			if (dupFlag == false) {
				botCent = tempNum;
				squareBotCenter->Text = Convert::ToString(botCent);
				SumBot();
				SumCenter();
				SumDiagonal1();
				SumDiagonal2();
			}
			winCond();
		}
		private: System::Void squareBotRight_Click(System::Object^  sender, System::EventArgs^  e) {
			begin();
			checkDuplicate();
			if (dupFlag == false) {
				botRight = tempNum;
				squareBotRight->Text = Convert::ToString(botRight);
				SumBot();
				SumRight();
				SumDiagonal1();
				SumDiagonal2();
			}
			winCond();
		}

		private: System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			clear();
		}

		private: System::Void squareTopLeft_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareTopLeft->Text = " ";
			topLeft = 0;
		}
		private: System::Void squareTopCenter_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareTopCenter->Text = " ";
			topCent = 0;
		}
		private: System::Void squareTopRight_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareTopRight->Text = " ";
			topRight = 0;
		}
		private: System::Void squareBotLeft_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareBotLeft->Text = " ";
			botLeft = 0;
		}
		private: System::Void squareBotCenter_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareBotCenter->Text = " ";
			botCent = 0;
		}
		private: System::Void squareBotRight_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareBotRight->Text = " ";
			botRight = 0;
		}
		private: System::Void squareMidLeft_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareMidLeft->Text = " ";
			midLeft = 0;
		}
		private: System::Void squareMidCenter_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareMidCenter->Text = " ";
			midCent = 0;
		}
		private: System::Void squareMidRight_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			squareMidRight->Text = " ";
			midRight = 0;
		}	
		private: System::Void MyForm_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			timeCounter->Stop();
		}
	
		private: System::Void SumTop() {
			topSum = topLeft + topCent + topRight;
			if ((topLeft != 0) && (topCent != 0) && (topRight != 0)) {
				topRowSum->Text = Convert::ToString(topSum);
				topRowSum->Visible = true;
			}
		}
		private: System::Void SumMid() {
			midSum = midLeft + midCent + midRight;
			if ((midLeft != 0) && (midCent != 0) && (midRight != 0)) {
				midRowSum->Text = Convert::ToString(midSum);
				midRowSum->Visible = true;
			}
		}
		private: System::Void SumBot() {
			botSum = botLeft + botCent + botRight;
			if ((botLeft != 0) && (botCent != 0) && (botRight != 0)) {
				botRowSum->Text = Convert::ToString(botSum);
				botRowSum->Visible = true;
			}
		}
		private: System::Void SumRight() {
			rightSum = topRight + midRight + botRight;
			if ((topRight != 0) && (midRight != 0) && (botRight != 0)) {
				rightColSum->Text = Convert::ToString(rightSum);
				rightColSum->Visible = true;
			}
		}
		private: System::Void SumCenter() {
			centerSum = topCent + midCent + botCent;
			if ((topCent != 0) && (midCent != 0) && (botCent != 0)) {				
				centerColSum->Text = Convert::ToString(centerSum);
				centerColSum->Visible = true;
			}
		}
		private: System::Void SumLeft() {
			leftSum = topLeft + midLeft + botLeft;
			if ((topLeft != 0) && (midLeft != 0) && (botLeft != 0)) {
				leftColSum->Text = Convert::ToString(leftSum);
				leftColSum->Visible = true;
			}
		}
		private: System::Void SumDiagonal1() {
			diagNum1 = topLeft + midCent + botRight;
			if ((topLeft != 0) && (midCent != 0) && (botRight != 0)) {
				diagSum1->Text = Convert::ToString(diagNum1);
				diagSum1->Visible = true;
			}
		}
		private: System::Void SumDiagonal2() {
			diagNum2 = topRight + midCent + botLeft;
			if ((topRight != 0) && (midCent != 0) && (botLeft != 0)) {
				diagSum2->Text = Convert::ToString(diagNum2);
				diagSum2->Visible = true;
			}
		}
	
		private: System::Void solBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			clear();
			solTimer->Start();
			timeCounter->Start();
			solve = true;
		}
		private: System::Void solTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			i++;
			switch (i) {
				case (1):
					squareMidCenter->Text = "5";
					break;
				case (2):
					squareTopRight->Text = "8";
					break;
				case (3):
					squareTopLeft->Text = "6";
					break;
				case (4):
					squareBotRight->Text = "4";
					diagSum1->Text = "15";
					diagSum1->Visible = true;
					break;
				case (5):
					squareBotLeft->Text = "2";
					diagSum2->Text = "15";
					diagSum2->Visible = true;
					break;
				case (6):
					squareMidLeft->Text = "7";
					leftColSum->Text = "15";
					leftColSum->Visible = true;
					break;
				case (7):
					squareBotCenter->Text = "9";
					botRowSum->Text = "15";
					botRowSum->Visible = true;
					break;
				case (8):
					squareTopCenter->Text = "1";
					topRowSum->Text = "15";
					topRowSum->Visible = true;
					centerColSum->Text = "15";
					centerColSum->Visible = true;
					break;
				case (9):
					squareMidRight->Text = "3";
					midRowSum->Text = "15";
					midRowSum->Visible = true;
					rightColSum->Text = "15";
					rightColSum->Visible = true;
					break;
			}
			if (i > 9) {
				solTimer->Stop();
				timeCounter->Stop();
			}
				
		}	
		
		private: System::Void begin() {
			if (timeCounter->Enabled == false) {
				timeCounter->Start();
			}			
		}
		private: System::Void clear() {
			squareBotRight->Text = " ";
			squareBotCenter->Text = " ";
			squareBotLeft->Text = " ";
			squareMidRight->Text = " ";
			squareMidCenter->Text = " ";
			squareMidLeft->Text = " ";
			squareTopRight->Text = " ";
			squareTopCenter->Text = " ";
			squareTopLeft->Text = " ";
			leftColSum->Text = " ";
			rightColSum->Text = " ";
			centerColSum->Text = " ";
			topRowSum->Text = " ";
			midRowSum->Text = " ";
			botRowSum->Text = " ";
			diagSum1->Text = " ";
			diagSum2->Text = " ";
			timeDisplay->Text = "00:00";
			secs = 0;
			mins = 0;
			topRight = 0;
			topCent = 0;
			topLeft = 0;
			midRight = 0;
			midCent = 0;
			midLeft = 0;
			botRight = 0;
			botCent = 0;
			botLeft = 0;
			topSum = 0;
			centerSum = 0;
			botSum = 0;
			rightSum = 0;
			midSum = 0;
			leftSum = 0;
			i = 0;
			tempNum = 0;
			solve = false;
			timeCounter->Enabled = false;
			solTimer->Enabled = false;
		}
		private: System::Void checkDuplicate() {
			dupFlag = false;
			if (tempNum == topLeft || tempNum == topCent || tempNum == topRight || tempNum == midLeft || 
				tempNum == midCent  || tempNum == midRight || tempNum == botLeft || tempNum == botCent || 
				tempNum == botRight) {
				SystemSounds::Beep->Play();
				dupFlag = true;
			}
		}
		private: System::Void winCond() {
			if ((leftSum == centerSum) && (leftSum == rightSum) && (leftSum == midSum) && (leftSum == topSum) &&
				(leftSum == botSum) && (leftSum == diagNum1) && (leftSum == diagNum2)){
				timeCounter->Stop();
				MessageBox::Show("You make it!");
				solve = true;
				
			}
		}

	};
};
