#pragma once
#include "Books.h"
#include "Libraries.h"
#include "Users.h"

namespace ProjectDima {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonBooks;
	private: System::Windows::Forms::Button^  buttonLibraries;
	private: System::Windows::Forms::Button^  buttonUsers;
	private: System::Windows::Forms::Button^  buttonExit;


	protected:

	protected:

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
			this->buttonBooks = (gcnew System::Windows::Forms::Button());
			this->buttonLibraries = (gcnew System::Windows::Forms::Button());
			this->buttonUsers = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonBooks
			// 
			this->buttonBooks->Location = System::Drawing::Point(160, 77);
			this->buttonBooks->Name = L"buttonBooks";
			this->buttonBooks->Size = System::Drawing::Size(109, 42);
			this->buttonBooks->TabIndex = 0;
			this->buttonBooks->Text = L"Books";
			this->buttonBooks->UseVisualStyleBackColor = true;
			this->buttonBooks->Click += gcnew System::EventHandler(this, &Admin::buttonBooks_Click);
			// 
			// buttonLibraries
			// 
			this->buttonLibraries->Location = System::Drawing::Point(160, 150);
			this->buttonLibraries->Name = L"buttonLibraries";
			this->buttonLibraries->Size = System::Drawing::Size(109, 42);
			this->buttonLibraries->TabIndex = 1;
			this->buttonLibraries->Text = L"Libraries";
			this->buttonLibraries->UseVisualStyleBackColor = true;
			this->buttonLibraries->Click += gcnew System::EventHandler(this, &Admin::buttonLibraries_Click);
			// 
			// buttonUsers
			// 
			this->buttonUsers->Location = System::Drawing::Point(160, 223);
			this->buttonUsers->Name = L"buttonUsers";
			this->buttonUsers->Size = System::Drawing::Size(109, 42);
			this->buttonUsers->TabIndex = 2;
			this->buttonUsers->Text = L"Users";
			this->buttonUsers->UseVisualStyleBackColor = true;
			this->buttonUsers->Click += gcnew System::EventHandler(this, &Admin::buttonUsers_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(160, 373);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(109, 33);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Admin::buttonExit_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 480);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonUsers);
			this->Controls->Add(this->buttonLibraries);
			this->Controls->Add(this->buttonBooks);
			this->Name = L"Admin";
			this->Text = L"Admin Menu";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonBooks_Click(System::Object^  sender, System::EventArgs^  e) {
		Books^ books = gcnew Books();
		books->Show();
	}
	private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close(); //Close window
	}
	private: System::Void buttonLibraries_Click(System::Object^  sender, System::EventArgs^  e) {
		Libraries^ libraries = gcnew Libraries();
		libraries->Show();
	}
	private: System::Void buttonUsers_Click(System::Object^  sender, System::EventArgs^  e) {
		Users^ users = gcnew Users();
		users->Show();
	}
};
}
