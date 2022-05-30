#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<ctime>
#include<cstdlib>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddCustomer
	/// </summary>
	public ref class AddCustomer : public System::Windows::Forms::Form
	{
	public:
		AddCustomer(void)
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
		~AddCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(643, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"FINISH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddCustomer::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter the customer ID : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter your CNIC : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(225, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(181, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter your address : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Enter your name : ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(225, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(225, 117);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 22);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Enter your phone no. : ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(225, 159);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(225, 206);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(362, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Enter your type : ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(581, 23);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(581, 69);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 13;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(581, 119);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 14;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(581, 162);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 15;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(581, 206);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(362, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(162, 22);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Enter meter type : ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(362, 117);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 22);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Enter connection date : ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(362, 159);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(189, 22);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Enter Regular Units : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(359, 203);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 22);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Enter Peak Units : ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(363, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"(domestic/commercial)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(363, 91);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"(sphase/tphase)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(363, 137);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(71, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"(dd/mm/yyyy)";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddCustomer::button2_Click);
			// 
			// AddCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 304);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"AddCustomer";
			this->Text = L"8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		std::ifstream fin;
		fin.open("size.txt");
		int size;
		fin >> size;
		fin.close();
		fin.open("NADRADB.txt");
		std::string id[10];
		std::string issuedate[10];
		std::string expirydate[10];
		msclr::interop::marshal_context context;
		/*code to convert handle string id to simple*/
		String^ ID = textBox1->Text;
		std::string n;
		n = context.marshal_as<std::string>(ID);
		String^ cn = textBox2->Text;
		std::string f;
		f = context.marshal_as<std::string>(cn);
		String^ name = textBox3->Text;
		std::string x;
		x = context.marshal_as<std::string>(name);
		String^ address = textBox4->Text;
		std::string y;
		y = context.marshal_as<std::string>(address);
		String^ phone = textBox5->Text;
		std::string ph;
		ph = context.marshal_as<std::string>(phone);
		String^ ctype = textBox6->Text;
		std::string ct;
		ct = context.marshal_as<std::string>(ctype);
		String^ ptype = textBox7->Text;
		std::string mt;
		mt = context.marshal_as<std::string>(ptype);
		String^ date = textBox8->Text;
		std::string dd;
		dd = context.marshal_as<std::string>(date);
		String^ runits = textBox9->Text;
		std::string rr;
		rr = context.marshal_as<std::string>(runits);
		String^ punits = textBox10->Text;
		std::string pk;
		pk = context.marshal_as<std::string>(punits);
		char comma;
		int count = 1;
		std::ofstream write;
		for (int i = 0; i < size; i++)
		{
			fin >> id[i];
			fin >> comma;
			fin >> issuedate[i];
			fin >> comma;
			fin >> expirydate[i];
			if (id[i] == n)
			{
				count++;
			}
		}
		if (count < 4)
		{
			/*  generate_random_id(); */
			int idddd = (rand() % 9999) + 1000;
			std::ofstream fout;
			fout.open("CustomerInfo.txt", std::ios::app);
			if (!fout)
			{
				MessageBox::Show("File Not Opened");
			}
			fout <<"\n"<< idddd << " , ";
			fout << f << " , ";
			fout << x << " , ";
			fout << y << " , ";
			fout << ph << " , ";
			fout << ct << " , ";
			fout << mt << " , ";
			fout << dd << " , ";
			fout << rr << " , ";
			fout << pk ;
			fout.close();
			std::ofstream idwrite;
			idwrite.open("billinginfo.txt", std::ios::app);
			idwrite << idddd;
			idwrite << " , ";
			idwrite << "june"; //month
			idwrite << " , ";
			idwrite << rr; // reg
			idwrite << " , ";
			idwrite << pk; // peak
			idwrite << " , ";
			idwrite << dd; // date
			idwrite << " , ";
			idwrite << 0; // coe
			idwrite << " , ";
			idwrite << 0; // tax
			idwrite << " , ";
			idwrite << 250; // fixed
			idwrite << " , ";
			idwrite << 0; // total
			idwrite << " , ";
			idwrite << "22/06/2022"; // datte
			idwrite << " , ";
			idwrite << "Unpaid"; // status
			idwrite.close();

			idwrite.open("NADRADB.txt", std::ios::app);
			idwrite <<"\n" << f << " , ";
			idwrite << dd << " , ";
			idwrite << "22/06/2022";
			idwrite.close();

			idwrite.open("TariffTaxInfo.txt", std::ios::app);
			if (mt == "sphase");
			{
				idwrite << "\n1Phase";
				idwrite << " , " << 12 << " , " << 0 << " , " << 6 << " , " << 150;
			}
		    if (mt=="tphase")
			{
				idwrite << "\n3Phase"<< " , " << 12 << " , " << 10 << " , " << 6 << " , " << 150;;
			}
			
			MessageBox::Show("Customer added successfully");
			write.open("size.txt");
			write << size + 1;
			write.close();

			

			this->Close();
		}
		else
		{
			MessageBox::Show("Already Registered 3 meters !");
			this->Close();
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
