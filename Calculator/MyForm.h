#pragma once

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
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ operand1;
	private: System::Windows::Forms::TextBox^ operand2;
	protected:

	protected:

	private: System::Windows::Forms::Label^ operation;
	private: System::Windows::Forms::Label^ answer;



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
			this->operand1 = (gcnew System::Windows::Forms::TextBox());
			this->operand2 = (gcnew System::Windows::Forms::TextBox());
			this->operation = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::Label());
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
			this->SuspendLayout();
			// 
			// operand1
			// 
			this->operand1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->operand1->Location = System::Drawing::Point(22, 38);
			this->operand1->Name = L"operand1";
			this->operand1->Size = System::Drawing::Size(145, 45);
			this->operand1->TabIndex = 0;
			// 
			// operand2
			// 
			this->operand2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->operand2->Location = System::Drawing::Point(259, 38);
			this->operand2->Name = L"operand2";
			this->operand2->Size = System::Drawing::Size(145, 45);
			this->operand2->TabIndex = 1;
			// 
			// operation
			// 
			this->operation->AutoSize = true;
			this->operation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->operation->Location = System::Drawing::Point(179, 41);
			this->operation->Name = L"operation";
			this->operation->Size = System::Drawing::Size(0, 39);
			this->operation->TabIndex = 2;
			// 
			// answer
			// 
			this->answer->AutoSize = true;
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->answer->Location = System::Drawing::Point(21, 124);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(0, 39);
			this->answer->TabIndex = 3;
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->plus->Location = System::Drawing::Point(259, 416);
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
			this->minus->Location = System::Drawing::Point(259, 343);
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
			this->multi->Location = System::Drawing::Point(259, 270);
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
			this->divide->Location = System::Drawing::Point(259, 197);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(71, 67);
			this->divide->TabIndex = 7;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::divide_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->clear->Location = System::Drawing::Point(28, 197);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(71, 67);
			this->clear->TabIndex = 8;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->zero->Location = System::Drawing::Point(28, 488);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(148, 67);
			this->zero->TabIndex = 9;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			// 
			// point
			// 
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->point->Location = System::Drawing::Point(182, 488);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(71, 67);
			this->point->TabIndex = 10;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = true;
			// 
			// equal
			// 
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->equal->Location = System::Drawing::Point(259, 489);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(71, 67);
			this->equal->TabIndex = 11;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = true;
			// 
			// one
			// 
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->one->Location = System::Drawing::Point(28, 416);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(71, 67);
			this->one->TabIndex = 15;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			// 
			// three
			// 
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->three->Location = System::Drawing::Point(182, 415);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(71, 67);
			this->three->TabIndex = 14;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			// 
			// two
			// 
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->two->Location = System::Drawing::Point(105, 415);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(71, 67);
			this->two->TabIndex = 13;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			// 
			// four
			// 
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->four->Location = System::Drawing::Point(28, 343);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(71, 67);
			this->four->TabIndex = 18;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			// 
			// six
			// 
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->six->Location = System::Drawing::Point(182, 342);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(71, 67);
			this->six->TabIndex = 17;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			// 
			// five
			// 
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->five->Location = System::Drawing::Point(105, 342);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(71, 67);
			this->five->TabIndex = 16;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			// 
			// seven
			// 
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->seven->Location = System::Drawing::Point(28, 270);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(71, 67);
			this->seven->TabIndex = 21;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			// 
			// nine
			// 
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->nine->Location = System::Drawing::Point(182, 269);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(71, 67);
			this->nine->TabIndex = 20;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			// 
			// eight
			// 
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->eight->Location = System::Drawing::Point(105, 269);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(71, 67);
			this->eight->TabIndex = 19;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			// 
			// power
			// 
			this->power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->power->Location = System::Drawing::Point(182, 195);
			this->power->Name = L"power";
			this->power->Size = System::Drawing::Size(71, 67);
			this->power->TabIndex = 24;
			this->power->Text = L"^";
			this->power->UseVisualStyleBackColor = true;
			// 
			// root
			// 
			this->root->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->root->Location = System::Drawing::Point(105, 195);
			this->root->Name = L"root";
			this->root->Size = System::Drawing::Size(71, 67);
			this->root->TabIndex = 22;
			this->root->Text = L"√";
			this->root->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(418, 572);
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
			this->Controls->Add(this->answer);
			this->Controls->Add(this->operation);
			this->Controls->Add(this->operand2);
			this->Controls->Add(this->operand1);
			this->Name = L"MyForm";
			this->Text = L"Claculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operand1->Text != "" && operand2->Text != "")
		{
			operation->Text = "+";
			double result = System::Convert::ToDouble(operand1->Text) + System::Convert::ToDouble(operand2->Text);
			answer->Text = "= " + System::Convert::ToString(result);
		}
	}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operand1->Text != "" && operand2->Text != "")
	{
		operation->Text = "-";
		double result = System::Convert::ToDouble(operand1->Text) - System::Convert::ToDouble(operand2->Text);
		answer->Text = "= " + System::Convert::ToString(result);
	}
}
private: System::Void multi_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operand1->Text != "" && operand2->Text != "")
	{
		operation->Text = "*";
		double result = System::Convert::ToDouble(operand1->Text) * System::Convert::ToDouble(operand2->Text);
		answer->Text = "= " + System::Convert::ToString(result);
	}
}
private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operand1->Text != "" && operand2->Text != "")
	{
		operation->Text = "/";
		double result = System::Convert::ToDouble(operand1->Text) / System::Convert::ToDouble(operand2->Text);
		answer->Text = "= " + System::Convert::ToString(result);
	}
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	operation->Text = "";
	answer->Text = "";
	operand1->Text = "";
	operand2->Text = "";
}
};
}
