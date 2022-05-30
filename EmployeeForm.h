#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include"LoginEmployeesForm.h"
#include"changepassword.h"
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeeForm
	/// </summary>
	public ref class EmployeeForm : public System::Windows::Forms::Form
	{
	public:
		EmployeeForm(void)
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
		~EmployeeForm()
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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(270, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter your username :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(270, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter your password  : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(546, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EmployeeForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(546, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(585, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EmployeeForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(443, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"change password";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EmployeeForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(274, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EmployeeForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(245, 169);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// EmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 283);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EmployeeForm";
			this->Text = L"EmployeeForm";
			this->Load += gcnew System::EventHandler(this, &EmployeeForm::EmployeeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		std::ifstream fin;
		int f = 0;
		std::string check;
		String^ name = textBox1->Text;
		String^ pass = textBox2->Text;
		int count = 0;
		std::string word;
		std::string word2;
		std::string n;
		std::string p;
		msclr::interop::marshal_context context;
		/*code to convert handle string password to simple*/
		n = context.marshal_as<std::string>(name);
		p = context.marshal_as<std::string>(pass);
		fin.open("EmployeesData.txt");
		int x = 0;
		/* check if the username and passwords are valid or not */
		while (!fin.eof() && f < 5)
		{
			fin >> word;
			fin >> check;
			fin >> word2;
			if (n == word && p == word2)
			{
				x++;
				MessageBox::Show("Valid entries");
				LoginEmployeesForm l1;
				l1.ShowDialog();
				this->Hide();
				break;
			}
			f++;
		}
		if (x == 0)
		{
			MessageBox::Show("Invalid entries");
		}
		fin.close();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream fin;
	int f = 0;
	std::string check;
	String^ name = textBox1->Text;
	String^ pass = textBox2->Text;
	int count = 0;
	std::string word;
	std::string word2;
	std::string n;
	std::string p;
	msclr::interop::marshal_context context;
	/*code to convert handle string password to simple*/
	n = context.marshal_as<std::string>(name);
	p = context.marshal_as<std::string>(pass);
	fin.open("EmployeesData.txt");
	int x = 0;
	/* check if the username and passwords are valid or not */
	while (!fin.eof() && f < 5)
	{
		fin >> word;
		fin >> check;
		fin >> word2;
		if (n == word && p == word2)
		{
			x++;
			MessageBox::Show("Valid entries");
			changepassword c1;
			c1.ShowDialog();
			this->Hide();
			break;
		}
		f++;
	}
	if (x == 0)
	{
		MessageBox::Show("Invalid entries");
	}
	fin.close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
