#pragma once
#include<fstream>
namespace GUI {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(222, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(303, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"GENERATE BILLS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(631, 247);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"FINISH";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(58, 247);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 299);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("New Bills Generated Successfully");
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
		idread.open("size.txt");
		int size;
		idread >> size;
		idread.close();
		idread.open("billinginfo.txt");
		for (int p = 0; p < size; p++)
		{
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
		}
		idread.close();
		int* prevregularunits = new int[10];
		int* prevpeakunits = new int[10];
		std::string wastee;
		//.........................................................
		idread.open("CustomerInfo.txt");
		for (int p = 0; p < size; p++)
		{
			idread >> wastee; // ID
			idread >> commmmma;
			idread >> wastee; //cnic
			idread >> commmmma;
			idread >> wastee; // name
			idread >> commmmma;
			idread >> wastee; // address
			idread >> commmmma;
			idread >> wastee; // phone
			idread >> commmmma;
			idread >> wastee; // usertype
			idread >> commmmma;
			idread >> wastee; // metretypee
			idread >> commmmma;
			idread >> wastee; // datee
			idread >> commmmma;
			idread >> prevregularunits[p]; // reg
			idread >> commmmma;
			idread >> prevpeakunits[p]; // peak
		}
		idread.close();
		std::string phase;
		std::ifstream fin;
		int peakunitprice[10], regularunitprice[10], tax1[10], fixedcharge[10];
		fin.open("TariffTaxInfo.txt");
		for (int i = 0; i < size; i++)
		{
			fin >> phase;
			fin >> commmmma;
			fin >> regularunitprice[i];
			fin >> commmmma;
			fin >> peakunitprice[i];
			fin >> commmmma;
			fin >> tax1[i];
			fin >> commmmma;
			fin >> fixedcharge[i];
		}

		for (int p = 0; p < size; p++) {
			coe[p] = ((curreentt[p] - prevregularunits[p]) * regularunitprice[p]) + ((peeeaaakk[p] - prevpeakunits[p]) * peakunitprice[p]);
			tax[p] = (coe[p]) + (coe[p] * tax1[p]) / 100;
			total[p] = coe[p] + tax[p] + fixedcharge[p];
		}

		fin.close();
		//.........................................................

		idwrite.open("billinginfo.txt");
		for (int p = 0; p < size; p++)
		{
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
			idwrite << status[p] << "\n"; // status
		}
		idwrite.close();
		MessageBox::Show("Activity Done");
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
