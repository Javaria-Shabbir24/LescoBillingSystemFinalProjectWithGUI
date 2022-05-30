#pragma once
#include"UpdateTaxForm.h"
#include"UpdateRegularUnitsPrice.h"
#include"UpdatePeakPrice.h"
#include"FixedCharges.h"
#include"ViewExpiries.h"
#include"PaidAndUnpaidBills.h"
#include"ChargeBill.h"
#include"viewbill.h"
#include"AddCustomer.h"
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginEmployeesForm
	/// </summary>
	public ref class LoginEmployeesForm : public System::Windows::Forms::Form
	{
	public:
		LoginEmployeesForm(void)
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
		~LoginEmployeesForm()
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

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;

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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(174, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(359, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select the activity you want to perform ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(32, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"VIEW BILL";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(32, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CHARGE BILL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(32, 138);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"UPDATE TAX";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(32, 188);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(219, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"UPDATE REGULAR UNITS PRICE";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(32, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(219, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"UPDATE PEAK UNITS PRICE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button5_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(446, 54);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(217, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"ADD CUSTOMER";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(446, 94);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(217, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"VIEW PAID AND UNPAID BILLS";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(446, 138);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(217, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"VIEW EXPIRED CARDS";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(446, 188);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(217, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"UPDATE FIXED CHARGES";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(599, 267);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 33);
			this->button11->TabIndex = 11;
			this->button11->Text = L"EXIT";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &LoginEmployeesForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(49, 18);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(10, 8);
			this->button12->TabIndex = 12;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// LoginEmployeesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 321);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"LoginEmployeesForm";
			this->Text = L"LoginEmployeesForm";
			this->Load += gcnew System::EventHandler(this, &LoginEmployeesForm::LoginEmployeesForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginEmployeesForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewExpiries v1;
		v1.ShowDialog();
		this->Close();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateTaxForm u1;
	u1.ShowDialog();
	this->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateRegularUnitsPrice u1;
	u1.ShowDialog();
	this->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdatePeakPrice p1;
	p1.ShowDialog();
	this->Close();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	FixedCharges f1;
	f1.ShowDialog();
	this->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	PaidAndUnpaidBills b1;
	b1.ShowDialog();
	this->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ChargeBill cb;
	cb.ShowDialog();
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	viewbill v1;
	v1.ShowDialog();
	this->Close();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	AddCustomer c1;
	c1.ShowDialog();
	this->Close();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
