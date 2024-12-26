#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cliext/vector>
#include <vcclr.h>
#include <sstream>
#include <istream>
#include <fstream>
#include <cstring>
#include "Q.h"
#include <time.h>
#include <chrono>
#include <thread>



namespace Project5 {

	using namespace std;
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
     
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ checBoxQuestionPanel;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ quizDetailPanel;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button40;



	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Panel^ reviewPanel;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;

	private: System::Windows::Forms::LinkLabel^ linkLabel6;
	private: System::Windows::Forms::Label^ label48;

	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Panel^ radioButtonQuestionPanel;

	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label24;















	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;















		/*PUBLIC MEMBERS HERE*/
		/*DECLARING A QUESTION BANK TO HOLD THE QUESTIONS*/
	private:
		cliext::vector<Q^>^ mainQuestionBank;
		int score = 0;
		int i = 0;
		int points = 4;
private: System::Windows::Forms::PictureBox^ pictureBox1;
	   int binary = 0;

	public:
		/*INITIALIZING A FORM*/
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			/*POPULATING THE QUESTION BANK DATA STRUVC=UREN */
			//
			mainQuestionBank = gcnew cliext::vector<Q^>();
			loadQuestionsToQuestionBank("CompQuestionBank.txt");

			/*INITIALLY START WITH THE OTHER PANELS HIDDEN*/
			/*QUESTION TYPE PANELS*/			
			
			radioButtonQuestionPanel->Visible = false;
			reviewPanel->Visible = false;

