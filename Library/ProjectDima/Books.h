#pragma once
#include "fstream"
#include <msclr\marshal_cppstd.h>
#include <String>
#include <sstream>

namespace ProjectDima {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Books
	/// </summary>
	public ref class Books : public System::Windows::Forms::Form
	{
	public:
		Books(void)
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
		~Books()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelAddNewBook;
	protected:
	private: System::Windows::Forms::Label^  labelTitle;
	private: System::Windows::Forms::TextBox^  textBoxTitle;
	private: System::Windows::Forms::Label^  labelAuthor;
	private: System::Windows::Forms::TextBox^  textBoxAuthor;
	private: System::Windows::Forms::Label^  labelGenre;
	private: System::Windows::Forms::TextBox^  textBoxGenre;
	private: System::Windows::Forms::Label^  labelPages;
	private: System::Windows::Forms::TextBox^  textBoxPages;
	private: System::Windows::Forms::Label^  labelAvailability;
	private: System::Windows::Forms::TextBox^  textBoxAvailability;
	private: System::Windows::Forms::Button^  buttonAddBooksOK;
	private: System::Windows::Forms::Label^  labelFixBook;
	private: System::Windows::Forms::Label^  labelChooseBook;
	private: System::Windows::Forms::ComboBox^  comboBoxChooseBook;
	private: System::Windows::Forms::Label^  labelChooseChanges;
	private: System::Windows::Forms::ComboBox^  comboBoxChooseChanges;

	private: System::Windows::Forms::Label^  labelChanges;
	private: System::Windows::Forms::TextBox^  textBoxChanges;
	private: System::Windows::Forms::Button^  buttonFixBookOK;
	private: System::Windows::Forms::Label^  labelDeleteBook;
	private: System::Windows::Forms::Label^  labelChooseBookDel;
	private: System::Windows::Forms::ComboBox^  comboBoxChooseBookDel;
	private: System::Windows::Forms::Button^  buttonDelBookOK;



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
			this->labelAddNewBook = (gcnew System::Windows::Forms::Label());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->textBoxTitle = (gcnew System::Windows::Forms::TextBox());
			this->labelAuthor = (gcnew System::Windows::Forms::Label());
			this->textBoxAuthor = (gcnew System::Windows::Forms::TextBox());
			this->labelGenre = (gcnew System::Windows::Forms::Label());
			this->textBoxGenre = (gcnew System::Windows::Forms::TextBox());
			this->labelPages = (gcnew System::Windows::Forms::Label());
			this->textBoxPages = (gcnew System::Windows::Forms::TextBox());
			this->labelAvailability = (gcnew System::Windows::Forms::Label());
			this->textBoxAvailability = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddBooksOK = (gcnew System::Windows::Forms::Button());
			this->labelFixBook = (gcnew System::Windows::Forms::Label());
			this->labelChooseBook = (gcnew System::Windows::Forms::Label());
			this->comboBoxChooseBook = (gcnew System::Windows::Forms::ComboBox());
			this->labelChooseChanges = (gcnew System::Windows::Forms::Label());
			this->comboBoxChooseChanges = (gcnew System::Windows::Forms::ComboBox());
			this->labelChanges = (gcnew System::Windows::Forms::Label());
			this->textBoxChanges = (gcnew System::Windows::Forms::TextBox());
			this->buttonFixBookOK = (gcnew System::Windows::Forms::Button());
			this->labelDeleteBook = (gcnew System::Windows::Forms::Label());
			this->labelChooseBookDel = (gcnew System::Windows::Forms::Label());
			this->comboBoxChooseBookDel = (gcnew System::Windows::Forms::ComboBox());
			this->buttonDelBookOK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelAddNewBook
			// 
			this->labelAddNewBook->AutoSize = true;
			this->labelAddNewBook->Location = System::Drawing::Point(85, 46);
			this->labelAddNewBook->Name = L"labelAddNewBook";
			this->labelAddNewBook->Size = System::Drawing::Size(76, 13);
			this->labelAddNewBook->TabIndex = 0;
			this->labelAddNewBook->Text = L"Add new book";
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Location = System::Drawing::Point(122, 92);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(27, 13);
			this->labelTitle->TabIndex = 1;
			this->labelTitle->Text = L"Title";
			// 
			// textBoxTitle
			// 
			this->textBoxTitle->Location = System::Drawing::Point(88, 108);
			this->textBoxTitle->Name = L"textBoxTitle";
			this->textBoxTitle->Size = System::Drawing::Size(100, 20);
			this->textBoxTitle->TabIndex = 2;
			// 
			// labelAuthor
			// 
			this->labelAuthor->AutoSize = true;
			this->labelAuthor->Location = System::Drawing::Point(118, 150);
			this->labelAuthor->Name = L"labelAuthor";
			this->labelAuthor->Size = System::Drawing::Size(38, 13);
			this->labelAuthor->TabIndex = 3;
			this->labelAuthor->Text = L"Author";
			// 
			// textBoxAuthor
			// 
			this->textBoxAuthor->Location = System::Drawing::Point(88, 185);
			this->textBoxAuthor->Name = L"textBoxAuthor";
			this->textBoxAuthor->Size = System::Drawing::Size(100, 20);
			this->textBoxAuthor->TabIndex = 4;
			// 
			// labelGenre
			// 
			this->labelGenre->AutoSize = true;
			this->labelGenre->Location = System::Drawing::Point(121, 234);
			this->labelGenre->Name = L"labelGenre";
			this->labelGenre->Size = System::Drawing::Size(36, 13);
			this->labelGenre->TabIndex = 5;
			this->labelGenre->Text = L"Genre";
			// 
			// textBoxGenre
			// 
			this->textBoxGenre->Location = System::Drawing::Point(88, 263);
			this->textBoxGenre->Name = L"textBoxGenre";
			this->textBoxGenre->Size = System::Drawing::Size(100, 20);
			this->textBoxGenre->TabIndex = 6;
			// 
			// labelPages
			// 
			this->labelPages->AutoSize = true;
			this->labelPages->Location = System::Drawing::Point(121, 307);
			this->labelPages->Name = L"labelPages";
			this->labelPages->Size = System::Drawing::Size(37, 13);
			this->labelPages->TabIndex = 7;
			this->labelPages->Text = L"Pages";
			// 
			// textBoxPages
			// 
			this->textBoxPages->Location = System::Drawing::Point(88, 337);
			this->textBoxPages->Name = L"textBoxPages";
			this->textBoxPages->Size = System::Drawing::Size(100, 20);
			this->textBoxPages->TabIndex = 8;
			// 
			// labelAvailability
			// 
			this->labelAvailability->AutoSize = true;
			this->labelAvailability->Location = System::Drawing::Point(105, 374);
			this->labelAvailability->Name = L"labelAvailability";
			this->labelAvailability->Size = System::Drawing::Size(56, 13);
			this->labelAvailability->TabIndex = 9;
			this->labelAvailability->Text = L"Availability";
			// 
			// textBoxAvailability
			// 
			this->textBoxAvailability->Location = System::Drawing::Point(88, 407);
			this->textBoxAvailability->Name = L"textBoxAvailability";
			this->textBoxAvailability->Size = System::Drawing::Size(100, 20);
			this->textBoxAvailability->TabIndex = 10;
			// 
			// buttonAddBooksOK
			// 
			this->buttonAddBooksOK->Location = System::Drawing::Point(98, 464);
			this->buttonAddBooksOK->Name = L"buttonAddBooksOK";
			this->buttonAddBooksOK->Size = System::Drawing::Size(75, 23);
			this->buttonAddBooksOK->TabIndex = 11;
			this->buttonAddBooksOK->Text = L"OK";
			this->buttonAddBooksOK->UseVisualStyleBackColor = true;
			this->buttonAddBooksOK->Click += gcnew System::EventHandler(this, &Books::buttonAddBooksOK_Click);
			// 
			// labelFixBook
			// 
			this->labelFixBook->AutoSize = true;
			this->labelFixBook->Location = System::Drawing::Point(334, 46);
			this->labelFixBook->Name = L"labelFixBook";
			this->labelFixBook->Size = System::Drawing::Size(47, 13);
			this->labelFixBook->TabIndex = 12;
			this->labelFixBook->Text = L"Fix book";
			// 
			// labelChooseBook
			// 
			this->labelChooseBook->AutoSize = true;
			this->labelChooseBook->Location = System::Drawing::Point(337, 78);
			this->labelChooseBook->Name = L"labelChooseBook";
			this->labelChooseBook->Size = System::Drawing::Size(79, 13);
			this->labelChooseBook->TabIndex = 13;
			this->labelChooseBook->Text = L"Choose a book";
			// 
			// comboBoxChooseBook
			// 
			this->comboBoxChooseBook->FormattingEnabled = true;
			this->comboBoxChooseBook->Location = System::Drawing::Point(312, 107);
			this->comboBoxChooseBook->Name = L"comboBoxChooseBook";
			this->comboBoxChooseBook->Size = System::Drawing::Size(121, 21);
			this->comboBoxChooseBook->TabIndex = 14;
			// 
			// labelChooseChanges
			// 
			this->labelChooseChanges->AutoSize = true;
			this->labelChooseChanges->Location = System::Drawing::Point(337, 167);
			this->labelChooseChanges->Name = L"labelChooseChanges";
			this->labelChooseChanges->Size = System::Drawing::Size(87, 13);
			this->labelChooseChanges->TabIndex = 15;
			this->labelChooseChanges->Text = L"Choose changes";
			// 
			// comboBoxChooseChanges
			// 
			this->comboBoxChooseChanges->FormattingEnabled = true;
			this->comboBoxChooseChanges->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Title", L"Author", L"Genre", L"Pages",
					L"Availability"
			});
			this->comboBoxChooseChanges->Location = System::Drawing::Point(312, 207);
			this->comboBoxChooseChanges->Name = L"comboBoxChooseChanges";
			this->comboBoxChooseChanges->Size = System::Drawing::Size(121, 21);
			this->comboBoxChooseChanges->TabIndex = 16;
			// 
			// labelChanges
			// 
			this->labelChanges->AutoSize = true;
			this->labelChanges->Location = System::Drawing::Point(346, 263);
			this->labelChanges->Name = L"labelChanges";
			this->labelChanges->Size = System::Drawing::Size(49, 13);
			this->labelChanges->TabIndex = 17;
			this->labelChanges->Text = L"Changes";
			// 
			// textBoxChanges
			// 
			this->textBoxChanges->Location = System::Drawing::Point(312, 290);
			this->textBoxChanges->Name = L"textBoxChanges";
			this->textBoxChanges->Size = System::Drawing::Size(121, 20);
			this->textBoxChanges->TabIndex = 18;
			// 
			// buttonFixBookOK
			// 
			this->buttonFixBookOK->Location = System::Drawing::Point(337, 363);
			this->buttonFixBookOK->Name = L"buttonFixBookOK";
			this->buttonFixBookOK->Size = System::Drawing::Size(75, 23);
			this->buttonFixBookOK->TabIndex = 19;
			this->buttonFixBookOK->Text = L"OK";
			this->buttonFixBookOK->UseVisualStyleBackColor = true;
			this->buttonFixBookOK->Click += gcnew System::EventHandler(this, &Books::buttonFixBookOK_Click);
			// 
			// labelDeleteBook
			// 
			this->labelDeleteBook->AutoSize = true;
			this->labelDeleteBook->Location = System::Drawing::Point(686, 46);
			this->labelDeleteBook->Name = L"labelDeleteBook";
			this->labelDeleteBook->Size = System::Drawing::Size(65, 13);
			this->labelDeleteBook->TabIndex = 20;
			this->labelDeleteBook->Text = L"Delete book";
			// 
			// labelChooseBookDel
			// 
			this->labelChooseBookDel->AutoSize = true;
			this->labelChooseBookDel->Location = System::Drawing::Point(689, 114);
			this->labelChooseBookDel->Name = L"labelChooseBookDel";
			this->labelChooseBookDel->Size = System::Drawing::Size(70, 13);
			this->labelChooseBookDel->TabIndex = 21;
			this->labelChooseBookDel->Text = L"Choose book";
			// 
			// comboBoxChooseBookDel
			// 
			this->comboBoxChooseBookDel->FormattingEnabled = true;
			this->comboBoxChooseBookDel->Location = System::Drawing::Point(670, 158);
			this->comboBoxChooseBookDel->Name = L"comboBoxChooseBookDel";
			this->comboBoxChooseBookDel->Size = System::Drawing::Size(121, 21);
			this->comboBoxChooseBookDel->TabIndex = 22;
			// 
			// buttonDelBookOK
			// 
			this->buttonDelBookOK->Location = System::Drawing::Point(692, 252);
			this->buttonDelBookOK->Name = L"buttonDelBookOK";
			this->buttonDelBookOK->Size = System::Drawing::Size(75, 23);
			this->buttonDelBookOK->TabIndex = 23;
			this->buttonDelBookOK->Text = L"OK";
			this->buttonDelBookOK->UseVisualStyleBackColor = true;
			this->buttonDelBookOK->Click += gcnew System::EventHandler(this, &Books::buttonDelBookOK_Click);
			// 
			// Books
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(987, 572);
			this->Controls->Add(this->buttonDelBookOK);
			this->Controls->Add(this->comboBoxChooseBookDel);
			this->Controls->Add(this->labelChooseBookDel);
			this->Controls->Add(this->labelDeleteBook);
			this->Controls->Add(this->buttonFixBookOK);
			this->Controls->Add(this->textBoxChanges);
			this->Controls->Add(this->labelChanges);
			this->Controls->Add(this->comboBoxChooseChanges);
			this->Controls->Add(this->labelChooseChanges);
			this->Controls->Add(this->comboBoxChooseBook);
			this->Controls->Add(this->labelChooseBook);
			this->Controls->Add(this->labelFixBook);
			this->Controls->Add(this->buttonAddBooksOK);
			this->Controls->Add(this->textBoxAvailability);
			this->Controls->Add(this->labelAvailability);
			this->Controls->Add(this->textBoxPages);
			this->Controls->Add(this->labelPages);
			this->Controls->Add(this->textBoxGenre);
			this->Controls->Add(this->labelGenre);
			this->Controls->Add(this->textBoxAuthor);
			this->Controls->Add(this->labelAuthor);
			this->Controls->Add(this->textBoxTitle);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->labelAddNewBook);
			this->Name = L"Books";
			this->Text = L"Books";
			this->Load += gcnew System::EventHandler(this, &Books::Books_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Add book
	private: System::Void buttonAddBooksOK_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Title;
		String^ Author;
		String^ Genre;
		String^ Pages;
		String^ Availability;

		std::string sTitle, sAuthor, sGenre, sPages, sAvailability;

		//Get entered data
		Title = textBoxTitle->Text;
		Author = textBoxAuthor->Text;
		Genre = textBoxGenre->Text;
		Pages = textBoxPages->Text;
		Availability = textBoxAvailability->Text;

		//Convert System::string to std::string
		sTitle = msclr::interop::marshal_as<std::string>(Title);
		sAuthor = msclr::interop::marshal_as<std::string>(Author);
		sGenre = msclr::interop::marshal_as<std::string>(Genre);
		sPages = msclr::interop::marshal_as<std::string>(Pages);
		sAvailability = msclr::interop::marshal_as<std::string>(Availability);

		//Open file with user data
		std::fstream books;
		books.open("books.txt", std::ios_base::app);

		//Load data in file
		books << sTitle << " " << sAuthor << " " << sGenre << " " << sPages << " " << sAvailability << '\n';

		//close stream
		books.close();

		//Clear text boxes
		textBoxTitle->Text = "";
		textBoxAuthor->Text = "";
		textBoxGenre->Text = "";
		textBoxPages->Text = "";
		textBoxAvailability->Text = "";

		//Update data in comboBoxes
		Books_Load(sender, e);
	}
	
	//Fix book
	private: System::Void buttonFixBookOK_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Book;
		String^ Change;
		String^ Changes;

		Book = comboBoxChooseBook->Text;
		Change = comboBoxChooseChanges->Text;
		Changes = textBoxChanges->Text;

		std::string sBook, sChange, sChanges;
		std::string title, author, genre, pages, availability, combine;

		sBook = msclr::interop::marshal_as<std::string>(Book);
		sChange = msclr::interop::marshal_as<std::string>(Change);
		sChanges = msclr::interop::marshal_as<std::string>(Changes);

		std::fstream find;
		std::ofstream Temp;

		//Open files
		find.open("books.txt");
		Temp.open("temp.txt");

		//Change data
		while (find >> title >> author >> genre >> pages >> availability) {
			combine = title + " " + author;

			//From std::string to String^
			String^ Combine = gcnew String(combine.c_str());

			//Don't change string
			if (sBook != combine) Temp << title << " " << author << " " << genre << " " << pages << " " << availability << std::endl;

			else {
				if (MessageBox::Show(L"Change? " + Combine, "Book", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					if (sChange == "Title")Temp << sChanges << " " << author << " " << genre << " " << pages  << " " << availability << std::endl; //Change title
					if (sChange == "Author")Temp << title << " " << sChanges << " " << genre << " " << pages << " " << availability << std::endl; //Change author
					if (sChange == "Genre")Temp << title << " " << author << " " << sChanges << " " << pages << " " << availability << std::endl; //Change genre
					if (sChange == "Pages")Temp << title << " " << author << " " << genre << " " << sChanges << " " << availability << std::endl; //Change pages
					if (sChange == "Availability")Temp << title << " " << author << " " << genre << " " << pages << " " << sChanges << std::endl; //Change availability
				}
				else Temp << title << " " << author << " " << genre << " " << pages << " " << availability << std::endl;
			}
		}

		//Close files
		Temp.close();
		find.close();

		//Clear comboboxes
		comboBoxChooseBook->Text = "";
		comboBoxChooseChanges->Text = "";
		textBoxChanges->Text = "";

		//Rewrite files
		remove("books.txt");
		rename("temp.txt", "books.txt");
		MessageBox::Show(L"Book updated!");

		//Update data in comboBoxes
		Books_Load(sender, e);
	}

	//Delete book
	private: System::Void buttonDelBookOK_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Book;

		Book = comboBoxChooseBookDel->Text;

		std::string sBook;
		std::string title, author, genre, pages, availability, combine;

		sBook = msclr::interop::marshal_as<std::string>(Book);

		std::fstream find;
		std::ofstream Temp;

		//Open files
		find.open("books.txt");
		Temp.open("temp.txt");

		//Change data
		while (find >> title >> author >> genre >> pages >> availability) {
			combine = title + " " + author;

			//From std::string to String^
			String^ Combine = gcnew String(combine.c_str());

			//Don't change string
			if (sBook != combine) Temp << title << " " << author << " " << genre << " " << pages << " " << availability << std::endl;

			else {
				if (MessageBox::Show(L"Delete? " + Combine, "Book", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					Temp << ""; //Change title
				}
				else Temp << title << " " << author << " " << genre << " " << pages << " " << availability << std::endl;
			}
		}

		//Close files
		Temp.close();
		find.close();

		//Clear comboboxes
		comboBoxChooseBookDel->Text = "";

		//Rewrite files
		remove("books.txt");
		rename("temp.txt", "books.txt");
		MessageBox::Show(L"Book deleted!");

		//Update data in comboBoxes
		Books_Load(sender, e);
	}

	//Form loading
	private: System::Void Books_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ Title;
		String^ Author;
		String^ Genre;
		String^ Pages;
		String^ Availability;

		std::string sTitle, sAuthor, sGenre, sPages, sAvailability;

		int count = 0;

		comboBoxChooseBook->Items->Clear();
		comboBoxChooseBookDel->Items->Clear();

		std::ifstream books;
		books.open("books.txt");

		while (books >> sTitle >> sAuthor >> sGenre >> sPages >> sAvailability) {
			Title = gcnew String(sTitle.c_str());
			Author = gcnew String(sAuthor.c_str());
			comboBoxChooseBook->Items->Insert(count, Title + " " + Author);
			comboBoxChooseBookDel->Items->Insert(count, Title + " " + Author);
			
			count += 1;
		}

		books.close();
	}
};
}
