#pragma once
#include "MainPage.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtbox_Pass;
	protected:
	private: System::Windows::Forms::TextBox^  txtbox_User;
	private: System::Windows::Forms::Label^  lb_pass;
	private: System::Windows::Forms::Label^  lb_user;
	private: System::Windows::Forms::Button^  btn_enter;

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
			this->txtbox_Pass = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_User = (gcnew System::Windows::Forms::TextBox());
			this->lb_pass = (gcnew System::Windows::Forms::Label());
			this->lb_user = (gcnew System::Windows::Forms::Label());
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtbox_Pass
			// 
			this->txtbox_Pass->Location = System::Drawing::Point(136, 120);
			this->txtbox_Pass->Name = L"txtbox_Pass";
			this->txtbox_Pass->Size = System::Drawing::Size(100, 20);
			this->txtbox_Pass->TabIndex = 9;
			// 
			// txtbox_User
			// 
			this->txtbox_User->Location = System::Drawing::Point(136, 60);
			this->txtbox_User->Name = L"txtbox_User";
			this->txtbox_User->Size = System::Drawing::Size(100, 20);
			this->txtbox_User->TabIndex = 8;
			// 
			// lb_pass
			// 
			this->lb_pass->AutoSize = true;
			this->lb_pass->Location = System::Drawing::Point(51, 123);
			this->lb_pass->Name = L"lb_pass";
			this->lb_pass->Size = System::Drawing::Size(56, 13);
			this->lb_pass->TabIndex = 7;
			this->lb_pass->Text = L"Password:";
			// 
			// lb_user
			// 
			this->lb_user->AutoSize = true;
			this->lb_user->Location = System::Drawing::Point(49, 63);
			this->lb_user->Name = L"lb_user";
			this->lb_user->Size = System::Drawing::Size(58, 13);
			this->lb_user->TabIndex = 6;
			this->lb_user->Text = L"Username:";
			// 
			// btn_enter
			// 
			this->btn_enter->Location = System::Drawing::Point(146, 179);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(75, 23);
			this->btn_enter->TabIndex = 5;
			this->btn_enter->Text = L"Enter";
			this->btn_enter->UseVisualStyleBackColor = true;
			this->btn_enter->Click += gcnew System::EventHandler(this, &LoginForm::btn_enter_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->txtbox_Pass);
			this->Controls->Add(this->txtbox_User);
			this->Controls->Add(this->lb_pass);
			this->Controls->Add(this->lb_user);
			this->Controls->Add(this->btn_enter);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_enter_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Show();
		MainPage^ mP = gcnew MainPage();
		mP->ShowDialog();
	}
};
}
