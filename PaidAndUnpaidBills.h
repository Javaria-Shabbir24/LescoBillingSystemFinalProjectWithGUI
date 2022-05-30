#pragma once
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
	/// Summary for PaidAndUnpaidBills
	/// </summary>
	public ref class PaidAndUnpaidBills : public System::Windows::Forms::Form
	{
	public:
		PaidAndUnpaidBills(void)
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
		~PaidAndUnpaidBills()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(478, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Click The Desired Button To Get The Detailed Result";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(43, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"CNIC 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PaidAndUnpaidBills::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(212, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CNIC 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PaidAndUnpaidBills::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(363, 190);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"CNIC 3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PaidAndUnpaidBills::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(533, 190);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"CNIC 4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PaidAndUnpaidBills::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(426, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Click to get the number of paid and unpaid bills";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(533, 46);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"RESULT";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &PaidAndUnpaidBills::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(533, 256);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"FINISH";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &PaidAndUnpaidBills::button6_Click);
			// 
			// PaidAndUnpaidBills
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 300);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"PaidAndUnpaidBills";
			this->Text = L"PaidAndUnpaidBills";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream read;
	read.open("size.txt");
	int size;
	read >> size;
	read.close();
	int* iddd = new int[10];
	std::ifstream idread;
	std::ofstream idwrite;
	char commmmma;
	int* curreentt = new int[10];
	int* peeeaaakk = new int[10];
	std::string* month = new std::string[10];
	int* coe = new int[10];
	int* tax = new int[10];
	int* fixed = new int[10];
	int* total = new int[10];
	std::string* date = new std::string[10];
	std::string* paymentdate = new std::string[10];
	std::string* date2 = new std::string[10];
	std::string* status = new std::string[10];
	int count = 0;
	int count1 = 0;
	idread.open("billinginfo.txt");
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
		if (status[p] == "Paid")
		{
			count++;
		}
		else if (status[p] == "Unpaid")
		{
			count1++;
		}
	}
	std::string a = std::to_string(count);
	String^ aa = gcnew String(a.c_str());
	std::string b = std::to_string(count1);
	String^ bb = gcnew String(b.c_str());
	MessageBox::Show("Number of Paid Bills are : " + aa + "\n"+" Number of Unpaid Bills are : " + bb);
	idread.close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int* iddd = new int[4];
	std::ifstream idread;
	std::ofstream idwrite;
	char commmmma;
	int* curreentt = new int[4];
	int* peeeaaakk = new int[4];
	std::string* month = new std::string[4];
	int* coe = new int[4];
	int* tax = new int[4];
	int* fixed = new int[4];
	std::string * total = new std::string[4];
	std::string* date = new std::string[4];
	std::string* paymentdate = new std::string[4];
	std::string* date2 = new std::string[4];
	std::string* status = new std::string[4];
	int count = 0;
	int count1 = 0;
	idread.open("billinginfo.txt");
	for (int p = 0; p < 4; p++) {
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
		if (p == 0)
		{
			if (status[p] == "Paid")
			{
				String^ aa = gcnew String(status[p].c_str());
				MessageBox::Show("Bill Status : " + aa + "\n " + "It has paid the bill");
			}
			else if (status[p] == "Unpaid")
			{
				String^ aa = gcnew String(status[p].c_str());
				String^ ab = gcnew String(total[p].c_str());
				MessageBox::Show("Bill Status is " + aa + "\n" + " It has not paid the bill of Rs. " + ab);
			}
		}
		
	}
	idread.close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int* iddd = new int[4];
	std::ifstream idread;
	std::ofstream idwrite;
	char commmmma;
	int* curreentt = new int[4];
	int* peeeaaakk = new int[4];
	std::string* month = new std::string[4];
	int* coe = new int[4];
	int* tax = new int[4];
	int* fixed = new int[4];
	std::string* total = new std::string[4];
	std::string* date = new std::string[4];
	std::string* paymentdate = new std::string[4];
	std::string* date2 = new std::string[4];
	std::string* status = new std::string[4];
	int count = 0;
	int count1 = 0;
	idread.open("billinginfo.txt");
	for (int p = 0; p < 4; p++) {
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
		if (p == 1)
		{
			if (status[p] == "Paid")
			{
				String^ aa = gcnew String(status[p].c_str());
				MessageBox::Show("Bill Status : " + aa + "\n " + "It has paid the bill");
			}
			else if (status[p] == "Unpaid")
			{
				String^ aa = gcnew String(status[p].c_str());
				String^ ab = gcnew String(total[p].c_str());
				MessageBox::Show("Bill Status is " + aa + "\n" + " It has not paid the bill of Rs. " + ab);
			}
		}

	}
	idread.close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int* iddd = new int[4];
	std::ifstream idread;
	std::ofstream idwrite;
	char commmmma;
	int* curreentt = new int[4];
	int* peeeaaakk = new int[4];
	std::string* month = new std::string[4];
	int* coe = new int[4];
	int* tax = new int[4];
	int* fixed = new int[4];
	std::string* total = new std::string[4];
	std::string* date = new std::string[4];
	std::string* paymentdate = new std::string[4];
	std::string* date2 = new std::string[4];
	std::string* status = new std::string[4];
	int count = 0;
	int count1 = 0;
	idread.open("billinginfo.txt");
	for (int p = 0; p < 4; p++) {
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
		if (p == 2)
		{
			if (status[p] == "Paid")
			{
				String^ aa = gcnew String(status[p].c_str());
				MessageBox::Show("Bill Status : " + aa + "\n " + "It has paid the bill");
			}
			else if (status[p] == "Unpaid")
			{
				String^ aa = gcnew String(status[p].c_str());
				String^ ab = gcnew String(total[p].c_str());
				MessageBox::Show("Bill Status is " + aa + "\n" + " It has not paid the bill of Rs. " + ab);
			}
		}

	}
	idread.close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int* iddd = new int[4];
	std::ifstream idread;
	std::ofstream idwrite;
	char commmmma;
	int* curreentt = new int[4];
	int* peeeaaakk = new int[4];
	std::string* month = new std::string[4];
	int* coe = new int[4];
	int* tax = new int[4];
	int* fixed = new int[4];
	std::string* total = new std::string[4];
	std::string* date = new std::string[4];
	std::string* paymentdate = new std::string[4];
	std::string* date2 = new std::string[4];
	std::string* status = new std::string[4];
	int count = 0;
	int count1 = 0;
	idread.open("billinginfo.txt");
	for (int p = 0; p < 4; p++) {
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
		if (p == 3)
		{
			if (status[p] == "Paid")
			{
				String^ aa = gcnew String(status[p].c_str());
				MessageBox::Show("Bill Status : "+aa +"\n "+ "It has paid the bill");
			}
			else if (status[p] == "Unpaid")
			{
				String^ aa = gcnew String(status[p].c_str());
				String^ ab = gcnew String(total[p].c_str());
				MessageBox::Show("Bill Status is "+aa + "\n"+ " It has not paid the bill of Rs. " + ab);
			}
		}

	}
	idread.close();
}
};
}

