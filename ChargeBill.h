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
	/// Summary for ChargeBill
	/// </summary>
	public ref class ChargeBill : public System::Windows::Forms::Form
	{
	public:
		ChargeBill(void)
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
		~ChargeBill()
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
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the current meter reading regular : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(357, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the current meter reading peak : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter the Id of the customer : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(478, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(478, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(478, 180);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(125, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(564, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"FINISH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChargeBill::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(47, 270);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ChargeBill::button2_Click);
			// 
			// ChargeBill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 321);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ChargeBill";
			this->Text = L"ChargeBill";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream read;
		int size;
		read.open("size.txt");
		read >> size;
		read.close();
		std::string iddd[10];
		std::string si = "-44";
		std::ifstream idread;
		std::ofstream idwrite;
		char commmmma;
		std::string* curreentt = new std::string[10];
		std::string* peeeaaakk = new std::string[10];
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
		 
		String^ r = textBox2->Text;
		std::string rr;
		/*code to convert handle string password to simple*/
		rr = context.marshal_as<std::string>(r);

		String^ pq = textBox3->Text;
		std::string pp;
		/*code to convert handle string password to simple*/
		pp = context.marshal_as<std::string>(pq);

			idread.open("billinginfo.txt");
			for (int p = 0; p < size; p++) {
				idread >> iddd[p];
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
			bool flag = false; int indexxx = -33;
			for (int ii = 0; ii < size; ii++) {
				if (n == iddd[ii]) {
					si = iddd[ii];
					flag = true;
					indexxx = ii;
				}
			}
			if (si == "-44") {
				MessageBox::Show("User not found");
			}
			else
			{
				MessageBox::Show("Bill has been charged Successfully");
			}
			if (flag) {
				curreentt[indexxx] = rr;
				peeeaaakk[indexxx] = pp;
			}
			idread.close();
		idwrite.open("billinginfo.txt");
		for (int p = 0; p <size; p++) {
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
		idwrite.close();
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
