#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BalanceForm
	/// </summary>
	public ref class BalanceForm : public System::Windows::Forms::Form
	{
	public:
		BalanceForm(void)
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
		~BalanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bn_balance_Done;
	private: System::Windows::Forms::Label^  lb_Balance;
	private: System::Windows::Forms::Label^  label1;

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
			this->bn_balance_Done = (gcnew System::Windows::Forms::Button());
			this->lb_Balance = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bn_balance_Done
			// 
			this->bn_balance_Done->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bn_balance_Done->Location = System::Drawing::Point(197, 226);
			this->bn_balance_Done->Name = L"bn_balance_Done";
			this->bn_balance_Done->Size = System::Drawing::Size(75, 23);
			this->bn_balance_Done->TabIndex = 0;
			this->bn_balance_Done->Text = L"Done";
			this->bn_balance_Done->UseVisualStyleBackColor = true;
			// 
			// lb_Balance
			// 
			this->lb_Balance->AutoSize = true;
			this->lb_Balance->Location = System::Drawing::Point(12, 9);
			this->lb_Balance->Name = L"lb_Balance";
			this->lb_Balance->Size = System::Drawing::Size(49, 13);
			this->lb_Balance->TabIndex = 1;
			this->lb_Balance->Text = L"Balance:";
			this->lb_Balance->Click += gcnew System::EventHandler(this, &BalanceForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// BalanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lb_Balance);
			this->Controls->Add(this->bn_balance_Done);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"BalanceForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Balance";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &BalanceForm::BalanceForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BalanceForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
