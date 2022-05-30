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
	/// Summary for viewbill
	/// </summary>
	public ref class viewbill : public System::Windows::Forms::Form
	{
	public:
		viewbill(void)
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
		~viewbill()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the customer Id :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(50, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter the CNIC number :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(50, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter the meter type : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(50, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(309, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Enter the current meter reading : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(467, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(467, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(467, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(467, 204);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(198, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &viewbill::textBox4_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(590, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"FINISH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &viewbill::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(54, 268);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &viewbill::button2_Click);
			// 
			// viewbill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 324);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"viewbill";
			this->Text = L"viewbill";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream read;
	read.open("size.txt");
	int size;
	read >> size;
	read.close();
	std::ifstream fin;
	std::string waste;
	std:: string iddd;
	std::string duedate;
    std:: string name;
	std::string phoneno;
	std::string address;
	std::string cniccc;
	std::string typeee;
	std::string meterread;
	std::string Id;
	std::string customertype;
	std::string CNIC;
	std::string metertype;
	std::string meterreading;
	String^ iD = textBox1->Text;
	String^ cNic = textBox2->Text;
	String^ tyPe = textBox3->Text;
	String^ ReAd = textBox4->Text;
	std::string IDDD;
	msclr::interop::marshal_context context;
	/*code to convert handle string id  to simple*/
	IDDD = context.marshal_as<std::string>(iD);

	std::string user;
	
	/*code to convert handle string cnic to simple*/
	user = context.marshal_as<std::string>(cNic);

	std::string t;
	/*code to convert handle string password to simple*/
	t= context.marshal_as<std::string>(tyPe);

	std::string m;
	/*code to convert handle string password to simple*/
	m = context.marshal_as<std::string>(ReAd);

	char coma;
	int count = 0;
	int checker = 1;
	fin.open("CustomerInfo.txt");
	{
		for (int i = 0; i < size; i++)
		{
			fin >> iddd;
			fin >> coma;
			fin >> cniccc;
			fin >> coma;
			fin >> waste;
			fin >> coma;
			fin >> waste;
			fin >> coma;
			fin >> waste;
			fin >> coma;
			fin >> waste;
			fin >> coma;
			fin >> typeee;
			fin >> coma;
			fin >> waste;
			fin >> coma;
			fin >> meterread;
			fin >> coma;
			fin >> waste;
			if (IDDD == iddd && user == cniccc && meterread == m && t == typeee)
			{
				count++;
				break;
			}
			checker++;
		}
		fin.close();
		if (count == 0)
		{
			MessageBox::Show("User not found");
			this->Close();
		}
		else
		{
			fin.open("CustomerInfo.txt");
			{
				for (int i = 0; i < checker; i++)
				{
					fin >> iddd;
					fin >> coma;
					fin >> cniccc;
					fin >> coma;
					fin >> name;
					fin >> coma;
					fin >> address;
					fin >> coma;
					fin >> phoneno;
					fin >> coma;
					fin >> customertype;
					fin >> coma;
					fin >> typeee;
					fin >> coma;
					fin >> duedate;
					fin >> coma;
					fin >> meterread;
					fin >> coma;
					fin >> waste;
				}
			}
			String^ NAME = gcnew String(name.c_str());
			String^ ADD = gcnew String(address.c_str());
			String^ PN = gcnew String(phoneno.c_str());
			String^ CT = gcnew String(customertype.c_str());
			String^ DD = gcnew String(duedate.c_str());
			fin.close();
			std::string coe;
		    std::string tax;
			std::string fixedcharges;
			std::string totalamount;
			fin.open("billinginfo.txt");
			{
				for (int i = 0; i < checker; i++)
				{
					fin >> waste;
					fin >> coma;
					fin >> waste;
					fin >> coma;
					fin >> waste;
					fin >> coma;
					fin >> waste;
					fin >> coma;
					fin >> waste;
					fin >> coma;
					fin >> coe;
					fin >> coma;
					fin >> tax;
					fin >> coma;
					fin >> fixedcharges;
					fin >> coma;
					fin >> totalamount;
					fin >> coma;
					fin >> waste;
					fin >> coma;
					fin >> waste;
				}
				fin.close();
				String^ COE = gcnew String(coe.c_str());
				String^ TAX = gcnew String(tax.c_str());
				String^ FC = gcnew String(fixedcharges.c_str());
				String^ total = gcnew String(totalamount.c_str());

				MessageBox::Show("The details of the customer are : " + "\n Id : " + iD + "\nCnic : " + cNic + "\nName : " + NAME + "\nAddress : " + ADD + "\nPhoneNo : " + PN + "\nCustomerType : " + CT + "\nMeter type : " + tyPe + "\nDueDate : " + DD + "\nMeter Reading : " + ReAd + "\nCost Of Electricty : " + COE + "\nTax : " + TAX + "\nFixed Charges : " + FC + "\nTotal Amount : " + total);
				this->Close();


			}
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
