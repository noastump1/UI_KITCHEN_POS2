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
	private: System::Windows::Forms::Label^  lb_BalanceLabel;
	private: System::Windows::Forms::Label^  lb_BalanceAmountIndicator;

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
	private: System::Windows::Forms::TabControl^  tab_BalanceTabMain;



	private: System::Windows::Forms::Label^  lb_MealPlanLabel;
	private: System::Windows::Forms::Label^  lb_MealPlanIndicator;
	private: System::Windows::Forms::TabPage^  tab_BalanceHistory;



	private: System::Windows::Forms::TabPage^  tab_BalanceInfoTab;
	private: System::Windows::Forms::Button^  btn_Balance_MealPlanChange;
	private: System::Windows::Forms::Button^  btn_Balance_AddBalance;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BalanceForm::typeid));
			this->lb_BalanceLabel = (gcnew System::Windows::Forms::Label());
			this->lb_BalanceAmountIndicator = (gcnew System::Windows::Forms::Label());
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
			this->tab_BalanceTabMain = (gcnew System::Windows::Forms::TabControl());
			this->tab_BalanceInfoTab = (gcnew System::Windows::Forms::TabPage());
			this->btn_Balance_MealPlanChange = (gcnew System::Windows::Forms::Button());
			this->btn_Balance_AddBalance = (gcnew System::Windows::Forms::Button());
			this->lb_MealPlanLabel = (gcnew System::Windows::Forms::Label());
			this->lb_MealPlanIndicator = (gcnew System::Windows::Forms::Label());
			this->tab_BalanceHistory = (gcnew System::Windows::Forms::TabPage());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolStrip1->SuspendLayout();
			this->tab_BalanceTabMain->SuspendLayout();
			this->tab_BalanceInfoTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_BalanceLabel
			// 
			this->lb_BalanceLabel->AutoSize = true;
			this->lb_BalanceLabel->Location = System::Drawing::Point(8, 18);
			this->lb_BalanceLabel->Name = L"lb_BalanceLabel";
			this->lb_BalanceLabel->Size = System::Drawing::Size(49, 13);
			this->lb_BalanceLabel->TabIndex = 1;
			this->lb_BalanceLabel->Text = L"Balance:";
			this->lb_BalanceLabel->Click += gcnew System::EventHandler(this, &BalanceForm::label1_Click);
			// 
			// lb_BalanceAmountIndicator
			// 
			this->lb_BalanceAmountIndicator->AutoSize = true;
			this->lb_BalanceAmountIndicator->Location = System::Drawing::Point(71, 18);
			this->lb_BalanceAmountIndicator->Name = L"lb_BalanceAmountIndicator";
			this->lb_BalanceAmountIndicator->Size = System::Drawing::Size(35, 13);
			this->lb_BalanceAmountIndicator->TabIndex = 2;
			this->lb_BalanceAmountIndicator->Text = L"label1";
			this->lb_BalanceAmountIndicator->Click += gcnew System::EventHandler(this, &BalanceForm::label1_Click_1);
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
			this->toolStrip1->Size = System::Drawing::Size(535, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &BalanceForm::toolStrip1_ItemClicked);
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
			// 
			// tab_BalanceTabMain
			// 
			this->tab_BalanceTabMain->Controls->Add(this->tab_BalanceInfoTab);
			this->tab_BalanceTabMain->Controls->Add(this->tab_BalanceHistory);
			this->tab_BalanceTabMain->Location = System::Drawing::Point(0, 28);
			this->tab_BalanceTabMain->Name = L"tab_BalanceTabMain";
			this->tab_BalanceTabMain->SelectedIndex = 0;
			this->tab_BalanceTabMain->Size = System::Drawing::Size(535, 370);
			this->tab_BalanceTabMain->TabIndex = 4;
			// 
			// tab_BalanceInfoTab
			// 
			this->tab_BalanceInfoTab->Controls->Add(this->btn_Balance_MealPlanChange);
			this->tab_BalanceInfoTab->Controls->Add(this->btn_Balance_AddBalance);
			this->tab_BalanceInfoTab->Controls->Add(this->lb_MealPlanLabel);
			this->tab_BalanceInfoTab->Controls->Add(this->lb_MealPlanIndicator);
			this->tab_BalanceInfoTab->Controls->Add(this->lb_BalanceLabel);
			this->tab_BalanceInfoTab->Controls->Add(this->lb_BalanceAmountIndicator);
			this->tab_BalanceInfoTab->Location = System::Drawing::Point(4, 22);
			this->tab_BalanceInfoTab->Name = L"tab_BalanceInfoTab";
			this->tab_BalanceInfoTab->Padding = System::Windows::Forms::Padding(3);
			this->tab_BalanceInfoTab->Size = System::Drawing::Size(527, 344);
			this->tab_BalanceInfoTab->TabIndex = 0;
			this->tab_BalanceInfoTab->Text = L"Balance Info";
			this->tab_BalanceInfoTab->UseVisualStyleBackColor = true;
			// 
			// btn_Balance_MealPlanChange
			// 
			this->btn_Balance_MealPlanChange->Location = System::Drawing::Point(122, 65);
			this->btn_Balance_MealPlanChange->Name = L"btn_Balance_MealPlanChange";
			this->btn_Balance_MealPlanChange->Size = System::Drawing::Size(75, 23);
			this->btn_Balance_MealPlanChange->TabIndex = 6;
			this->btn_Balance_MealPlanChange->Text = L"Change";
			this->btn_Balance_MealPlanChange->UseVisualStyleBackColor = true;
			// 
			// btn_Balance_AddBalance
			// 
			this->btn_Balance_AddBalance->Location = System::Drawing::Point(122, 13);
			this->btn_Balance_AddBalance->Name = L"btn_Balance_AddBalance";
			this->btn_Balance_AddBalance->Size = System::Drawing::Size(75, 23);
			this->btn_Balance_AddBalance->TabIndex = 5;
			this->btn_Balance_AddBalance->Text = L"Add";
			this->btn_Balance_AddBalance->UseVisualStyleBackColor = true;
			// 
			// lb_MealPlanLabel
			// 
			this->lb_MealPlanLabel->AutoSize = true;
			this->lb_MealPlanLabel->Location = System::Drawing::Point(8, 70);
			this->lb_MealPlanLabel->Name = L"lb_MealPlanLabel";
			this->lb_MealPlanLabel->Size = System::Drawing::Size(57, 13);
			this->lb_MealPlanLabel->TabIndex = 3;
			this->lb_MealPlanLabel->Text = L"Meal Plan:";
			this->lb_MealPlanLabel->Click += gcnew System::EventHandler(this, &BalanceForm::label2_Click);
			// 
			// lb_MealPlanIndicator
			// 
			this->lb_MealPlanIndicator->AutoSize = true;
			this->lb_MealPlanIndicator->Location = System::Drawing::Point(71, 70);
			this->lb_MealPlanIndicator->Name = L"lb_MealPlanIndicator";
			this->lb_MealPlanIndicator->Size = System::Drawing::Size(35, 13);
			this->lb_MealPlanIndicator->TabIndex = 4;
			this->lb_MealPlanIndicator->Text = L"label3";
			this->lb_MealPlanIndicator->Click += gcnew System::EventHandler(this, &BalanceForm::label3_Click);
			// 
			// tab_BalanceHistory
			// 
			this->tab_BalanceHistory->Location = System::Drawing::Point(4, 22);
			this->tab_BalanceHistory->Name = L"tab_BalanceHistory";
			this->tab_BalanceHistory->Padding = System::Windows::Forms::Padding(3);
			this->tab_BalanceHistory->Size = System::Drawing::Size(527, 344);
			this->tab_BalanceHistory->TabIndex = 1;
			this->tab_BalanceHistory->Text = L"History";
			this->tab_BalanceHistory->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &BalanceForm::timer1_Tick);
			// 
			// BalanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(535, 397);
			this->Controls->Add(this->tab_BalanceTabMain);
			this->Controls->Add(this->toolStrip1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"BalanceForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Balance";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &BalanceForm::BalanceForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tab_BalanceTabMain->ResumeLayout(false);
			this->tab_BalanceInfoTab->ResumeLayout(false);
			this->tab_BalanceInfoTab->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BalanceForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bn_balance_Done_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
}
};
}
