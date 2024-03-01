#pragma once

#include <cmath>

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		double result = 0.0;
		int oper = -1;
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:






	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ multi;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ zero;

	private: System::Windows::Forms::Button^ point;

	private: System::Windows::Forms::Button^ equal;

	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ three;


	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ six;



	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ nine;




	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ power;




	private: System::Windows::Forms::Button^ root;
	private: System::Windows::Forms::Label^ label1;






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
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multi = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->power = (gcnew System::Windows::Forms::Button());
			this->root = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->plus->Location = System::Drawing::Point(259, 306);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(71, 67);
			this->plus->TabIndex = 4;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->minus->Location = System::Drawing::Point(259, 233);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(71, 67);
			this->minus->TabIndex = 5;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// multi
			// 
			this->multi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->multi->Location = System::Drawing::Point(259, 160);
			this->multi->Name = L"multi";
			this->multi->Size = System::Drawing::Size(71, 67);
			this->multi->TabIndex = 6;
			this->multi->Text = L"*";
			this->multi->UseVisualStyleBackColor = true;
			this->multi->Click += gcnew System::EventHandler(this, &MyForm::multi_Click);
			// 
			// divide
			// 
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->divide->Location = System::Drawing::Point(259, 87);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(71, 67);
			this->divide->TabIndex = 7;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::divide_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::IndianRed;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->clear->Location = System::Drawing::Point(28, 87);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(71, 67);
			this->clear->TabIndex = 8;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->zero->Location = System::Drawing::Point(28, 378);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(148, 67);
			this->zero->TabIndex = 9;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// point
			// 
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->point->Location = System::Drawing::Point(182, 378);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(71, 67);
			this->point->TabIndex = 10;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = true;
			this->point->Click += gcnew System::EventHandler(this, &MyForm::point_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::SystemColors::HotTrack;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->equal->Location = System::Drawing::Point(259, 379);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(71, 67);
			this->equal->TabIndex = 11;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// one
			// 
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->one->Location = System::Drawing::Point(28, 306);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(71, 67);
			this->one->TabIndex = 15;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// three
			// 
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->three->Location = System::Drawing::Point(182, 305);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(71, 67);
			this->three->TabIndex = 14;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// two
			// 
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->two->Location = System::Drawing::Point(105, 305);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(71, 67);
			this->two->TabIndex = 13;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// four
			// 
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->four->Location = System::Drawing::Point(28, 233);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(71, 67);
			this->four->TabIndex = 18;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::four_Click);
			// 
			// six
			// 
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->six->Location = System::Drawing::Point(182, 232);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(71, 67);
			this->six->TabIndex = 17;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::six_Click);
			// 
			// five
			// 
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->five->Location = System::Drawing::Point(105, 232);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(71, 67);
			this->five->TabIndex = 16;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::five_Click);
			// 
			// seven
			// 
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->seven->Location = System::Drawing::Point(28, 160);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(71, 67);
			this->seven->TabIndex = 21;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::seven_Click);
			// 
			// nine
			// 
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->nine->Location = System::Drawing::Point(182, 159);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(71, 67);
			this->nine->TabIndex = 20;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// eight
			// 
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->eight->Location = System::Drawing::Point(105, 159);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(71, 67);
			this->eight->TabIndex = 19;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::eight_Click);
			// 
			// power
			// 
			this->power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->power->Location = System::Drawing::Point(182, 85);
			this->power->Name = L"power";
			this->power->Size = System::Drawing::Size(71, 67);
			this->power->TabIndex = 24;
			this->power->Text = L"^";
			this->power->UseVisualStyleBackColor = true;
			this->power->Click += gcnew System::EventHandler(this, &MyForm::power_Click);
			// 
			// root
			// 
			this->root->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->root->Location = System::Drawing::Point(105, 85);
			this->root->Name = L"root";
			this->root->Size = System::Drawing::Size(71, 67);
			this->root->TabIndex = 22;
			this->root->Text = L"√";
			this->root->UseVisualStyleBackColor = true;
			this->root->Click += gcnew System::EventHandler(this, &MyForm::root_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label1->Location = System::Drawing::Point(31, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 48);
			this->label1->TabIndex = 25;
			this->label1->Text = L"0";
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(363, 468);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->power);
			this->Controls->Add(this->root);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->four);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->one);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->point);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multi);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Name = L"MyForm";
			this->Text = L"Claculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	oper = 1;
	result = System::Convert::ToDouble(label1->Text);
	label1->Text = "";
}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	oper = 2;
	result = System::Convert::ToDouble(label1->Text);
	label1->Text = "";
}
private: System::Void multi_Click(System::Object^ sender, System::EventArgs^ e) {
	oper = 3;
	result = System::Convert::ToDouble(label1->Text);
	label1->Text = "";
}
private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
	oper = 4;
	result = System::Convert::ToDouble(label1->Text);
	label1->Text = "";
}
private: System::Void root_Click(System::Object^ sender, System::EventArgs^ e) {
	oper = 5;
	result = System::Convert::ToDouble(label1->Text);
	label1->Text = "";
}
private: System::Void power_Click(System::Object^ sender, System::EventArgs^ e) {
	oper = 6;
	result = System::Convert::ToDouble(label1->Text);
	label1->Text = "";
}
private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (oper)
	{
	case 1:
		result += System::Convert::ToDouble(label1->Text);
		label1->Text = System::Convert::ToString(result);
		oper = 0;
		break;

	case 2:
		result -= System::Convert::ToDouble(label1->Text);
		label1->Text = System::Convert::ToString(result);
		oper = 0;
		break;

	case 3:
		result *= System::Convert::ToDouble(label1->Text);
		label1->Text = System::Convert::ToString(result);
		oper = 0;
		break;

	case 4:
		result /= System::Convert::ToDouble(label1->Text);
		label1->Text = System::Convert::ToString(result);
		oper = 0;
		break;

	case 5:
		result = pow(result, 1.0/System::Convert::ToDouble(label1->Text));
		label1->Text = System::Convert::ToString(result);
		oper = 0;
		break;

	case 6:
		result = pow(result, System::Convert::ToDouble(label1->Text));
		label1->Text = System::Convert::ToString(result);
		oper = 0;
		break;
	default:
		break;
	}
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "0";
	result = 0;
	oper = -1;
}
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "0";
}
private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "1";
}
private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "2";
}
private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "3";
}
private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "4";
}
private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "5";
}
private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "6";
}
private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "7";
}
private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "8";
}
private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0" || oper == 0)
		label1->Text = "";
	label1->Text = label1->Text + "9";
}
private: System::Void point_Click(System::Object^ sender, System::EventArgs^ e) {
	if (oper == 0)
		label1->Text = "0";
	label1->Text = label1->Text + ".";
}
};
}
