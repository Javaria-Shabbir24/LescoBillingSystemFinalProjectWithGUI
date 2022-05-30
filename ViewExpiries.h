#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<fstream>
#include<string>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewExpiries
	/// </summary>
	public ref class ViewExpiries : public System::Windows::Forms::Form
	{
	public:
		ViewExpiries(void)
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
		~ViewExpiries()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(408, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Click The Desired Button To Get The Record";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(25, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"USER 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ViewExpiries::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(572, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"FINISH";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ViewExpiries::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(205, 184);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"USER 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ViewExpiries::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(383, 184);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"USER 3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ViewExpiries::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(572, 184);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"USER 4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ViewExpiries::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(572, 37);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"DETAIL";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ViewExpiries::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(514, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Click the detail button to view the cards close to expiry :  ";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(25, 258);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(113, 23);
			this->button8->TabIndex = 10;
			this->button8->Text = L"EXIT";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ViewExpiries::button8_Click);
			// 
			// ViewExpiries
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 304);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"ViewExpiries";
			this->Text = L"ViewExpiries";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std ::ifstream fin;
		std::string cnic[5];
		std::string comma;
		time_t time1 = std::time(0);   // get time now
		tm* now = std::localtime(&time1);
		int year = (now->tm_year + 1900);
		int month = (now->tm_mon + 1);
		int day = now->tm_mday;
		fin.open("NADRADB.txt");
		std::string connection_date[5];
		int Expiry_date;
		int Expiry_month;
		int Expiry_year;
		char slash;
		bool found = 0;
		int x = 0;
		int y = 0;
		for (int i = 0; i < 1; i++)
		{
			fin >> cnic[i];
			fin >> comma;
			fin >> connection_date[i];
			fin >> comma;
			fin >> Expiry_date;
			fin >> slash;
			fin >> Expiry_month;
			fin >> slash;
			fin >> Expiry_year;
			if (year == Expiry_year)
			{
				if (month == Expiry_month)
				{
					found = 1;
				}
				else if (Expiry_month - month == 1)
				{
					if (Expiry_date > day)
					{
						found = 0;
					}
				}
			}
			if (found == 1)
			{
				String^ aa = gcnew String(cnic[i].c_str());
				MessageBox::Show(aa + " has expired ");
			}
			else
			{
				String^ aa = gcnew String(cnic[i].c_str());
				MessageBox::Show(aa + " has not expired ");
			}
		}

		fin.close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream fin;
		std::string cnic[5];
		std::string comma;
		time_t time1 = std::time(0);   // get time now
		tm* now = std::localtime(&time1);
		int year = (now->tm_year + 1900);
		int month = (now->tm_mon + 1);
		int day = now->tm_mday;
		fin.open("NADRADB.txt");
		std::string connection_date[5];
		int Expiry_date;
		int Expiry_month;
		int Expiry_year;
		char slash;
		bool found = 0;
		int x = 0;
		int y = 0;
		for (int i = 0; i < 4; i++)
		{
			fin >> cnic[i];
			fin >> comma;
			fin >> connection_date[i];
			fin >> comma;
			fin >> Expiry_date;
			fin >> slash;
			fin >> Expiry_month;
			fin >> slash;
			fin >> Expiry_year;
			if (i == 1)
			{
				if (year == Expiry_year)
				{
					if (month == Expiry_month)
					{
						found = 1;
					}
					else if (Expiry_month - month == 1)
					{
						if (Expiry_date > day)
						{
							found = 0;
						}
					}
				}
				if (found == 1)
				{
					String^ aa = gcnew String(cnic[i].c_str());
					MessageBox::Show(aa + " has expired ");
				}
				else
				{
					String^ aa = gcnew String(cnic[i].c_str());
					MessageBox::Show(aa + " has not expired ");
				}
			}
			
		}

		fin.close();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream fin;
	std::string cnic[5];
	std::string comma;
	time_t time1 = std::time(0);   // get time now
	tm* now = std::localtime(&time1);
	int year = (now->tm_year + 1900);
	int month = (now->tm_mon + 1);
	int day = now->tm_mday;
	fin.open("NADRADB.txt");
	std::string connection_date[5];
	int Expiry_date;
	int Expiry_month;
	int Expiry_year;
	char slash;
	bool found = 0;
	int x = 0;
	int y = 0;
	for (int i = 0; i < 4; i++)
	{
		fin >> cnic[i];
		fin >> comma;
		fin >> connection_date[i];
		fin >> comma;
		fin >> Expiry_date;
		fin >> slash;
		fin >> Expiry_month;
		fin >> slash;
		fin >> Expiry_year;
		if (i == 2)
		{
			if (year == Expiry_year)
			{
				if (month == Expiry_month)
				{
					found = 1;
				}
				else if (Expiry_month - month == 1)
				{
					if (Expiry_date > day)
					{
						found = 0;
					}
				}
			}
			if (found == 1)
			{
				String^ aa = gcnew String(cnic[i].c_str());
				MessageBox::Show(aa + " has expired ");
			}
			else
			{
				String^ aa = gcnew String(cnic[i].c_str());
				MessageBox::Show(aa + " has not expired ");
			}
		}
		
	}

	fin.close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream fin;
	std::string cnic[5];
	std::string comma;
	time_t time1 = std::time(0);   // get time now
	tm* now = std::localtime(&time1);
	int year = (now->tm_year + 1900);
	int month = (now->tm_mon + 1);
	int day = now->tm_mday;
	fin.open("NADRADB.txt");
	std::string connection_date[5];
	int Expiry_date;
	int Expiry_month;
	int Expiry_year;
	char slash;
	bool found = 0;
	int x = 0;
	int y = 0;
	for (int i = 0; i < 4; i++)
	{
		fin >> cnic[i];
		fin >> comma;
		fin >> connection_date[i];
		fin >> comma;
		fin >> Expiry_date;
		fin >> slash;
		fin >> Expiry_month;
		fin >> slash;
		fin >> Expiry_year;
		if (i == 3)
		{
			if (year == Expiry_year)
			{
				if (month == Expiry_month)
				{
					found = 1;
				}
				else if (Expiry_month - month == 1)
				{
					if (Expiry_date > day)
					{
						found = 0;
					}
				}
			}
			if (found == 1)
			{
				String^ aa = gcnew String(cnic[i].c_str());
				MessageBox::Show(aa + " has expired ");
			}
			else
			{
				String^ aa = gcnew String(cnic[i].c_str());
				MessageBox::Show(aa + " has not expired ");
			}
		}
		
	}

	fin.close();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream fin;
	std::string cnic[5];
	std::string comma;
	std::ifstream read;
	int size;
	read.open("size.txt");
	read >> size;
	read.close();
	time_t time1 = std::time(0);   // get time now
	tm* now = std::localtime(&time1);
	int year = (now->tm_year + 1900);
	int month = (now->tm_mon + 1);
	int day = now->tm_mday;
	fin.open("NADRADB.txt");
	std::string connection_date[5];
	int Expiry_date;
	int Expiry_month;
	int Expiry_year;
	char slash;
	bool found = 0;
	int x = 0;
	int y = 0;
	int count = 0;
	int count1 = 0;
	for (int i = 0; i < size; i++)
	{
		fin >> cnic[i];
		fin >> comma;
		fin >> connection_date[i];
		fin >> comma;
		fin >> Expiry_date;
		fin >> slash;
		fin >> Expiry_month;
		fin >> slash;
		fin >> Expiry_year;
		if (year == Expiry_year)
		{
			if (month == Expiry_month)
			{
				found = 1;
			}
			else if (Expiry_month - month == 1)
			{
				if (Expiry_date > day)
				{
					found = 0;
				}
			}
		}
		if (found == 1)
		{
			count++;
		}
		else
		{
			count1++;
		}
	}
	std::string a = std::to_string(count);
	String^ aa = gcnew String(a.c_str());
	std::string b = std::to_string(count1);
	String^ bb = gcnew String(b.c_str());
	MessageBox::Show("The Number of expired cards are : " + aa + "\n" + "The number of unexpired cards are :" + bb);
	fin.close();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
