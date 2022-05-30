#pragma once
#include<msclr/marshal_cppstd.h>
#include<fstream>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateTaxForm
	/// </summary>
	public ref class UpdateTaxForm : public System::Windows::Forms::Form
	{
	public:
		UpdateTaxForm(void)
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
		~UpdateTaxForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the new value of tax : ";
			this->label1->Click += gcnew System::EventHandler(this, &UpdateTaxForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(47, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Select the customer type ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(339, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(339, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"DOMESTIC";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateTaxForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(498, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"COMMERCIAL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UpdateTaxForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(514, 251);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"FINISH";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UpdateTaxForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(51, 251);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UpdateTaxForm::button4_Click);
			// 
			// UpdateTaxForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 303);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UpdateTaxForm";
			this->Text = L"UpdateTaxForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Tax Updated successfully");
	this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream read;
	read.open("size.txt");
	int size;
	read >> size;
	read.close();
	std::ifstream fin;
	std::ofstream fout;
	std::string array[100], array1[100], array3[100];
	std ::string array2[100];
	std::ifstream idread;
	std::string wastee;
	std::string commmmma;
	std::string tt[10];
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
		idread >> tt[p]; // usertype
		idread >> commmmma;
		idread >> wastee; // metretypee
		idread >> commmmma;
		idread >> wastee; // datee
		idread >> commmmma;
		idread >> wastee;// reg
		idread >> commmmma;
		idread >> wastee; // peak
	}
	idread.close();
	fin.open("TariffTaxInfo.txt");
	fout.open("taxnew.txt");
	
	std::string phase_type;
	std::string comma;
	int j = 0;
	String^ tax = textBox1->Text;
	std::string n;
	msclr::interop::marshal_context context;
	/*code to convert handle string password to simple*/
	n = context.marshal_as<std::string>(tax);
	
	for (int i = 0; i < size; i++)
	{
		fin >> phase_type;
		fout << phase_type << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array[j];
		fout << array[j] << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array1[j];
		fout << array1[j] << " ";
		fin >> comma;
		fout << comma << " ";
		if (tt[j]=="domestic")
		{
			fin >> array2[j];
			array2[j] = n;
			fout << array2[j] << " ";
		}
		else
		{
			fin >> array2[j];
			fout << array2[j] << " ";
		}
		fin >> comma;
		fout << comma << " ";
		fin >> array3[j];
		fout << array3[j] << " ";
		fout << "\n";
		j++;
	}
	fin.close();
	fout.close();
	fin.open("taxnew.txt");
	fout.open("TariffTaxInfo.txt");
	for (int i = 0; i <size; i++)
	{
		fin >> phase_type;
		fout << phase_type << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array[j];
		fout << array[j] << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array1[j];
		fout << array1[j] << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array2[j];
		fout << array2[j] << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array3[j];
		fout << array3[j] << " ";
		fout <<"\n";
		j++;
	}
	fout.close();
	fin.close();
	MessageBox::Show("Customer Selected ");

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	std::ifstream read;
	read.open("size.txt");
	int size;
	read >> size;
	read.close();
	std::ifstream fin;
	std::ofstream fout;
	std::string array[100], array1[100], array3[100];
	std::string array2[100];
	std::ifstream idread;
	std::string wastee;
	std::string commmmma;
	std::string tt[10];
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
		idread >> tt[p]; // usertype
		idread >> commmmma;
		idread >> wastee; // metretypee
		idread >> commmmma;
		idread >> wastee; // datee
		idread >> commmmma;
		idread >> wastee;// reg
		idread >> commmmma;
		idread >> wastee; // peak
	}
	idread.close();
	fin.open("TariffTaxInfo.txt");
	fout.open("taxnew.txt");

	std::string phase_type;
	std::string comma;
	int j = 0;
	String^ tax = textBox1->Text;
	std::string n;
	msclr::interop::marshal_context context;
	/*code to convert handle string password to simple*/
	n = context.marshal_as<std::string>(tax);

	for (int i = 0; i < size; i++)
	{
		fin >> phase_type;
		fout << phase_type << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array[j];
		fout << array[j] << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array1[j];
		fout << array1[j] << " ";
		fin >> comma;
		fout << comma << " ";
		if (tt[j]=="commercial")
		{
			fin >> array2[j];
			array2[j] = n;
			fout << array2[j] << " ";
		}
		else
		{
			fin >> array2[j];
			fout << array2[j] << " ";
		}
		fin >> comma;
		fout << comma << " ";
		fin >> array3[j];
		fout << array3[j] << " ";
		fout << "\n";
		j++;
	}
	fin.close();
	fout.close();
	fin.open("taxnew.txt");
	fout.open("TariffTaxInfo.txt");
	for (int i = 0; i < size; i++)
	{
		fin >> phase_type;
		fout << phase_type << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array[j];
		fout << array[j] << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array1[j];
		fout << array1[j] << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array2[j];
		fout << array2[j] << " ";
		fin >> comma;
		fout << comma << " ";
		fin >> array3[j];
		fout << array3[j] << " ";
		fout << "\n";
		j++;
	}
	fout.close();
	fin.close();
	MessageBox::Show("Customer Selected ");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
