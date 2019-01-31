#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
namespace MemoryGame {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bStartGame;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label_win;

	protected:

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
			this->bStartGame = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label_win = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bStartGame
			// 
			this->bStartGame->Location = System::Drawing::Point(68, 97);
			this->bStartGame->Name = L"bStartGame";
			this->bStartGame->Size = System::Drawing::Size(105, 44);
			this->bStartGame->TabIndex = 36;
			this->bStartGame->Text = L"Start new game!";
			this->bStartGame->UseVisualStyleBackColor = true;
			this->bStartGame->Click += gcnew System::EventHandler(this, &MyForm::bStartGame_Click);
			// 
			// button1
			// 
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 39;
			this->button1->Tag = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(68, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 40;
			this->button2->Tag = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(124, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 41;
			this->button3->Tag = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(179, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 42;
			this->button4->Tag = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 68);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 43;
			this->button5->Tag = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(179, 68);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 46;
			this->button8->Tag = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 124);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 47;
			this->button9->Tag = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(68, 124);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 48;
			this->button10->Tag = L"10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(124, 124);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 49;
			this->button11->Tag = L"11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(179, 124);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 50;
			this->button12->Tag = L"12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(12, 180);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 51;
			this->button13->Tag = L"13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(68, 180);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 52;
			this->button14->Tag = L"14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(124, 180);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 53;
			this->button15->Tag = L"15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(179, 180);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 54;
			this->button16->Tag = L"16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(124, 68);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 45;
			this->button7->Tag = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(68, 68);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 44;
			this->button6->Tag = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label_win
			// 
			this->label_win->AutoSize = true;
			this->label_win->Location = System::Drawing::Point(56, 68);
			this->label_win->Name = L"label_win";
			this->label_win->Size = System::Drawing::Size(129, 13);
			this->label_win->TabIndex = 55;
			this->label_win->Text = L"Congratulations, you won!";
			this->label_win->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(239, 238);
			this->Controls->Add(this->label_win);
			this->Controls->Add(this->bStartGame);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Memory";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:

		cli::array<wchar_t>^ labels;
		int clicks = 0;
		Object^ prevClickedButtonId;
		Object^ clickedButtonId;

		void showGameButtons() {
			IEnumerator^ it = this->Controls->GetEnumerator();
			it->MoveNext();
			it->MoveNext();
			while (it->MoveNext()) {
				Button^ btn = (Button^)it->Current;
				btn->Visible = true;
			}
		}

		void hideGameButtons() {
			IEnumerator^ it = this->Controls->GetEnumerator();
			it->MoveNext();
			it->MoveNext();
			while (it->MoveNext()) {
				Button^ btn = (Button^)it->Current;
				btn->Visible = false;
			}
		}

		System::Void bStartGame_Click(System::Object^  sender, System::EventArgs^  e) {
			showGameButtons();

			bStartGame->Visible = false;
			bStartGame->Enabled = false;
			label_win->Visible = false;

			labels = gcnew cli::array<wchar_t> (16);
			for (int i = 0; i < 8; i++) {
				labels[i] = i + 49;
				labels[8+i] = i + 49;
			}

			//TODO shuffle array
		}

		int objectToInt(Object^ tag) {
			if (tag == L"1") return 0;
			else if (tag == L"2") return 1;
			else if (tag == L"3") return 2;
			else if (tag == L"4") return 3;
			else if (tag == L"5") return 4;
			else if (tag == L"6") return 5;
			else if (tag == L"7") return 6;
			else if (tag == L"8") return 7;
			else if (tag == L"9") return 8;
			else if (tag == L"10") return 9;
			else if (tag == L"11") return 10;
			else if (tag == L"12") return 11;
			else if (tag == L"13") return 12;
			else if (tag == L"14") return 13;
			else if (tag == L"15") return 14;
			else return 15;
		}

		Button^ findButton(Object^ tag) {

			IEnumerator^ it = this->Controls->GetEnumerator();
			it->MoveNext();
			it->MoveNext();
			int i = 0;
			while (it->MoveNext()) {
				Button^ btn = (Button^)it->Current;
				if (btn->Tag == tag)
					return btn;
			}
			return nullptr;
		}

		bool checkIfWin() {
			IEnumerator^ it = this->Controls->GetEnumerator();
			it->MoveNext();
			it->MoveNext();
			int i = 0;
			while (it->MoveNext()) {
				Button^ btn = (Button^)it->Current;
				if (btn->Enabled == true)
					return false;
			}
			return true;
		}

		void gameWon() {
			hideGameButtons();
			bStartGame->Visible = true;
			bStartGame->Enabled = true;
			label_win->Visible = true;
		}

		System::Void button_Click(System::Object^  sender, System::EventArgs^ e) {

			clicks++;
			if (clicks == 3) {
				clicks = 1;
				Button^ btn1 = findButton(prevClickedButtonId);
				Button^ btn2 = findButton(clickedButtonId);
				if (btn1->Enabled == true && btn2->Enabled == true) {
					btn1->Text = "";
					btn2->Text = "";
				}
			}

			Button^ button = (Button^)sender;
			Object^ tag = button->Tag;
			prevClickedButtonId = clickedButtonId;
			clickedButtonId = tag;
			button->Text = labels[objectToInt(clickedButtonId)].ToString();

			if (clicks == 2) {
				Button^ btn1 = findButton(prevClickedButtonId);
				Button^ btn2 = findButton(clickedButtonId);
				if (btn1->Text == btn2->Text) {
					btn1->Enabled = false;
					btn2->Enabled = false;
				}
			}
			if (checkIfWin()) {
				gameWon();
			}
		}
	};
};

