#pragma once

namespace SampleGUI {

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
	private: System::Windows::Forms::Label^ firstNameLabel;
	private: System::Windows::Forms::Label^ lastNameLabel;
	private: System::Windows::Forms::TextBox^ firstNameTextBox;
	private: System::Windows::Forms::TextBox^ lastNameTextBox;
	private: System::Windows::Forms::Button^ mergeButton;
	private: System::Windows::Forms::Label^ mergeLabel;
	private: System::Windows::Forms::Label^ resultLabel;

	protected:

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
			this->firstNameLabel = (gcnew System::Windows::Forms::Label());
			this->lastNameLabel = (gcnew System::Windows::Forms::Label());
			this->firstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->mergeButton = (gcnew System::Windows::Forms::Button());
			this->mergeLabel = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// firstNameLabel
			// 
			this->firstNameLabel->AutoSize = true;
			this->firstNameLabel->Location = System::Drawing::Point(13, 13);
			this->firstNameLabel->Name = L"firstNameLabel";
			this->firstNameLabel->Size = System::Drawing::Size(63, 13);
			this->firstNameLabel->TabIndex = 0;
			this->firstNameLabel->Text = L"First Name :";
			this->firstNameLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lastNameLabel
			// 
			this->lastNameLabel->AutoSize = true;
			this->lastNameLabel->Location = System::Drawing::Point(13, 39);
			this->lastNameLabel->Name = L"lastNameLabel";
			this->lastNameLabel->Size = System::Drawing::Size(64, 13);
			this->lastNameLabel->TabIndex = 1;
			this->lastNameLabel->Text = L"Last Name :";
			// 
			// firstNameTextBox
			// 
			this->firstNameTextBox->Location = System::Drawing::Point(82, 10);
			this->firstNameTextBox->Name = L"firstNameTextBox";
			this->firstNameTextBox->Size = System::Drawing::Size(100, 20);
			this->firstNameTextBox->TabIndex = 2;
			// 
			// lastNameTextBox
			// 
			this->lastNameTextBox->Location = System::Drawing::Point(82, 36);
			this->lastNameTextBox->Name = L"lastNameTextBox";
			this->lastNameTextBox->Size = System::Drawing::Size(100, 20);
			this->lastNameTextBox->TabIndex = 3;
			// 
			// mergeButton
			// 
			this->mergeButton->Location = System::Drawing::Point(16, 99);
			this->mergeButton->Name = L"mergeButton";
			this->mergeButton->Size = System::Drawing::Size(75, 23);
			this->mergeButton->TabIndex = 4;
			this->mergeButton->Text = L"Merge";
			this->mergeButton->UseVisualStyleBackColor = true;
			this->mergeButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// mergeLabel
			// 
			this->mergeLabel->AutoSize = true;
			this->mergeLabel->Location = System::Drawing::Point(16, 66);
			this->mergeLabel->Name = L"mergeLabel";
			this->mergeLabel->Size = System::Drawing::Size(60, 13);
			this->mergeLabel->TabIndex = 5;
			this->mergeLabel->Text = L"Full Name :";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(82, 66);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(16, 13);
			this->resultLabel->TabIndex = 6;
			this->resultLabel->Text = L"...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->mergeLabel);
			this->Controls->Add(this->mergeButton);
			this->Controls->Add(this->lastNameTextBox);
			this->Controls->Add(this->firstNameTextBox);
			this->Controls->Add(this->lastNameLabel);
			this->Controls->Add(this->firstNameLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ fullName = firstNameTextBox->Text + lastNameTextBox->Text;

		resultLabel->Text = fullName;

	}
};
}
