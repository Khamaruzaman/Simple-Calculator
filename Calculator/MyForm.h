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
			this->answer->Location = System::Drawing::Point(422, 41);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(0, 39);
			this->answer->TabIndex = 3;
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->plus->Location = System::Drawing::Point(29, 127);
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
			this->minus->Location = System::Drawing::Point(130, 127);
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
			this->multi->Location = System::Drawing::Point(226, 127);
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
			this->divide->Location = System::Drawing::Point(321, 127);
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
			this->clear->Location = System::Drawing::Point(417, 127);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(71, 67);
			this->clear->TabIndex = 8;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(541, 226);
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
