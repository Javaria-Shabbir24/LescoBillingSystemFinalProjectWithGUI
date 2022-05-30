#pragma once
#include"fstream";
#include<msclr/marshal_cppstd.h>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for changepassword
	/// </summary>
	public ref class changepassword : public System::Windows::Forms::Form
	{
	public:
		changepassword(void)
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
		~changepassword()
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter your username again :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(251, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter your new password : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(405, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(405, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(191, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &changepassword::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(521, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"FINISH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &changepassword::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(76, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &changepassword::button2_Click);
			// 
			// changepassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 290);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"changepassword";
			this->Text = L"changepassword";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream fin;
		std::ofstream fout;
		String^ u = textBox1->Text;
		String^ pass = textBox2->Text;
		std::string n;
		std::string m;
		msclr::interop::marshal_context context;
		n = context.marshal_as<std::string>(u);
		/*code to convert handle string password to simple*/
		m = context.marshal_as<std::string>(pass);
		int j = 0;
		std::string word;
		std::string check;
		std::string word2;
		fin.open("EmployeesData.txt");
		fout.open("Employeesh.txt");
		while (j < 5)
		{
			j++;
			fin >> word;
			fout << word << " ";
			if (n != word)
			{
				fin >> check;
				fout << check;
				fin >> word2;
				fout << " " << word2;
				fout << "\n";
			}
			else if (n == word)
			{
				fin >> check;
				fout << check << " ",
				fin >> word2;
				fout << m;
				fout << "\n";
			}
		}
		fin.close();
		fout.close();
		fin.open("Employeesh.txt");
		fout.open("EmployeesData.txt");
		for (int i = 0; i < 5; i++)
		{
			fin >> word;
			fout << word;
			fin >> check;
			fout << " " << check<<" ";
			fin >> word2;
			fout << word2;
			fout << "\n";
		}
		fin.close();
		fout.close();
		MessageBox::Show("Password has been changed successfully ");
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
