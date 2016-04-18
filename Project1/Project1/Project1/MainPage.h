#pragma once
#include "BalanceForm.h"


ref class LoginForm1;

namespace Project1 {

	using namespace System;

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
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
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_Welcome;
	protected:

	protected:
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  ts_Btn_Clock;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  ts_Btn_Student;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  ts_Btn_Visitor;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^  ts_Btn_Inventory;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^  ts_Btn_Logout;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPage::typeid));
			this->lbl_Welcome = (gcnew System::Windows::Forms::Label());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->ts_Btn_Clock = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ts_Btn_Student = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ts_Btn_Visitor = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ts_Btn_Inventory = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ts_Btn_Logout = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_Welcome
			// 
			this->lbl_Welcome->AutoSize = true;
			this->lbl_Welcome->Location = System::Drawing::Point(147, 193);
			this->lbl_Welcome->Name = L"lbl_Welcome";
			this->lbl_Welcome->Size = System::Drawing::Size(116, 13);
			this->lbl_Welcome->TabIndex = 0;
			this->lbl_Welcome->Text = L"Welcome kitchen user.";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->ts_Btn_Clock, this->toolStripSeparator1,
					this->ts_Btn_Student, this->toolStripSeparator2, this->ts_Btn_Visitor, this->toolStripSeparator3, this->ts_Btn_Inventory, this->toolStripSeparator4,
					this->ts_Btn_Logout
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(447, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// ts_Btn_Clock
			// 
			this->ts_Btn_Clock->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ts_Btn_Clock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ts_Btn_Clock.Image")));
			this->ts_Btn_Clock->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ts_Btn_Clock->Name = L"ts_Btn_Clock";
			this->ts_Btn_Clock->Size = System::Drawing::Size(76, 22);
			this->ts_Btn_Clock->Text = L"ClockIn/Out";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// ts_Btn_Student
			// 
			this->ts_Btn_Student->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ts_Btn_Student->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ts_Btn_Student.Image")));
			this->ts_Btn_Student->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ts_Btn_Student->Name = L"ts_Btn_Student";
			this->ts_Btn_Student->Size = System::Drawing::Size(105, 22);
			this->ts_Btn_Student->Text = L"Student Accounts";
			this->ts_Btn_Student->Click += gcnew System::EventHandler(this, &MainPage::toolStripButton2_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// ts_Btn_Visitor
			// 
			this->ts_Btn_Visitor->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ts_Btn_Visitor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ts_Btn_Visitor.Image")));
			this->ts_Btn_Visitor->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ts_Btn_Visitor->Name = L"ts_Btn_Visitor";
			this->ts_Btn_Visitor->Size = System::Drawing::Size(94, 22);
			this->ts_Btn_Visitor->Text = L"Visitor Payment";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// ts_Btn_Inventory
			// 
			this->ts_Btn_Inventory->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ts_Btn_Inventory->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ts_Btn_Inventory.Image")));
			this->ts_Btn_Inventory->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ts_Btn_Inventory->Name = L"ts_Btn_Inventory";
			this->ts_Btn_Inventory->Size = System::Drawing::Size(61, 22);
			this->ts_Btn_Inventory->Text = L"Inventory";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// ts_Btn_Logout
			// 
			this->ts_Btn_Logout->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ts_Btn_Logout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ts_Btn_Logout.Image")));
			this->ts_Btn_Logout->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ts_Btn_Logout->Name = L"ts_Btn_Logout";
			this->ts_Btn_Logout->Size = System::Drawing::Size(49, 22);
			this->ts_Btn_Logout->Text = L"Logout";
			this->ts_Btn_Logout->Click += gcnew System::EventHandler(this, &MainPage::ts_Btn_Logout_Click);
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 425);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->lbl_Welcome);
			this->Name = L"MainPage";
			this->Text = L"MainPage";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		BalanceForm^ bF = gcnew BalanceForm();
		bF->ShowDialog();
	}
private: System::Void ts_Btn_Logout_Click(System::Object^  sender, System::EventArgs^  e) {
			//LoginForm1^ test = gcnew LoginForm1();
		}
	};
}
