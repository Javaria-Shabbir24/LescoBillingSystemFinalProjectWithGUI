#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for paybill
	/// </summary>
	public ref class paybill : public System::Windows::Forms::Form
	{
	public:
		paybill(void)
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
		~paybill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter your ID : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(310, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter your Credit Card Number : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(58, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(333, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Are you sure to make this payment \?";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(433, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(433, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(433, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"YES";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &paybill::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(531, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"NO";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &paybill::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(531, 226);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &paybill::button3_Click);
			// 
			// paybill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 261);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"paybill";
			this->Text = L"paybill";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("payment unsuccessful :(");
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream read;
	read.open("size.txt");
	int size;
	read >> size;
	read.close();

	std:: string* iddd = new std::string[10];
	std::ifstream idread;
	char commmmma;
	int* curreentt = new int[10];
	int* peeeaaakk = new int[10];
	std::string* month = new std::string[10];
	int* coe = new int[10];
	int* tax = new int[10];
	int* fixed = new int[10];
	int* total = new int[10];
	std::string* date = new std::string[10];
	std::string* date2 = new std::string[10];
	std::string* status = new std::string[10];
	String^ idd = textBox1->Text;
	std::string n;
	msclr::interop::marshal_context context;
	/*code to convert handle string password to simple*/
	n = context.marshal_as<std::string>(idd);
	String^ credit = textBox2->Text;
	std::string m;
	/*code to convert handle string password to simple*/
	m = context.marshal_as<std::string>(credit);
	std::ofstream idwrite;
	int count = 0;
	idread.open("billinginfo.txt");
	idwrite.open("billingnew.txt");
	for (int p = 0; p < size; p++) {
		idread >> iddd[p]; // ID
		idread >> commmmma;
		idread >> month[p]; //month
		idread >> commmmma;
		idread >> curreentt[p]; // reg
		idread >> commmmma;
		idread >> peeeaaakk[p]; // peak
		idread >> commmmma;
		idread >> date[p]; // date
		idread >> commmmma;
		idread >> coe[p]; // coe
		idread >> commmmma;
		idread >> tax[p]; // tax
		idread >> commmmma;
		idread >> fixed[p]; // fixed
		idread >> commmmma;
		idread >> total[p]; // total
		idread >> commmmma;
		idread >> date2[p]; // datte
		idread >> commmmma;
		idread >> status[p]; // status
		if (iddd[p] == n)
		{
			peeeaaakk[p] = 0;
			curreentt[p] = 0;
			coe[p] = 0;
			total[p] = 0;
			status[p] = "Paid";
			tax[p] = 0;
			count++;

		}
		idwrite << iddd[p];
		idwrite << " , ";
		idwrite << month[p]; //month
		idwrite << " , ";
		idwrite << curreentt[p]; // reg
		idwrite << " , ";
		idwrite << peeeaaakk[p]; // peak
		idwrite << " , ";
		idwrite << date[p]; // date
		idwrite << " , ";
		idwrite << coe[p]; // coe
		idwrite << " , ";
		idwrite << tax[p]; // tax
		idwrite << " , ";
		idwrite << fixed[p]; // fixed
		idwrite << " , ";
		idwrite << total[p]; // total
		idwrite << " , ";
		idwrite << date2[p]; // datte
		idwrite << " , ";
		idwrite << status[p]; // status
		idwrite << "\n";
	}
	if (count == 0||m.size()!=16)
	{
		MessageBox::Show("Invalid Entries");
		this->Close();
	}
	else
	{
		MessageBox::Show("Payment successful");
	}
	idread.close();
	idwrite.close();
	idread.open("billingnew.txt");
	idwrite.open("billinginfo.txt");
	for (int p = 0; p < size; p++) {
		idread >> iddd[p]; // ID
		idread >> commmmma;
		idread >> month[p]; //month
		idread >> commmmma;
		idread >> curreentt[p]; // reg
		idread >> commmmma;
		idread >> peeeaaakk[p]; // peak
		idread >> commmmma;
		idread >> date[p]; // date
		idread >> commmmma;
		idread >> coe[p]; // coe
		idread >> commmmma;
		idread >> tax[p]; // tax
		idread >> commmmma;
		idread >> fixed[p]; // fixed
		idread >> commmmma;
		idread >> total[p]; // total
		idread >> commmmma;
		idread >> date2[p]; // datte
		idread >> commmmma;
		idread >> status[p]; // status
		/*****/
		idwrite << iddd[p];
		idwrite << " , ";
		idwrite << month[p]; //month
		idwrite << " , ";
		idwrite << curreentt[p]; // reg
		idwrite << " , ";
		idwrite << peeeaaakk[p]; // peak
		idwrite << " , ";
		idwrite << date[p]; // date
		idwrite << " , ";
		idwrite << coe[p]; // coe
		idwrite << " , ";
		idwrite << tax[p]; // tax
		idwrite << " , ";
		idwrite << fixed[p]; // fixed
		idwrite << " , ";
		idwrite << total[p]; // total
		idwrite << " , ";
		idwrite << date2[p]; // datte
		idwrite << " , ";
		idwrite << status[p]; // status
		idwrite << "\n";

	}
	idread.close();
	idwrite.close();
	this->Close();
}
};
}