			/*PROGRESS BAR PANEL*/
			panel2->Visible = false;
			button1->Visible = false;
			button40->Visible = false;
			panel9->Visible = true;
			panel5->Visible = false;
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

	
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->reviewPanel = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButtonQuestionPanel = (gcnew System::Windows::Forms::Panel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->quizDetailPanel = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->reviewPanel->SuspendLayout();
			this->radioButtonQuestionPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->quizDetailPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(16, 520);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 39);
			this->button7->TabIndex = 50;
			this->button7->Text = L"Log Out";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(16, 462);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 39);
			this->button5->TabIndex = 48;
			this->button5->Text = L"Math Quiz Game";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(16, 405);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 39);
			this->button4->TabIndex = 47;
			this->button4->Text = L"ISTN Quiz Game";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(16, 349);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 39);
			this->button3->TabIndex = 46;
			this->button3->Text = L"Stat Quiz Game";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(16, 291);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 39);
			this->button2->TabIndex = 45;
			this->button2->Text = L"Comp Quiz Game";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel9->Controls->Add(this->label16);
			this->panel9->Location = System::Drawing::Point(16, 238);
			this->panel9->Margin = System::Windows::Forms::Padding(2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(170, 39);
			this->panel9->TabIndex = 44;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel9_Paint);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(55, 8);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 23);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Student:";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->reviewPanel);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->label47);
			this->panel1->Controls->Add(this->button40);
			this->panel1->Controls->Add(this->quizDetailPanel);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->radioButtonQuestionPanel);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(202, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(826, 550);
			this->panel1->TabIndex = 43;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Silver;
			this->panel5->Controls->Add(this->checkBox9);
			this->panel5->Controls->Add(this->checkBox10);
			this->panel5->Controls->Add(this->checkBox11);
			this->panel5->Controls->Add(this->checkBox12);
			this->panel5->Controls->Add(this->linkLabel6);
			this->panel5->Controls->Add(this->label48);
			this->panel5->Location = System::Drawing::Point(20, 95);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(585, 369);
			this->panel5->TabIndex = 54;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// reviewPanel
			// 
			this->reviewPanel->BackColor = System::Drawing::Color::Transparent;
			this->reviewPanel->Controls->Add(this->label44);
			this->reviewPanel->Controls->Add(this->label43);
			this->reviewPanel->Controls->Add(this->label42);
			this->reviewPanel->Controls->Add(this->label40);
			this->reviewPanel->Controls->Add(this->label39);
			this->reviewPanel->Controls->Add(this->label38);
			this->reviewPanel->Controls->Add(this->label37);
			this->reviewPanel->Controls->Add(this->label36);
			this->reviewPanel->Controls->Add(this->label35);
			this->reviewPanel->Controls->Add(this->label34);
			this->reviewPanel->Controls->Add(this->label33);
			this->reviewPanel->Controls->Add(this->label32);
			this->reviewPanel->Controls->Add(this->label31);
			this->reviewPanel->Controls->Add(this->label30);
			this->reviewPanel->Controls->Add(this->label29);
			this->reviewPanel->Controls->Add(this->label28);
			this->reviewPanel->Location = System::Drawing::Point(18, 93);
			this->reviewPanel->Margin = System::Windows::Forms::Padding(2);
			this->reviewPanel->Name = L"reviewPanel";
			this->reviewPanel->Size = System::Drawing::Size(806, 369);
			this->reviewPanel->TabIndex = 37;
			this->reviewPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::reviewPanel_Paint);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label44->Location = System::Drawing::Point(411, 258);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(71, 37);
			this->label44->TabIndex = 53;
			this->label44->Text = L"No.";
			this->label44->Click += gcnew System::EventHandler(this, &MyForm::label44_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label43->Location = System::Drawing::Point(496, 258);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(130, 37);
			this->label43->TabIndex = 52;
			this->label43->Text = L"/100.00";
			this->label43->Click += gcnew System::EventHandler(this, &MyForm::label43_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label42->Location = System::Drawing::Point(192, 258);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(249, 37);
			this->label42->TabIndex = 51;
			this->label42->Text = L"Highest grade: ";
			this->label42->Click += gcnew System::EventHandler(this, &MyForm::label42_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label40->Location = System::Drawing::Point(559, 177);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(38, 23);
			this->label40->TabIndex = 49;
			this->label40->Text = L"No.";
			this->label40->Click += gcnew System::EventHandler(this, &MyForm::label40_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label39->Location = System::Drawing::Point(396, 175);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(38, 23);
			this->label39->TabIndex = 48;
			this->label39->Text = L"No.";
			this->label39->Click += gcnew System::EventHandler(this, &MyForm::label39_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label38->Location = System::Drawing::Point(573, 128);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(65, 23);
			this->label38->TabIndex = 47;
			this->label38->Text = L"100.00";
			this->label38->Click += gcnew System::EventHandler(this, &MyForm::label38_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label37->Location = System::Drawing::Point(412, 128);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(48, 23);
			this->label37->TabIndex = 46;
			this->label37->Text = L"Total";
			this->label37->Click += gcnew System::EventHandler(this, &MyForm::label37_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label36->Location = System::Drawing::Point(148, 175);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(77, 23);
			this->label36->TabIndex = 45;
			this->label36->Text = L"Finished";
			this->label36->Click += gcnew System::EventHandler(this, &MyForm::label36_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label35->Location = System::Drawing::Point(28, 147);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(820, 23);
			this->label35->TabIndex = 44;
			this->label35->Text = L"---------------------------------------------------------------------------------"
				L"------------------------------------------------------";
			this->label35->Click += gcnew System::EventHandler(this, &MyForm::label35_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label34->Location = System::Drawing::Point(50, 175);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(38, 23);
			this->label34->TabIndex = 43;
			this->label34->Text = L"No.";
			this->label34->Click += gcnew System::EventHandler(this, &MyForm::label34_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label33->Location = System::Drawing::Point(679, 128);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(69, 23);
			this->label33->TabIndex = 42;
			this->label33->Text = L"Review";
			this->label33->Click += gcnew System::EventHandler(this, &MyForm::label33_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label32->Location = System::Drawing::Point(512, 128);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(70, 23);
			this->label32->TabIndex = 41;
			this->label32->Text = L"Grade /";
			this->label32->Click += gcnew System::EventHandler(this, &MyForm::label32_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label31->Location = System::Drawing::Point(360, 128);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(60, 23);
			this->label31->TabIndex = 40;
			this->label31->Text = L"Mark/";
			this->label31->Click += gcnew System::EventHandler(this, &MyForm::label31_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label30->Location = System::Drawing::Point(148, 128);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(52, 23);
			this->label30->TabIndex = 39;
			this->label30->Text = L"State";
			this->label30->Click += gcnew System::EventHandler(this, &MyForm::label30_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label29->Location = System::Drawing::Point(28, 128);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(75, 23);
			this->label29->TabIndex = 38;
			this->label29->Text = L"Attempt";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label28->Location = System::Drawing::Point(146, 31);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(536, 37);
			this->label28->TabIndex = 38;
			this->label28->Text = L"Summary of your previos attempts";
			this->label28->Click += gcnew System::EventHandler(this, &MyForm::label28_Click);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->checkBox9->Location = System::Drawing::Point(44, 241);
			this->checkBox9->Margin = System::Windows::Forms::Padding(2);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(114, 27);
			this->checkBox9->TabIndex = 37;
			this->checkBox9->Text = L"checkBox9";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->checkBox10->Location = System::Drawing::Point(44, 198);
			this->checkBox10->Margin = System::Windows::Forms::Padding(2);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(124, 27);
			this->checkBox10->TabIndex = 36;
			this->checkBox10->Text = L"checkBox10";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox10_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->checkBox11->Location = System::Drawing::Point(44, 158);
			this->checkBox11->Margin = System::Windows::Forms::Padding(2);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(124, 27);
			this->checkBox11->TabIndex = 35;
			this->checkBox11->Text = L"checkBox11";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox11_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->checkBox12->Location = System::Drawing::Point(44, 119);
			this->checkBox12->Margin = System::Windows::Forms::Padding(2);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(124, 27);
			this->checkBox12->TabIndex = 34;
			this->checkBox12->Text = L"checkBox12";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox12_CheckedChanged);
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->linkLabel6->Location = System::Drawing::Point(40, 303);
			this->linkLabel6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(95, 19);
			this->linkLabel6->TabIndex = 31;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"clear answer";
			this->linkLabel6->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel6_LinkClicked);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label48->Location = System::Drawing::Point(40, 58);
			this->label48->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(82, 23);
			this->label48->TabIndex = 26;
			this->label48->Text = L"Question";
			this->label48->Click += gcnew System::EventHandler(this, &MyForm::label48_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(559, 76);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(41, 13);
			this->label47->TabIndex = 56;
			this->label47->Text = L"label47";
			this->label47->Click += gcnew System::EventHandler(this, &MyForm::label47_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Calibri", 9.8F, System::Drawing::FontStyle::Bold));
			this->button40->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button40->Location = System::Drawing::Point(727, 511);
			this->button40->Margin = System::Windows::Forms::Padding(2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(80, 32);
			this->button40->TabIndex = 54;
			this->button40->Text = L"Finish";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(746, 511);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 35);
			this->button1->TabIndex = 16;
			this->button1->Text = L"NEXT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// radioButtonQuestionPanel
			// 
			this->radioButtonQuestionPanel->BackColor = System::Drawing::Color::Silver;
			this->radioButtonQuestionPanel->Controls->Add(this->linkLabel4);
			this->radioButtonQuestionPanel->Controls->Add(this->radioButton1);
			this->radioButtonQuestionPanel->Controls->Add(this->radioButton2);
			this->radioButtonQuestionPanel->Controls->Add(this->radioButton3);
			this->radioButtonQuestionPanel->Controls->Add(this->radioButton4);
			this->radioButtonQuestionPanel->Controls->Add(this->label24);
			this->radioButtonQuestionPanel->Location = System::Drawing::Point(22, 95);
			this->radioButtonQuestionPanel->Margin = System::Windows::Forms::Padding(2);
			this->radioButtonQuestionPanel->Name = L"radioButtonQuestionPanel";
			this->radioButtonQuestionPanel->Size = System::Drawing::Size(585, 369);
			this->radioButtonQuestionPanel->TabIndex = 35;
			this->radioButtonQuestionPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::radioButtonQuestionPanel_Paint);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->linkLabel4->Location = System::Drawing::Point(40, 303);
			this->linkLabel4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(95, 19);
			this->linkLabel4->TabIndex = 31;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"clear answer";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel4_LinkClicked);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->radioButton1->Location = System::Drawing::Point(44, 113);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(132, 27);
			this->radioButton1->TabIndex = 30;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->radioButton2->Location = System::Drawing::Point(44, 162);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(132, 27);
			this->radioButton2->TabIndex = 29;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->radioButton3->Location = System::Drawing::Point(44, 205);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(132, 27);
			this->radioButton3->TabIndex = 28;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->radioButton4->Location = System::Drawing::Point(44, 247);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(132, 27);
			this->radioButton4->TabIndex = 27;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label24->Location = System::Drawing::Point(40, 58);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(82, 23);
			this->label24->TabIndex = 26;
			this->label24->Text = L"Question";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(16, 38);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(518, 37);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Create a Multiplechoice Question";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel2->Controls->Add(this->button41);
			this->panel2->Controls->Add(this->button42);
			this->panel2->Controls->Add(this->button43);
			this->panel2->Controls->Add(this->button44);
			this->panel2->Controls->Add(this->button45);
			this->panel2->Controls->Add(this->button46);
			this->panel2->Controls->Add(this->button32);
			this->panel2->Controls->Add(this->button33);
			this->panel2->Controls->Add(this->button34);
			this->panel2->Controls->Add(this->button35);
			this->panel2->Controls->Add(this->button36);
			this->panel2->Controls->Add(this->button37);
			this->panel2->Controls->Add(this->button26);
			this->panel2->Controls->Add(this->button27);
			this->panel2->Controls->Add(this->button28);
			this->panel2->Controls->Add(this->button29);
			this->panel2->Controls->Add(this->button30);
			this->panel2->Controls->Add(this->button31);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->button23);
			this->panel2->Controls->Add(this->button24);
			this->panel2->Controls->Add(this->button25);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->button17);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(615, 93);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(192, 369);
			this->panel2->TabIndex = 24;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button41->Location = System::Drawing::Point(161, 264);
			this->button41->Margin = System::Windows::Forms::Padding(2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(26, 37);
			this->button41->TabIndex = 61;
			this->button41->Text = L"1";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button42->Location = System::Drawing::Point(130, 264);
			this->button42->Margin = System::Windows::Forms::Padding(2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(26, 37);
			this->button42->TabIndex = 60;
			this->button42->Text = L"1";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button43->Location = System::Drawing::Point(98, 264);
			this->button43->Margin = System::Windows::Forms::Padding(2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(26, 37);
			this->button43->TabIndex = 59;
			this->button43->Text = L"1";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button44->Location = System::Drawing::Point(68, 264);
			this->button44->Margin = System::Windows::Forms::Padding(2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(26, 37);
			this->button44->TabIndex = 58;
			this->button44->Text = L"1";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button45->Location = System::Drawing::Point(37, 264);
			this->button45->Margin = System::Windows::Forms::Padding(2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(26, 37);
			this->button45->TabIndex = 57;
			this->button45->Text = L"1";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button46->Location = System::Drawing::Point(6, 264);
			this->button46->Margin = System::Windows::Forms::Padding(2);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(26, 37);
			this->button46->TabIndex = 56;
			this->button46->Text = L"1";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button32->Location = System::Drawing::Point(161, 223);
			this->button32->Margin = System::Windows::Forms::Padding(2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(26, 37);
			this->button32->TabIndex = 55;
			this->button32->Text = L"1";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button33->Location = System::Drawing::Point(130, 223);
			this->button33->Margin = System::Windows::Forms::Padding(2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(26, 37);
			this->button33->TabIndex = 54;
			this->button33->Text = L"1";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button34->Location = System::Drawing::Point(98, 223);
			this->button34->Margin = System::Windows::Forms::Padding(2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(26, 37);
			this->button34->TabIndex = 53;
			this->button34->Text = L"1";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button35->Location = System::Drawing::Point(68, 223);
			this->button35->Margin = System::Windows::Forms::Padding(2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(26, 37);
			this->button35->TabIndex = 52;
			this->button35->Text = L"1";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button36->Location = System::Drawing::Point(37, 223);
			this->button36->Margin = System::Windows::Forms::Padding(2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(26, 37);
			this->button36->TabIndex = 51;
			this->button36->Text = L"1";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button37->Location = System::Drawing::Point(6, 223);
			this->button37->Margin = System::Windows::Forms::Padding(2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(26, 37);
			this->button37->TabIndex = 50;
			this->button37->Text = L"1";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button26->Location = System::Drawing::Point(161, 178);
			this->button26->Margin = System::Windows::Forms::Padding(2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(26, 37);
			this->button26->TabIndex = 49;
			this->button26->Text = L"1";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button27->Location = System::Drawing::Point(130, 178);
			this->button27->Margin = System::Windows::Forms::Padding(2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(26, 37);
			this->button27->TabIndex = 48;
			this->button27->Text = L"1";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button28->Location = System::Drawing::Point(98, 178);
			this->button28->Margin = System::Windows::Forms::Padding(2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(26, 37);
			this->button28->TabIndex = 47;
			this->button28->Text = L"1";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button29->Location = System::Drawing::Point(68, 178);
			this->button29->Margin = System::Windows::Forms::Padding(2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(26, 37);
			this->button29->TabIndex = 46;
			this->button29->Text = L"1";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button30->Location = System::Drawing::Point(37, 178);
			this->button30->Margin = System::Windows::Forms::Padding(2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(26, 37);
			this->button30->TabIndex = 45;
			this->button30->Text = L"1";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button31->Location = System::Drawing::Point(6, 178);
			this->button31->Margin = System::Windows::Forms::Padding(2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(26, 37);
			this->button31->TabIndex = 44;
			this->button31->Text = L"1";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button20->Location = System::Drawing::Point(161, 134);
			this->button20->Margin = System::Windows::Forms::Padding(2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(26, 37);
			this->button20->TabIndex = 43;
			this->button20->Text = L"1";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button21->Location = System::Drawing::Point(130, 134);
			this->button21->Margin = System::Windows::Forms::Padding(2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(26, 37);
			this->button21->TabIndex = 42;
			this->button21->Text = L"1";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button22->Location = System::Drawing::Point(98, 134);
			this->button22->Margin = System::Windows::Forms::Padding(2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(26, 37);
			this->button22->TabIndex = 41;
			this->button22->Text = L"28";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button23->Location = System::Drawing::Point(68, 134);
			this->button23->Margin = System::Windows::Forms::Padding(2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(26, 37);
			this->button23->TabIndex = 40;
			this->button23->Text = L"1";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button24->Location = System::Drawing::Point(37, 134);
			this->button24->Margin = System::Windows::Forms::Padding(2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(26, 37);
			this->button24->TabIndex = 39;
			this->button24->Text = L"1";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button25->Location = System::Drawing::Point(6, 134);
			this->button25->Margin = System::Windows::Forms::Padding(2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(26, 37);
			this->button25->TabIndex = 38;
			this->button25->Text = L"1";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button14->Location = System::Drawing::Point(161, 89);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(26, 37);
			this->button14->TabIndex = 37;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button15->Location = System::Drawing::Point(130, 89);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(26, 37);
			this->button15->TabIndex = 36;
			this->button15->Text = L"1";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri", 7, System::Drawing::FontStyle::Bold));
			this->button16->Location = System::Drawing::Point(98, 89);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(26, 37);
			this->button16->TabIndex = 35;
			this->button16->Text = L"30";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button17->Location = System::Drawing::Point(68, 89);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(26, 37);
			this->button17->TabIndex = 34;
			this->button17->Text = L"1";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click_1);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button18->Location = System::Drawing::Point(37, 89);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(26, 37);
			this->button18->TabIndex = 33;
			this->button18->Text = L"1";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button19->Location = System::Drawing::Point(6, 89);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(26, 37);
			this->button19->TabIndex = 32;
			this->button19->Text = L"1";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button13->Location = System::Drawing::Point(161, 45);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(26, 37);
			this->button13->TabIndex = 31;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button12->Location = System::Drawing::Point(130, 45);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(26, 37);
			this->button12->TabIndex = 30;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button11->Location = System::Drawing::Point(98, 45);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(26, 37);
			this->button11->TabIndex = 29;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button10->Location = System::Drawing::Point(68, 45);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(26, 37);
			this->button10->TabIndex = 28;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(37, 45);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(26, 37);
			this->button9->TabIndex = 27;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 8.8F, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(6, 45);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(26, 37);
			this->button8->TabIndex = 26;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12.8F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(2, 331);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 22);
			this->label5->TabIndex = 25;
			this->label5->Text = L"00:00:00";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(2, 7);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 23);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Question Number:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// quizDetailPanel
			// 
			this->quizDetailPanel->BackColor = System::Drawing::Color::Silver;
			this->quizDetailPanel->Controls->Add(this->label9);
			this->quizDetailPanel->Controls->Add(this->label14);
			this->quizDetailPanel->Controls->Add(this->label15);
			this->quizDetailPanel->Controls->Add(this->label11);
			this->quizDetailPanel->Controls->Add(this->label13);
			this->quizDetailPanel->Controls->Add(this->label20);
			this->quizDetailPanel->Controls->Add(this->label17);
			this->quizDetailPanel->Controls->Add(this->label18);
			this->quizDetailPanel->Controls->Add(this->label19);
			this->quizDetailPanel->Controls->Add(this->button39);
			this->quizDetailPanel->Controls->Add(this->button38);
			this->quizDetailPanel->Location = System::Drawing::Point(20, 95);
			this->quizDetailPanel->Margin = System::Windows::Forms::Padding(2);
			this->quizDetailPanel->Name = L"quizDetailPanel";
			this->quizDetailPanel->Size = System::Drawing::Size(784, 411);
			this->quizDetailPanel->TabIndex = 36;
			this->quizDetailPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::quizDetailPanel_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label9->Location = System::Drawing::Point(334, 70);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 26);
			this->label9->TabIndex = 41;
			this->label9->Text = L"Quiz details:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label14->Location = System::Drawing::Point(170, 174);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(169, 26);
			this->label14->TabIndex = 45;
			this->label14->Text = L"Content of Quiz:";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label15->Location = System::Drawing::Point(332, 179);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(309, 26);
			this->label15->TabIndex = 46;
			this->label15->Text = L"*********************************";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label11->Location = System::Drawing::Point(302, 131);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(210, 26);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Number of attempts:";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label13->Location = System::Drawing::Point(501, 128);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 26);
			this->label13->TabIndex = 44;
			this->label13->Text = L"n";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(395, 235);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(238, 20);
			this->label20->TabIndex = 51;
			this->label20->Text = L"Grade to pass: 7.50 out of 16:00";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(210, 233);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(163, 24);
			this->label17->TabIndex = 47;
			this->label17->Text = L"Quiz Game Rules:";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(316, 262);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(208, 20);
			this->label18->TabIndex = 48;
			this->label18->Text = L"1. Sequential quiz questions";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click_1);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(316, 292);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(221, 20);
			this->label19->TabIndex = 49;
			this->label19->Text = L"2. Consist of  3 question types";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button39->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->button39->ForeColor = System::Drawing::Color::Red;
			this->button39->Location = System::Drawing::Point(353, 324);
			this->button39->Margin = System::Windows::Forms::Padding(2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(132, 35);
			this->button39->TabIndex = 50;
			this->button39->Text = L"View all";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button38->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->button38->ForeColor = System::Drawing::Color::Red;
			this->button38->Location = System::Drawing::Point(227, 374);
			this->button38->Margin = System::Windows::Forms::Padding(2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(378, 35);
			this->button38->TabIndex = 40;
			this->button38->Text = L"START QUIZ GAME ATTEMPT";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(177, 219);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ClientSize = System::Drawing::Size(1037, 570);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->reviewPanel->ResumeLayout(false);
			this->reviewPanel->PerformLayout();
			this->radioButtonQuestionPanel->ResumeLayout(false);
			this->radioButtonQuestionPanel->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->quizDetailPanel->ResumeLayout(false);
			this->quizDetailPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	   
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
		i++;
		displayQuestion();
		updateProgressPanel();
		if (i == mainQuestionBank->size()-1)
		{
			button1->Hide();//next button 
			button40->Show();//finish button
		}
		score += binary;
		score += points;
		binary = 0;
}
private: System::Void button38_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	quizDetailPanel->Hide();/*HIDDING THE QUIZ DETAIL PANEL BEFORE STARTING QUIZ*/
	panel2->Show();/*SHOWING PANEL PROGRESS THON TO ALLOW TO PROCEED TO THE NEXT QUESTION*/
	displayQuestion();/*PROUGHOUT THE QUIZ*/
	button1->Show();/*SHOWING THE NEXT BUTTTULLING THE OBJECTS FROM THE QUESTION BANK*/
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "COMP313W1 Computer Systems";
	mainQuestionBank = gcnew cliext::vector<Q^>();
	loadQuestionsToQuestionBank("CompQuestionBank.txt");
	shuffleVector(mainQuestionBank);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "Statistics Introduction to Statistics";
	mainQuestionBank = gcnew cliext::vector<Q^>();
	loadQuestionsToQuestionBank("StatQuestionBank.txt");
	shuffleVector(mainQuestionBank);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "ISTN3SA System Analysis and Design";
	mainQuestionBank = gcnew cliext::vector<Q^>();
	loadQuestionsToQuestionBank("ISTNQuestionBank.txt");
	shuffleVector(mainQuestionBank);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "MATH236 Discrete Mathematics";
	mainQuestionBank = gcnew cliext::vector<Q^>();
	loadQuestionsToQuestionBank("MathQuestionBank.txt");
	shuffleVector(mainQuestionBank);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void quizDetailPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked_2(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}
	/*LOADING QUESTION ON THE QUESTION BANK*/
	void loadQuestionsToQuestionBank(string filename)
	{
		/*************ATTEMPTING TO READ FROM THE TEXT FILES*************/

		/*TEMPLATE VECTOR TO HOLD THE ANSWER CHOICES*/
		String^ correctAnswer;
		Q^ newQuestionToAdd;

		/*DECLARING FSTREM READING*/
		ifstream reader(filename);
		if (reader.is_open())
		{
			/*STRING TO HOLD THE LINE READ*/
			string line;

			/*WHILE FILE HAS MORE LINES KEEP READING*/
			while (getline(reader, line))
			{
				/*FINDIND POSITION OF THE QUESTION DELIMETER*/
				size_t position = line.find(":");
				cliext::vector<String^>^ multipleChoiceAnswers = gcnew cliext::vector<String^>(4);
				if (position != string::npos)
				{
					String^ questionText = gcnew String(line.substr(1, position-1).c_str());
					String^ questionLevel = gcnew String(line.substr(1, 1).c_str());
					string answersAndCorrect = line.substr(position + 1);
					String^ questionType = gcnew String(line.substr(0,1).c_str());

					/*SPLITING THE STRING CONTAINING ANSWERS AND CORRECT ANSWER USING SRTRING STREAM*/
					istringstream ss(answersAndCorrect);
					string stringToken;
					while (getline(ss, stringToken, ','))
					{
						if (stringToken.back() == ';')
						{
							correctAnswer = gcnew String(stringToken.substr(0, stringToken.size() - 1).c_str());
						}
						else
						{
							multipleChoiceAnswers->push_back(gcnew String(stringToken.c_str()));
						}
					}

						newQuestionToAdd = gcnew Q(questionText, multipleChoiceAnswers, correctAnswer ,questionType);
						mainQuestionBank->push_back(newQuestionToAdd);
				}
			}
		reader.close();
		}
	}
	
	/*DISOPLAY QUESTION BANK METHODS*/
	void displayQuestion()
	{
		/*CHECKED*/
		if (mainQuestionBank[i]->getQuestionType() == "0")
		{
			label24->Text = mainQuestionBank[i]->getQuestion();
			radioButton1->Text = mainQuestionBank[i]->getAnswers()[4];
			radioButton2->Text = mainQuestionBank[i]->getAnswers()[5];
			radioButton3->Text = mainQuestionBank[i]->getAnswers()[6];
			radioButton4->Text = mainQuestionBank[i]->getAnswers()[7];
			panel5->Visible = false;
			radioButtonQuestionPanel->Visible = true;
		}
		else if (mainQuestionBank[i]->getQuestionType() == "1")
		{
			label24->Text = mainQuestionBank[i]->getQuestion();
			radioButton1->Text = mainQuestionBank[i]->getAnswers()[4];
			radioButton2->Text = mainQuestionBank[i]->getAnswers()[5];
			radioButton3->Visible = false;
			radioButton4->Visible = false;
			panel5->Visible = false;
			radioButtonQuestionPanel->Visible = true;
		}/*CHECKED*/
		else if (mainQuestionBank[i]->getQuestionType() == "2")
		{
			label48->Text = mainQuestionBank[i]->getQuestion();
			checkBox9->Text = mainQuestionBank[i]->getAnswers()[4];
			checkBox10->Text = mainQuestionBank[i]->getAnswers()[5];
			checkBox11->Text = mainQuestionBank[i]->getAnswers()[6];
			checkBox12->Text = mainQuestionBank[i]->getAnswers()[7];
			radioButtonQuestionPanel->Visible = false;
			panel5->Visible = true;
		}
	}

	void displayReview()
	{
		reviewPanel->Show();
		panel5->Visible = false;
		radioButtonQuestionPanel->Visible = false;
	}

	void updateProgressPanel()
	{
		cliext::vector<Button^>^ buttonArray = gcnew cliext::vector<Button^>();
		buttonArray->push_back(button8);
		buttonArray->push_back(button9);
		buttonArray->push_back(button10);
		buttonArray->push_back(button11);
		buttonArray->push_back(button12);
		buttonArray->push_back(button13);
		buttonArray->push_back(button19);
		buttonArray->push_back(button18);
		buttonArray->push_back(button17);
		buttonArray->push_back(button16);
		buttonArray->push_back(button15);
		buttonArray->push_back(button14);
		buttonArray->push_back(button25);
		buttonArray->push_back(button24);
		buttonArray->push_back(button23);
		buttonArray->push_back(button22);
		buttonArray->push_back(button21);
		buttonArray->push_back(button20);
		buttonArray->push_back(button31);
		buttonArray->push_back(button30);
		buttonArray->push_back(button29);
		buttonArray->push_back(button28);
		buttonArray->push_back(button27);
		buttonArray->push_back(button26);
		buttonArray->push_back(button37);
		buttonArray->push_back(button36);
		buttonArray->push_back(button35);
		buttonArray->push_back(button34);
		buttonArray->push_back(button33);
		buttonArray->push_back(button32);
		buttonArray->push_back(button46);
		buttonArray->push_back(button45);
		buttonArray->push_back(button44);
		buttonArray->push_back(button43);
		buttonArray->push_back(button42);
		buttonArray->push_back(button41);
	

		for (int index = 0; index < buttonArray->size(); index++)
		{
			buttonArray[index]->Hide();
		}

		for (int index = 0; index < mainQuestionBank->size(); index++)
		{
			buttonArray[index]->Text = gcnew String((index+1).ToString());
			buttonArray[index]->Show();
		}
			buttonArray[i-1]->BackColor = Color::Red;
			buttonArray[i-1]->Show();
	}

	void decrementingTimer(int sec)
	{
		auto startTime = std::chrono::system_clock::now();
		auto endTime = startTime + std::chrono::seconds(sec);

		while (std::chrono::system_clock::now() < endTime)
		{
			auto remaining = std::chrono::duration_cast<std::chrono::seconds>(endTime - std::chrono::system_clock::now()).count();
			label5->Text = gcnew String(remaining.ToString());
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
	}

	/*CREATING A TEMPLATE*/
	int checkAnswer()
	{
		if (mainQuestionBank[i]->getQuestionType() == "0" || mainQuestionBank[i]->getQuestionType() == "1")
		{
			cliext::vector<RadioButton^>^ providedAnswers = gcnew cliext::vector<RadioButton^>();
			providedAnswers->push_back(radioButton1);
			providedAnswers->push_back(radioButton2);
			providedAnswers->push_back(radioButton3);
			providedAnswers->push_back(radioButton4);
			
			for (int index = 0; index < providedAnswers->size(); index++)
			{
				bool isChecked = providedAnswers[0]->Checked;
				if (providedAnswers[index]->Checked == 1)
				{
					if (providedAnswers[index]->Text == mainQuestionBank[i]->getAnswer())
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
			}
			for (int index = 0; index < providedAnswers->size(); index++)
			{
				providedAnswers[index]->Checked = false;
			}
			providedAnswers->clear();
		}
		else if (mainQuestionBank[i]->getQuestionType() == "2")
		{
			cliext::vector<CheckBox^>^ providedAnswers = gcnew cliext::vector<CheckBox^>(4);
			providedAnswers->push_back(checkBox8);
			providedAnswers->push_back(checkBox7);
			providedAnswers->push_back(checkBox6);
			providedAnswers->push_back(checkBox5);

			for (int index = 0; index <providedAnswers->size(); index++)
			{
				if (!providedAnswers[index]->Checked == 1)
				{
					points--;
				}
			} 
			return points;
		}
	return 0;
	}

	void shuffleVector(cliext::vector<Q^>^ vector) {
		Random^ rnd = gcnew Random();
		
		int n = vector->size();
		while (n > 1) 
		{
			n--;
			int k = rnd->Next(n + 1);
			Q^ temp = vector[k];
			vector[k] = vector[n];
			vector[n] = temp;
		}
	}

private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e)
{
	displayReview();
	label39->Text = gcnew String(score.ToString());
	//label40->Text = gcnew String(((score * 100)/15).ToString());
	button40->Hide();
	reviewPanel->Show();
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	binary = checkAnswer();
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	binary = checkAnswer();
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	binary = checkAnswer();
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	binary = checkAnswer();
}
private: System::Void reviewPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private:System::Void Timer_Ticker(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label50_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel7_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void label51_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel6_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void label48_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked_3(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label46_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label45_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButtonQuestionPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void typeInQuestionPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel6_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel5_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label42_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label40_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}