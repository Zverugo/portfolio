#pragma once
#include "Reg.h"
#include "Admin.h"
#include "fstream"
#include <msclr\marshal_cppstd.h>
#include <String>

namespace ProjectDima {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LabelUsername;
	protected:
	private: System::Windows::Forms::Label^  LabelPassword;
	private: System::Windows::Forms::TextBox^  textBoxUsername;
	private: System::Windows::Forms::TextBox^  textBoxPassword;

	private: System::Windows::Forms::Label^  labelSignUp;
	private: System::Windows::Forms::Button^  buttonSignIn;
	private: System::Windows::Forms::TextBox^  textBoxSearchBook;
	private: System::Windows::Forms::Button^  buttonSearchBook;



	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::Label^  labelAuthor;
	private: System::Windows::Forms::Label^  labelGenre;
	private: System::Windows::Forms::Label^  labelPages;
	private: System::Windows::Forms::Label^  labelAvailability;
	private: System::Windows::Forms::Button^  buttonInformation;
	private: System::Windows::Forms::Button^  buttonSignOut;
	private: System::Windows::Forms::Label^  labelShowUsername;
	private: System::Windows::Forms::Button^  buttonAdmin;
	private: System::Windows::Forms::ListBox^  listBoxBooks;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->LabelUsername = (gcnew System::Windows::Forms::Label());
			this->LabelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelSignUp = (gcnew System::Windows::Forms::Label());
			this->buttonSignIn = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchBook = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearchBook = (gcnew System::Windows::Forms::Button());
			this->buttonSignOut = (gcnew System::Windows::Forms::Button());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelAuthor = (gcnew System::Windows::Forms::Label());
			this->labelGenre = (gcnew System::Windows::Forms::Label());
			this->labelPages = (gcnew System::Windows::Forms::Label());
			this->labelAvailability = (gcnew System::Windows::Forms::Label());
			this->buttonInformation = (gcnew System::Windows::Forms::Button());
			this->labelShowUsername = (gcnew System::Windows::Forms::Label());
			this->buttonAdmin = (gcnew System::Windows::Forms::Button());
			this->listBoxBooks = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// LabelUsername
			// 
			this->LabelUsername->AutoSize = true;
			this->LabelUsername->Location = System::Drawing::Point(29, 27);
			this->LabelUsername->Name = L"LabelUsername";
			this->LabelUsername->Size = System::Drawing::Size(58, 13);
			this->LabelUsername->TabIndex = 0;
			this->LabelUsername->Text = L"Username:";
			this->LabelUsername->Click += gcnew System::EventHandler(this, &Main::LabelUsername_Click);
			// 
			// LabelPassword
			// 
			this->LabelPassword->AutoSize = true;
			this->LabelPassword->Location = System::Drawing::Point(29, 66);
			this->LabelPassword->Name = L"LabelPassword";
			this->LabelPassword->Size = System::Drawing::Size(56, 13);
			this->LabelPassword->TabIndex = 1;
			this->LabelPassword->Text = L"Password:";
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->Location = System::Drawing::Point(94, 24);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(100, 20);
			this->textBoxUsername->TabIndex = 2;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(94, 63);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(100, 20);
			this->textBoxPassword->TabIndex = 3;
			// 
			// labelSignUp
			// 
			this->labelSignUp->AutoSize = true;
			this->labelSignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->labelSignUp->Location = System::Drawing::Point(151, 86);
			this->labelSignUp->Name = L"labelSignUp";
			this->labelSignUp->Size = System::Drawing::Size(43, 13);
			this->labelSignUp->TabIndex = 4;
			this->labelSignUp->Text = L"Sign up";
			this->labelSignUp->Click += gcnew System::EventHandler(this, &Main::labelSignUp_Click);
			// 
			// buttonSignIn
			// 
			this->buttonSignIn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonSignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonSignIn->Location = System::Drawing::Point(94, 118);
			this->buttonSignIn->Name = L"buttonSignIn";
			this->buttonSignIn->Size = System::Drawing::Size(100, 49);
			this->buttonSignIn->TabIndex = 5;
			this->buttonSignIn->Text = L"Sign in";
			this->buttonSignIn->UseVisualStyleBackColor = true;
			this->buttonSignIn->Click += gcnew System::EventHandler(this, &Main::buttonSignIn_Click);
			// 
			// textBoxSearchBook
			// 
			this->textBoxSearchBook->Enabled = false;
			this->textBoxSearchBook->Location = System::Drawing::Point(53, 232);
			this->textBoxSearchBook->Name = L"textBoxSearchBook";
			this->textBoxSearchBook->Size = System::Drawing::Size(100, 20);
			this->textBoxSearchBook->TabIndex = 6;
			// 
			// buttonSearchBook
			// 
			this->buttonSearchBook->Enabled = false;
			this->buttonSearchBook->Location = System::Drawing::Point(159, 229);
			this->buttonSearchBook->Name = L"buttonSearchBook";
			this->buttonSearchBook->Size = System::Drawing::Size(88, 23);
			this->buttonSearchBook->TabIndex = 7;
			this->buttonSearchBook->Text = L"Search book";
			this->buttonSearchBook->UseVisualStyleBackColor = true;
			// 
			// buttonSignOut
			// 
			this->buttonSignOut->Enabled = false;
			this->buttonSignOut->Location = System::Drawing::Point(94, 303);
			this->buttonSignOut->Name = L"buttonSignOut";
			this->buttonSignOut->Size = System::Drawing::Size(100, 48);
			this->buttonSignOut->TabIndex = 8;
			this->buttonSignOut->Text = L"Sign out";
			this->buttonSignOut->UseVisualStyleBackColor = true;
			this->buttonSignOut->Click += gcnew System::EventHandler(this, &Main::buttonSignOut_Click);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->BackColor = System::Drawing::Color::Transparent;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelName->ForeColor = System::Drawing::Color::White;
			this->labelName->Location = System::Drawing::Point(348, 27);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(38, 20);
			this->labelName->TabIndex = 10;
			this->labelName->Text = L"Title";
			// 
			// labelAuthor
			// 
			this->labelAuthor->AutoSize = true;
			this->labelAuthor->BackColor = System::Drawing::Color::Transparent;
			this->labelAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelAuthor->ForeColor = System::Drawing::Color::White;
			this->labelAuthor->Location = System::Drawing::Point(494, 27);
			this->labelAuthor->Name = L"labelAuthor";
			this->labelAuthor->Size = System::Drawing::Size(57, 20);
			this->labelAuthor->TabIndex = 11;
			this->labelAuthor->Text = L"Author";
			// 
			// labelGenre
			// 
			this->labelGenre->AutoSize = true;
			this->labelGenre->BackColor = System::Drawing::Color::Transparent;
			this->labelGenre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelGenre->CausesValidation = false;
			this->labelGenre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelGenre->ForeColor = System::Drawing::Color::White;
			this->labelGenre->Location = System::Drawing::Point(607, 27);
			this->labelGenre->Name = L"labelGenre";
			this->labelGenre->Size = System::Drawing::Size(56, 22);
			this->labelGenre->TabIndex = 12;
			this->labelGenre->Text = L"Genre";
			// 
			// labelPages
			// 
			this->labelPages->AutoSize = true;
			this->labelPages->BackColor = System::Drawing::Color::Transparent;
			this->labelPages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelPages->ForeColor = System::Drawing::Color::White;
			this->labelPages->Location = System::Drawing::Point(767, 27);
			this->labelPages->Name = L"labelPages";
			this->labelPages->Size = System::Drawing::Size(54, 20);
			this->labelPages->TabIndex = 13;
			this->labelPages->Text = L"Pages";
			// 
			// labelAvailability
			// 
			this->labelAvailability->AutoSize = true;
			this->labelAvailability->BackColor = System::Drawing::Color::Transparent;
			this->labelAvailability->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelAvailability->ForeColor = System::Drawing::Color::White;
			this->labelAvailability->Location = System::Drawing::Point(936, 27);
			this->labelAvailability->Name = L"labelAvailability";
			this->labelAvailability->Size = System::Drawing::Size(81, 20);
			this->labelAvailability->TabIndex = 14;
			this->labelAvailability->Text = L"Availability";
			// 
			// buttonInformation
			// 
			this->buttonInformation->Enabled = false;
			this->buttonInformation->Location = System::Drawing::Point(94, 173);
			this->buttonInformation->Name = L"buttonInformation";
			this->buttonInformation->Size = System::Drawing::Size(100, 27);
			this->buttonInformation->TabIndex = 18;
			this->buttonInformation->Text = L"Information";
			this->buttonInformation->UseVisualStyleBackColor = true;
			this->buttonInformation->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// labelShowUsername
			// 
			this->labelShowUsername->AutoSize = true;
			this->labelShowUsername->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelShowUsername->ForeColor = System::Drawing::Color::Red;
			this->labelShowUsername->Location = System::Drawing::Point(244, 30);
			this->labelShowUsername->Name = L"labelShowUsername";
			this->labelShowUsername->Size = System::Drawing::Size(0, 13);
			this->labelShowUsername->TabIndex = 19;
			// 
			// buttonAdmin
			// 
			this->buttonAdmin->Enabled = false;
			this->buttonAdmin->Location = System::Drawing::Point(94, 258);
			this->buttonAdmin->Name = L"buttonAdmin";
			this->buttonAdmin->Size = System::Drawing::Size(75, 23);
			this->buttonAdmin->TabIndex = 20;
			this->buttonAdmin->Text = L"Admin";
			this->buttonAdmin->UseVisualStyleBackColor = true;
			this->buttonAdmin->Visible = false;
			this->buttonAdmin->Click += gcnew System::EventHandler(this, &Main::buttonAdmin_Click);
			// 
			// listBoxBooks
			// 
			this->listBoxBooks->FormattingEnabled = true;
			this->listBoxBooks->Location = System::Drawing::Point(319, 63);
			this->listBoxBooks->Name = L"listBoxBooks";
			this->listBoxBooks->Size = System::Drawing::Size(726, 342);
			this->listBoxBooks->TabIndex = 21;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1131, 446);
			this->Controls->Add(this->listBoxBooks);
			this->Controls->Add(this->buttonAdmin);
			this->Controls->Add(this->labelShowUsername);
			this->Controls->Add(this->buttonInformation);
			this->Controls->Add(this->labelAvailability);
			this->Controls->Add(this->labelPages);
			this->Controls->Add(this->labelGenre);
			this->Controls->Add(this->labelAuthor);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->buttonSignOut);
			this->Controls->Add(this->buttonSearchBook);
			this->Controls->Add(this->textBoxSearchBook);
			this->Controls->Add(this->buttonSignIn);
			this->Controls->Add(this->labelSignUp);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->LabelPassword);
			this->Controls->Add(this->LabelUsername);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->Text = L"Library";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("This programm will help you with finding some books in our library. Enjoy it :)", " Information");

	}
	private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
		std::string line;

		listBoxBooks->Items->Clear();

		std::ifstream books;
		books.open("books.txt");//Open file with user's data

		int count = 0;

		while (std::getline(books, line)) {
			String^ Line = gcnew String(line.c_str());

			//Wtite in checkedListBox1
			listBoxBooks->Items->Insert(count, Line);

			count = count + 1;
		}

		books.close();//Close file with user's data
	}
	private: System::Void LabelUsername_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	//--------------------------------------Open registration window----------------------------------------
	private: System::Void labelSignUp_Click(System::Object^  sender, System::EventArgs^  e) {
		Reg^ reg = gcnew Reg();
		reg->Show();
	}

	//------------------------------------------------Login--------------------------------------------------
	private: System::Void buttonSignIn_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ login;
		String^ password;
		std::string slogin, spassword;

		//Get user entered data
		login = textBoxUsername->Text;
		password = textBoxPassword->Text;

		//Convert System::string to std::string
		std::string Login = msclr::interop::marshal_as<std::string>(login);
		std::string Password = msclr::interop::marshal_as<std::string>(password);

		//Open file with user data
		std::ifstream user;
		user.open("user.txt", std::ios_base::in);

		//Search for data in file
		bool correct = false;

		while (user >> slogin >> spassword) {
			if (Login == slogin && Password == spassword) {
				buttonSignIn->Enabled = false; //Disable button "Sign In"
				buttonSignOut->Enabled = true; //Enable button "Sign out"
				buttonInformation->Enabled = true; //Enable button "Information"
				buttonSearchBook->Enabled = true; //Enable button "Search book"
				textBoxSearchBook->Enabled = true; //Enable textbox "Search book"
				labelSignUp->Enabled = false; //Disable lable "Sign Up"

				textBoxUsername->Enabled = false; //Disable textBox "Useranme"
				textBoxPassword->Enabled = false; //Disable textBox "Password"
				textBoxUsername->Text = ""; //Clear login
				textBoxPassword->Text = ""; //Clear password

				labelShowUsername->Text = login; //Write username

				//Admin check
				if (Login == "Admin") {
					buttonAdmin->Enabled = true;
					buttonAdmin->Visible = true;
				}

				correct = true;
			}
			if (correct) break;
		}
	}

	//------------------------------------Sign out-----------------------------------------------------
	private: System::Void buttonSignOut_Click(System::Object^  sender, System::EventArgs^  e) {
		buttonSignIn->Enabled = true; //Enable button "Sign In"
		buttonSignOut->Enabled = false; //Disable button "Sign out"
		labelSignUp->Enabled = true; //Anable label "Sign Up"
		buttonAdmin->Enabled = false; //Disable botton "Admin"
		buttonAdmin->Visible = false; //Disable visibility button "Admin"
		buttonInformation->Enabled = false; //Disable button "Information"
		buttonSearchBook->Enabled = false; //Disable button "Search book"
		textBoxSearchBook->Enabled = false; //Disable textbox "Search book"

		textBoxUsername->Enabled = true; //Enable textBox "Useranme"
		textBoxPassword->Enabled = true; //Enable textBox "Password"

		labelShowUsername->Text = ""; //Write username
	}
	
	//Button Admin
	private: System::Void buttonAdmin_Click(System::Object^  sender, System::EventArgs^  e) {
		Admin^ admin = gcnew Admin();
		admin->Show();
	}
};
}
