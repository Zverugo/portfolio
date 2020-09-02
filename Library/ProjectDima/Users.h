#pragma once
#include <string>
#include <fstream>

namespace ProjectDima {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Users
	/// </summary>
	public ref class Users : public System::Windows::Forms::Form
	{
	public:
		Users(void)
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
		~Users()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBoxUsers;
	protected:
	private: System::Windows::Forms::Label^  labelUsers;
	private: System::Windows::Forms::ListBox^  listBoxBookStatus;

	private: System::Windows::Forms::Label^  labelBooks;
	private: System::Windows::Forms::ListBox^  listBoxBookName;
	private: System::Windows::Forms::Label^  labelBookName;


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
			this->listBoxUsers = (gcnew System::Windows::Forms::ListBox());
			this->labelUsers = (gcnew System::Windows::Forms::Label());
			this->listBoxBookStatus = (gcnew System::Windows::Forms::ListBox());
			this->labelBooks = (gcnew System::Windows::Forms::Label());
			this->listBoxBookName = (gcnew System::Windows::Forms::ListBox());
			this->labelBookName = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBoxUsers
			// 
			this->listBoxUsers->FormattingEnabled = true;
			this->listBoxUsers->Location = System::Drawing::Point(40, 66);
			this->listBoxUsers->Name = L"listBoxUsers";
			this->listBoxUsers->Size = System::Drawing::Size(146, 316);
			this->listBoxUsers->TabIndex = 0;
			// 
			// labelUsers
			// 
			this->labelUsers->AutoSize = true;
			this->labelUsers->Location = System::Drawing::Point(40, 47);
			this->labelUsers->Name = L"labelUsers";
			this->labelUsers->Size = System::Drawing::Size(34, 13);
			this->labelUsers->TabIndex = 1;
			this->labelUsers->Text = L"Users";
			// 
			// listBoxBookStatus
			// 
			this->listBoxBookStatus->FormattingEnabled = true;
			this->listBoxBookStatus->Location = System::Drawing::Point(220, 66);
			this->listBoxBookStatus->Name = L"listBoxBookStatus";
			this->listBoxBookStatus->Size = System::Drawing::Size(157, 316);
			this->listBoxBookStatus->TabIndex = 2;
			// 
			// labelBooks
			// 
			this->labelBooks->AutoSize = true;
			this->labelBooks->Location = System::Drawing::Point(220, 47);
			this->labelBooks->Name = L"labelBooks";
			this->labelBooks->Size = System::Drawing::Size(73, 13);
			this->labelBooks->TabIndex = 3;
			this->labelBooks->Text = L"Books taken\?";
			// 
			// listBoxBookName
			// 
			this->listBoxBookName->FormattingEnabled = true;
			this->listBoxBookName->Location = System::Drawing::Point(415, 66);
			this->listBoxBookName->Name = L"listBoxBookName";
			this->listBoxBookName->Size = System::Drawing::Size(136, 316);
			this->listBoxBookName->TabIndex = 4;
			// 
			// labelBookName
			// 
			this->labelBookName->AutoSize = true;
			this->labelBookName->Location = System::Drawing::Point(415, 47);
			this->labelBookName->Name = L"labelBookName";
			this->labelBookName->Size = System::Drawing::Size(66, 13);
			this->labelBookName->TabIndex = 5;
			this->labelBookName->Text = L"Books name";
			// 
			// Users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 463);
			this->Controls->Add(this->labelBookName);
			this->Controls->Add(this->listBoxBookName);
			this->Controls->Add(this->labelBooks);
			this->Controls->Add(this->listBoxBookStatus);
			this->Controls->Add(this->labelUsers);
			this->Controls->Add(this->listBoxUsers);
			this->Name = L"Users";
			this->Text = L"Users";
			this->Load += gcnew System::EventHandler(this, &Users::Users_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Users_Load(System::Object^  sender, System::EventArgs^  e) {
		std::string line;

		listBoxUsers->Items->Clear();

		std::ifstream users;
		users.open("user.txt");//Open file with user's data

		int count = 0;

		while (std::getline(users, line)) {
			String^ Line = gcnew String(line.c_str());

			//Wtite in checkedListBox1
			listBoxUsers->Items->Insert(count, Line);

			count = count + 1;
		}
		users.close();//Close file with user's data
	}
};
}
