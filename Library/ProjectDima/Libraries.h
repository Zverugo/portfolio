#pragma once
#include <String>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace ProjectDima {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Libraries
	/// </summary>
	public ref class Libraries : public System::Windows::Forms::Form
	{
	public:
		Libraries(void)
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
		~Libraries()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBoxLibraries;
	protected:
	private: System::Windows::Forms::Label^  labelLibraries;
	private: System::Windows::Forms::TextBox^  textBoxNewInformation;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonNewInformation;

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
			this->listBoxLibraries = (gcnew System::Windows::Forms::ListBox());
			this->labelLibraries = (gcnew System::Windows::Forms::Label());
			this->textBoxNewInformation = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonNewInformation = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBoxLibraries
			// 
			this->listBoxLibraries->FormattingEnabled = true;
			this->listBoxLibraries->Location = System::Drawing::Point(83, 72);
			this->listBoxLibraries->Name = L"listBoxLibraries";
			this->listBoxLibraries->Size = System::Drawing::Size(720, 121);
			this->listBoxLibraries->TabIndex = 0;
			// 
			// labelLibraries
			// 
			this->labelLibraries->AutoSize = true;
			this->labelLibraries->Location = System::Drawing::Point(80, 39);
			this->labelLibraries->Name = L"labelLibraries";
			this->labelLibraries->Size = System::Drawing::Size(46, 13);
			this->labelLibraries->TabIndex = 1;
			this->labelLibraries->Text = L"Libraries";
			// 
			// textBoxNewInformation
			// 
			this->textBoxNewInformation->Location = System::Drawing::Point(83, 293);
			this->textBoxNewInformation->Name = L"textBoxNewInformation";
			this->textBoxNewInformation->Size = System::Drawing::Size(490, 20);
			this->textBoxNewInformation->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"New information(Select library in the table)";
			// 
			// buttonNewInformation
			// 
			this->buttonNewInformation->Location = System::Drawing::Point(498, 331);
			this->buttonNewInformation->Name = L"buttonNewInformation";
			this->buttonNewInformation->Size = System::Drawing::Size(75, 23);
			this->buttonNewInformation->TabIndex = 4;
			this->buttonNewInformation->Text = L"Change";
			this->buttonNewInformation->UseVisualStyleBackColor = true;
			this->buttonNewInformation->Click += gcnew System::EventHandler(this, &Libraries::buttonNewInformation_Click);
			// 
			// Libraries
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 519);
			this->Controls->Add(this->buttonNewInformation);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxNewInformation);
			this->Controls->Add(this->labelLibraries);
			this->Controls->Add(this->listBoxLibraries);
			this->Name = L"Libraries";
			this->Text = L"Libraries";
			this->Load += gcnew System::EventHandler(this, &Libraries::Libraries_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Chang library
	private: System::Void buttonNewInformation_Click(System::Object^  sender, System::EventArgs^  e) {
		int index = listBoxLibraries->SelectedIndex;

		//Get information about library
		listBoxLibraries->Items->RemoveAt(index);
		listBoxLibraries->Items->Insert(index, textBoxNewInformation->Text);

		std::ofstream Temp;
		Temp.open("temp.txt");

		int count = 0;

		//Change information about library
		while (count < listBoxLibraries->Items->Count) {
			listBoxLibraries->SelectedIndex = count;
			String^ Item = listBoxLibraries->GetItemText(listBoxLibraries->SelectedItem);
			std::string sItem = msclr::interop::marshal_as<std::string>(Item);
			Temp << sItem << std::endl;

			count += 1;
		}
		
		Temp.close();

		listBoxLibraries->ClearSelected();
		textBoxNewInformation->Text = "";

		remove("library.txt");
		rename("temp.txt", "library.txt");
		MessageBox::Show(L"Library changed!");
	}

	//Form loading
	private: System::Void Libraries_Load(System::Object^  sender, System::EventArgs^  e) {
		std::string line;

		listBoxLibraries->Items->Clear();

		std::ifstream library;
		library.open("library.txt");//Open file with user's data

		int count = 0;

		while (std::getline(library, line)) {
			String^ Line = gcnew String(line.c_str());

			//Wtite in checkedListBox1
			listBoxLibraries->Items->Insert(count, Line);

			count = count + 1;
		}
		library.close();//Close file with user's data
	}
};
}
