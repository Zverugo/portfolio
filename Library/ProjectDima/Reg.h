#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace ProjectDima {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Reg
	/// </summary>
	public ref class Reg : public System::Windows::Forms::Form
	{
	public:
		Reg(void)
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
		~Reg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonSignUp;
	private: System::Windows::Forms::Label^  labelUsername;
	private: System::Windows::Forms::Label^  labelPass;
	private: System::Windows::Forms::Label^  labelConfirmPass;

	protected:




	private: System::Windows::Forms::TextBox^  textBoxName;

	private: System::Windows::Forms::TextBox^  textBoxPass;

	private: System::Windows::Forms::TextBox^  textBoxConfirmPass;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Reg::typeid));
			this->buttonSignUp = (gcnew System::Windows::Forms::Button());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelPass = (gcnew System::Windows::Forms::Label());
			this->labelConfirmPass = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->textBoxConfirmPass = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonSignUp
			// 
			this->buttonSignUp->Location = System::Drawing::Point(75, 241);
			this->buttonSignUp->Name = L"buttonSignUp";
			this->buttonSignUp->Size = System::Drawing::Size(75, 23);
			this->buttonSignUp->TabIndex = 0;
			this->buttonSignUp->Text = L"Sign up";
			this->buttonSignUp->UseVisualStyleBackColor = true;
			this->buttonSignUp->Click += gcnew System::EventHandler(this, &Reg::buttonSignUp_Click);
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(84, 30);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(55, 13);
			this->labelUsername->TabIndex = 1;
			this->labelUsername->Text = L"Username";
			// 
			// labelPass
			// 
			this->labelPass->AutoSize = true;
			this->labelPass->Location = System::Drawing::Point(84, 93);
			this->labelPass->Name = L"labelPass";
			this->labelPass->Size = System::Drawing::Size(53, 13);
			this->labelPass->TabIndex = 2;
			this->labelPass->Text = L"Password";
			// 
			// labelConfirmPass
			// 
			this->labelConfirmPass->AutoSize = true;
			this->labelConfirmPass->Location = System::Drawing::Point(72, 156);
			this->labelConfirmPass->Name = L"labelConfirmPass";
			this->labelConfirmPass->Size = System::Drawing::Size(90, 13);
			this->labelConfirmPass->TabIndex = 3;
			this->labelConfirmPass->Text = L"Confirm password";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(65, 57);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 20);
			this->textBoxName->TabIndex = 4;
			// 
			// textBoxPass
			// 
			this->textBoxPass->Location = System::Drawing::Point(65, 118);
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->Size = System::Drawing::Size(100, 20);
			this->textBoxPass->TabIndex = 5;
			// 
			// textBoxConfirmPass
			// 
			this->textBoxConfirmPass->Location = System::Drawing::Point(65, 186);
			this->textBoxConfirmPass->Name = L"textBoxConfirmPass";
			this->textBoxConfirmPass->Size = System::Drawing::Size(100, 20);
			this->textBoxConfirmPass->TabIndex = 6;
			// 
			// Reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(229, 273);
			this->Controls->Add(this->textBoxConfirmPass);
			this->Controls->Add(this->textBoxPass);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelConfirmPass);
			this->Controls->Add(this->labelPass);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->buttonSignUp);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Reg";
			this->Text = L"Reg";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSignUp_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ login;
		String^ password;
		std::string slogin, spassword;

		//Get user entered data
		login = textBoxName->Text;
		password = textBoxPass->Text;

		//Convert System::string to std::string
		std::string Login = msclr::interop::marshal_as<std::string>(login);
		std::string Password = msclr::interop::marshal_as<std::string>(password);

		//Open users data file
		std::ifstream user;
		user.open("user.txt", std::ios_base::in);

		//Chek for users
		bool correct = true;

		while (user >> slogin >> spassword) {
			if (Login == slogin) {
				MessageBox::Show(L"This username is alreay taken!");

				//Clear data in textBox
				textBoxName->Text = "";
				textBoxPass->Text = "";
				textBoxConfirmPass->Text = "";

				correct = false;

				break;
			}
		}

		//Sign up
		if (correct == true) {
			if (textBoxPass->Text == textBoxConfirmPass->Text) {
				std::fstream fout("user.txt", std::ios::app);//Open file with user data
				fout << Login << " " << Password << std::endl;//Save user's data
				MessageBox::Show(L"You are registread!");
				Close();//Close registration window
			}
			else MessageBox::Show(L"Passwords are not the same!");
		}
	}
};
}
