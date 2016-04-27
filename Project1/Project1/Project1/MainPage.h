#pragma once
//#include "DB.h"

ref class Myform;

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
			timer1->Start();
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
	private: System::Windows::Forms::TabControl^  tabControl_Main;

	private: System::Windows::Forms::TabPage^  tabMain;
	private: System::Windows::Forms::TabPage^  tabClock;




	private: System::Windows::Forms::TextBox^  txtbox_CurTime;
	private: System::Windows::Forms::Label^  label_CurTime;

	private: System::Windows::Forms::TextBox^  txtbox_lastTimePush;
	private: System::Windows::Forms::TextBox^  txtbox_timePush;
	private: System::Windows::Forms::Button^  btn_clock;
	private: System::Windows::Forms::Label^  label_LTPush;

	private: System::Windows::Forms::Label^  label_TimePush;

	private: System::Windows::Forms::TabPage^  tabStudent;

	private: System::Windows::Forms::TabControl^  tab_BalanceTabMain;
	private: System::Windows::Forms::TabPage^  tab_BalanceInfoTab;
	private: System::Windows::Forms::Button^  btn_Balance_MealPlanChange;
	private: System::Windows::Forms::Button^  btn_Balance_AddBalance;
	private: System::Windows::Forms::Label^  lb_MealPlanLabel;

	private: System::Windows::Forms::Label^  lb_BalanceLabel;

	private: System::Windows::Forms::TabPage^  tab_BalanceHistory;
	private: System::Windows::Forms::TabPage^  tabGuest;
	private: System::Windows::Forms::TabPage^  tabInventory;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ComboBox^  cmboBox_CardType;
	private: System::Windows::Forms::TextBox^  txtBox_SecurityCode;




	private: System::Windows::Forms::TextBox^  txtbox_CardNum;

	private: System::Windows::Forms::TextBox^  txtBox_Name;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button_Submit;
	private: System::Windows::Forms::ComboBox^  cmboBox_Year;

	private: System::Windows::Forms::ComboBox^  cmboBox_month;

	private: System::Windows::Forms::TextBox^  txt_PaymentAmount;
	private: System::Windows::Forms::Label^  label6;





	private: System::Windows::Forms::TabPage^  tab_Logout;
	private: System::Windows::Forms::Button^  btn_Logout;
	private: System::Windows::Forms::TextBox^  txtbox_Pass;
	private: System::Windows::Forms::TextBox^  txtbox_User;
	private: System::Windows::Forms::Label^  lb_pass;
	private: System::Windows::Forms::Label^  lb_user;
	private: System::Windows::Forms::Button^  btn_enter;
	private: System::Windows::Forms::Button^  btn_SearchInv;
	private: System::Windows::Forms::TextBox^  txtbox_SearchInv;

	private: System::Windows::Forms::Button^  btn_AddInv;
	private: System::Windows::Forms::TextBox^  txtbox_AddInv;
	private: System::Windows::Forms::Label^  lbl_Qty;
	private: System::Windows::Forms::TextBox^  txtbox_Quantity;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btn_RemoveInv;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TabPage^  tabAcc;
	private: System::Windows::Forms::Button^  btn_AddAcc;
	private: System::Windows::Forms::TextBox^  txtbox_CreatePass;
	private: System::Windows::Forms::TextBox^  txt_AddUser;
	private: System::Windows::Forms::Label^  lb_CreatePass;
	private: System::Windows::Forms::Label^  lb_CreateUser;








	private: System::ComponentModel::IContainer^  components;












	protected:

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
			this->lbl_Welcome = (gcnew System::Windows::Forms::Label());
			this->tabControl_Main = (gcnew System::Windows::Forms::TabControl());
			this->tabMain = (gcnew System::Windows::Forms::TabPage());
			this->tabClock = (gcnew System::Windows::Forms::TabPage());
			this->txtbox_CurTime = (gcnew System::Windows::Forms::TextBox());
			this->label_CurTime = (gcnew System::Windows::Forms::Label());
			this->txtbox_lastTimePush = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_timePush = (gcnew System::Windows::Forms::TextBox());
			this->btn_clock = (gcnew System::Windows::Forms::Button());
			this->label_LTPush = (gcnew System::Windows::Forms::Label());
			this->label_TimePush = (gcnew System::Windows::Forms::Label());
			this->tabStudent = (gcnew System::Windows::Forms::TabPage());
			this->tab_BalanceTabMain = (gcnew System::Windows::Forms::TabControl());
			this->tab_BalanceInfoTab = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Balance_MealPlanChange = (gcnew System::Windows::Forms::Button());
			this->btn_Balance_AddBalance = (gcnew System::Windows::Forms::Button());
			this->lb_MealPlanLabel = (gcnew System::Windows::Forms::Label());
			this->lb_BalanceLabel = (gcnew System::Windows::Forms::Label());
			this->tab_BalanceHistory = (gcnew System::Windows::Forms::TabPage());
			this->tabGuest = (gcnew System::Windows::Forms::TabPage());
			this->txt_PaymentAmount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmboBox_Year = (gcnew System::Windows::Forms::ComboBox());
			this->cmboBox_month = (gcnew System::Windows::Forms::ComboBox());
			this->cmboBox_CardType = (gcnew System::Windows::Forms::ComboBox());
			this->txtBox_SecurityCode = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_CardNum = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_Submit = (gcnew System::Windows::Forms::Button());
			this->tabInventory = (gcnew System::Windows::Forms::TabPage());
			this->btn_RemoveInv = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Qty = (gcnew System::Windows::Forms::Label());
			this->txtbox_Quantity = (gcnew System::Windows::Forms::TextBox());
			this->btn_SearchInv = (gcnew System::Windows::Forms::Button());
			this->txtbox_SearchInv = (gcnew System::Windows::Forms::TextBox());
			this->btn_AddInv = (gcnew System::Windows::Forms::Button());
			this->txtbox_AddInv = (gcnew System::Windows::Forms::TextBox());
			this->tab_Logout = (gcnew System::Windows::Forms::TabPage());
			this->btn_Logout = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtbox_Pass = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_User = (gcnew System::Windows::Forms::TextBox());
			this->lb_pass = (gcnew System::Windows::Forms::Label());
			this->lb_user = (gcnew System::Windows::Forms::Label());
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->tabAcc = (gcnew System::Windows::Forms::TabPage());
			this->lb_CreateUser = (gcnew System::Windows::Forms::Label());
			this->lb_CreatePass = (gcnew System::Windows::Forms::Label());
			this->txt_AddUser = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_CreatePass = (gcnew System::Windows::Forms::TextBox());
			this->btn_AddAcc = (gcnew System::Windows::Forms::Button());
			this->tabControl_Main->SuspendLayout();
			this->tabMain->SuspendLayout();
			this->tabClock->SuspendLayout();
			this->tabStudent->SuspendLayout();
			this->tab_BalanceTabMain->SuspendLayout();
			this->tab_BalanceInfoTab->SuspendLayout();
			this->tabGuest->SuspendLayout();
			this->tabInventory->SuspendLayout();
			this->tab_Logout->SuspendLayout();
			this->tabAcc->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_Welcome
			// 
			this->lbl_Welcome->AutoSize = true;
			this->lbl_Welcome->Location = System::Drawing::Point(274, 227);
			this->lbl_Welcome->Name = L"lbl_Welcome";
			this->lbl_Welcome->Size = System::Drawing::Size(149, 13);
			this->lbl_Welcome->TabIndex = 0;
			this->lbl_Welcome->Text = L"Welcome to the Kitchen POS.";
			// 
			// tabControl_Main
			// 
			this->tabControl_Main->Controls->Add(this->tabMain);
			this->tabControl_Main->Controls->Add(this->tabClock);
			this->tabControl_Main->Controls->Add(this->tabStudent);
			this->tabControl_Main->Controls->Add(this->tabGuest);
			this->tabControl_Main->Controls->Add(this->tabInventory);
			this->tabControl_Main->Controls->Add(this->tabAcc);
			this->tabControl_Main->Controls->Add(this->tab_Logout);
			this->tabControl_Main->Location = System::Drawing::Point(12, 12);
			this->tabControl_Main->Name = L"tabControl_Main";
			this->tabControl_Main->SelectedIndex = 0;
			this->tabControl_Main->Size = System::Drawing::Size(756, 541);
			this->tabControl_Main->TabIndex = 1;
			this->tabControl_Main->Visible = false;
			// 
			// tabMain
			// 
			this->tabMain->Controls->Add(this->lbl_Welcome);
			this->tabMain->Location = System::Drawing::Point(4, 22);
			this->tabMain->Name = L"tabMain";
			this->tabMain->Padding = System::Windows::Forms::Padding(3);
			this->tabMain->Size = System::Drawing::Size(748, 515);
			this->tabMain->TabIndex = 0;
			this->tabMain->Text = L"Main Page";
			this->tabMain->UseVisualStyleBackColor = true;
			// 
			// tabClock
			// 
			this->tabClock->Controls->Add(this->txtbox_CurTime);
			this->tabClock->Controls->Add(this->label_CurTime);
			this->tabClock->Controls->Add(this->txtbox_lastTimePush);
			this->tabClock->Controls->Add(this->txtbox_timePush);
			this->tabClock->Controls->Add(this->btn_clock);
			this->tabClock->Controls->Add(this->label_LTPush);
			this->tabClock->Controls->Add(this->label_TimePush);
			this->tabClock->Location = System::Drawing::Point(4, 22);
			this->tabClock->Name = L"tabClock";
			this->tabClock->Padding = System::Windows::Forms::Padding(3);
			this->tabClock->Size = System::Drawing::Size(748, 515);
			this->tabClock->TabIndex = 1;
			this->tabClock->Text = L"Clock In/Out";
			this->tabClock->UseVisualStyleBackColor = true;
			// 
			// txtbox_CurTime
			// 
			this->txtbox_CurTime->Location = System::Drawing::Point(304, 145);
			this->txtbox_CurTime->Name = L"txtbox_CurTime";
			this->txtbox_CurTime->ReadOnly = true;
			this->txtbox_CurTime->Size = System::Drawing::Size(137, 20);
			this->txtbox_CurTime->TabIndex = 13;
			// 
			// label_CurTime
			// 
			this->label_CurTime->AutoSize = true;
			this->label_CurTime->Location = System::Drawing::Point(341, 129);
			this->label_CurTime->Name = L"label_CurTime";
			this->label_CurTime->Size = System::Drawing::Size(66, 13);
			this->label_CurTime->TabIndex = 12;
			this->label_CurTime->Text = L"Current time:";
			// 
			// txtbox_lastTimePush
			// 
			this->txtbox_lastTimePush->Location = System::Drawing::Point(304, 351);
			this->txtbox_lastTimePush->Name = L"txtbox_lastTimePush";
			this->txtbox_lastTimePush->ReadOnly = true;
			this->txtbox_lastTimePush->Size = System::Drawing::Size(137, 20);
			this->txtbox_lastTimePush->TabIndex = 11;
			// 
			// txtbox_timePush
			// 
			this->txtbox_timePush->Location = System::Drawing::Point(304, 302);
			this->txtbox_timePush->Name = L"txtbox_timePush";
			this->txtbox_timePush->ReadOnly = true;
			this->txtbox_timePush->Size = System::Drawing::Size(137, 20);
			this->txtbox_timePush->TabIndex = 10;
			// 
			// btn_clock
			// 
			this->btn_clock->Location = System::Drawing::Point(304, 183);
			this->btn_clock->Name = L"btn_clock";
			this->btn_clock->Size = System::Drawing::Size(137, 66);
			this->btn_clock->TabIndex = 9;
			this->btn_clock->Text = L"Clock In/Out";
			this->btn_clock->UseVisualStyleBackColor = true;
			this->btn_clock->Click += gcnew System::EventHandler(this, &MainPage::btn_clock_Click);
			// 
			// label_LTPush
			// 
			this->label_LTPush->AutoSize = true;
			this->label_LTPush->Location = System::Drawing::Point(329, 335);
			this->label_LTPush->Name = L"label_LTPush";
			this->label_LTPush->Size = System::Drawing::Size(95, 13);
			this->label_LTPush->TabIndex = 8;
			this->label_LTPush->Text = L"Last Time Pushed:";
			// 
			// label_TimePush
			// 
			this->label_TimePush->AutoSize = true;
			this->label_TimePush->Location = System::Drawing::Point(335, 286);
			this->label_TimePush->Name = L"label_TimePush";
			this->label_TimePush->Size = System::Drawing::Size(72, 13);
			this->label_TimePush->TabIndex = 7;
			this->label_TimePush->Text = L"Time Pushed:";
			// 
			// tabStudent
			// 
			this->tabStudent->Controls->Add(this->tab_BalanceTabMain);
			this->tabStudent->Location = System::Drawing::Point(4, 22);
			this->tabStudent->Name = L"tabStudent";
			this->tabStudent->Padding = System::Windows::Forms::Padding(3);
			this->tabStudent->Size = System::Drawing::Size(748, 515);
			this->tabStudent->TabIndex = 2;
			this->tabStudent->Text = L"Student Accounts";
			this->tabStudent->UseVisualStyleBackColor = true;
			// 
			// tab_BalanceTabMain
			// 
			this->tab_BalanceTabMain->Controls->Add(this->tab_BalanceInfoTab);
			this->tab_BalanceTabMain->Controls->Add(this->tab_BalanceHistory);
			this->tab_BalanceTabMain->Location = System::Drawing::Point(3, 3);
			this->tab_BalanceTabMain->Name = L"tab_BalanceTabMain";
			this->tab_BalanceTabMain->SelectedIndex = 0;
			this->tab_BalanceTabMain->Size = System::Drawing::Size(739, 506);
			this->tab_BalanceTabMain->TabIndex = 5;
			// 
			// tab_BalanceInfoTab
			// 
			this->tab_BalanceInfoTab->Controls->Add(this->textBox2);
			this->tab_BalanceInfoTab->Controls->Add(this->textBox1);
			this->tab_BalanceInfoTab->Controls->Add(this->btn_Balance_MealPlanChange);
			this->tab_BalanceInfoTab->Controls->Add(this->btn_Balance_AddBalance);
			this->tab_BalanceInfoTab->Controls->Add(this->lb_MealPlanLabel);
			this->tab_BalanceInfoTab->Controls->Add(this->lb_BalanceLabel);
			this->tab_BalanceInfoTab->Location = System::Drawing::Point(4, 22);
			this->tab_BalanceInfoTab->Name = L"tab_BalanceInfoTab";
			this->tab_BalanceInfoTab->Padding = System::Windows::Forms::Padding(3);
			this->tab_BalanceInfoTab->Size = System::Drawing::Size(731, 480);
			this->tab_BalanceInfoTab->TabIndex = 0;
			this->tab_BalanceInfoTab->Text = L"Balance Info";
			this->tab_BalanceInfoTab->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(63, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(63, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// btn_Balance_MealPlanChange
			// 
			this->btn_Balance_MealPlanChange->Location = System::Drawing::Point(177, 65);
			this->btn_Balance_MealPlanChange->Name = L"btn_Balance_MealPlanChange";
			this->btn_Balance_MealPlanChange->Size = System::Drawing::Size(75, 23);
			this->btn_Balance_MealPlanChange->TabIndex = 6;
			this->btn_Balance_MealPlanChange->Text = L"Change";
			this->btn_Balance_MealPlanChange->UseVisualStyleBackColor = true;
			// 
			// btn_Balance_AddBalance
			// 
			this->btn_Balance_AddBalance->Location = System::Drawing::Point(169, 18);
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
			// 
			// lb_BalanceLabel
			// 
			this->lb_BalanceLabel->AutoSize = true;
			this->lb_BalanceLabel->Location = System::Drawing::Point(8, 18);
			this->lb_BalanceLabel->Name = L"lb_BalanceLabel";
			this->lb_BalanceLabel->Size = System::Drawing::Size(49, 13);
			this->lb_BalanceLabel->TabIndex = 1;
			this->lb_BalanceLabel->Text = L"Balance:";
			// 
			// tab_BalanceHistory
			// 
			this->tab_BalanceHistory->Location = System::Drawing::Point(4, 22);
			this->tab_BalanceHistory->Name = L"tab_BalanceHistory";
			this->tab_BalanceHistory->Padding = System::Windows::Forms::Padding(3);
			this->tab_BalanceHistory->Size = System::Drawing::Size(731, 480);
			this->tab_BalanceHistory->TabIndex = 1;
			this->tab_BalanceHistory->Text = L"History";
			this->tab_BalanceHistory->UseVisualStyleBackColor = true;
			// 
			// tabGuest
			// 
			this->tabGuest->Controls->Add(this->txt_PaymentAmount);
			this->tabGuest->Controls->Add(this->label6);
			this->tabGuest->Controls->Add(this->cmboBox_Year);
			this->tabGuest->Controls->Add(this->cmboBox_month);
			this->tabGuest->Controls->Add(this->cmboBox_CardType);
			this->tabGuest->Controls->Add(this->txtBox_SecurityCode);
			this->tabGuest->Controls->Add(this->txtbox_CardNum);
			this->tabGuest->Controls->Add(this->txtBox_Name);
			this->tabGuest->Controls->Add(this->label5);
			this->tabGuest->Controls->Add(this->label4);
			this->tabGuest->Controls->Add(this->label3);
			this->tabGuest->Controls->Add(this->label2);
			this->tabGuest->Controls->Add(this->label1);
			this->tabGuest->Controls->Add(this->button_Submit);
			this->tabGuest->Location = System::Drawing::Point(4, 22);
			this->tabGuest->Name = L"tabGuest";
			this->tabGuest->Padding = System::Windows::Forms::Padding(3);
			this->tabGuest->Size = System::Drawing::Size(748, 515);
			this->tabGuest->TabIndex = 3;
			this->tabGuest->Text = L"Guest Payments";
			this->tabGuest->UseVisualStyleBackColor = true;
			// 
			// txt_PaymentAmount
			// 
			this->txt_PaymentAmount->Location = System::Drawing::Point(309, 81);
			this->txt_PaymentAmount->Name = L"txt_PaymentAmount";
			this->txt_PaymentAmount->Size = System::Drawing::Size(112, 20);
			this->txt_PaymentAmount->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(324, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Payment Amount";
			// 
			// cmboBox_Year
			// 
			this->cmboBox_Year->FormattingEnabled = true;
			this->cmboBox_Year->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"16", L"17", L"18", L"19", L"20", L"21", L"22",
					L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30"
			});
			this->cmboBox_Year->Location = System::Drawing::Point(368, 373);
			this->cmboBox_Year->Name = L"cmboBox_Year";
			this->cmboBox_Year->Size = System::Drawing::Size(43, 21);
			this->cmboBox_Year->TabIndex = 14;
			// 
			// cmboBox_month
			// 
			this->cmboBox_month->FormattingEnabled = true;
			this->cmboBox_month->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->cmboBox_month->Location = System::Drawing::Point(315, 373);
			this->cmboBox_month->Name = L"cmboBox_month";
			this->cmboBox_month->Size = System::Drawing::Size(47, 21);
			this->cmboBox_month->TabIndex = 13;
			// 
			// cmboBox_CardType
			// 
			this->cmboBox_CardType->FormattingEnabled = true;
			this->cmboBox_CardType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Visa", L"MasterCard", L"Discover" });
			this->cmboBox_CardType->Location = System::Drawing::Point(303, 156);
			this->cmboBox_CardType->Name = L"cmboBox_CardType";
			this->cmboBox_CardType->Size = System::Drawing::Size(121, 21);
			this->cmboBox_CardType->TabIndex = 12;
			// 
			// txtBox_SecurityCode
			// 
			this->txtBox_SecurityCode->Location = System::Drawing::Point(321, 310);
			this->txtBox_SecurityCode->MaxLength = 3;
			this->txtBox_SecurityCode->Name = L"txtBox_SecurityCode";
			this->txtBox_SecurityCode->Size = System::Drawing::Size(100, 20);
			this->txtBox_SecurityCode->TabIndex = 9;
			// 
			// txtbox_CardNum
			// 
			this->txtbox_CardNum->Location = System::Drawing::Point(309, 261);
			this->txtbox_CardNum->MaxLength = 16;
			this->txtbox_CardNum->Name = L"txtbox_CardNum";
			this->txtbox_CardNum->Size = System::Drawing::Size(121, 20);
			this->txtbox_CardNum->TabIndex = 8;
			// 
			// txtBox_Name
			// 
			this->txtBox_Name->Location = System::Drawing::Point(315, 208);
			this->txtBox_Name->Name = L"txtBox_Name";
			this->txtBox_Name->Size = System::Drawing::Size(100, 20);
			this->txtBox_Name->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(324, 357);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Experation Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(334, 294);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Security Code";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(328, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Name on Card";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(334, 245);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Card Number";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(334, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Card Type";
			// 
			// button_Submit
			// 
			this->button_Submit->Location = System::Drawing::Point(309, 418);
			this->button_Submit->Name = L"button_Submit";
			this->button_Submit->Size = System::Drawing::Size(115, 39);
			this->button_Submit->TabIndex = 0;
			this->button_Submit->Text = L"Submit";
			this->button_Submit->UseVisualStyleBackColor = true;
			// 
			// tabInventory
			// 
			this->tabInventory->Controls->Add(this->btn_RemoveInv);
			this->tabInventory->Controls->Add(this->textBox3);
			this->tabInventory->Controls->Add(this->lbl_Qty);
			this->tabInventory->Controls->Add(this->txtbox_Quantity);
			this->tabInventory->Controls->Add(this->btn_SearchInv);
			this->tabInventory->Controls->Add(this->txtbox_SearchInv);
			this->tabInventory->Controls->Add(this->btn_AddInv);
			this->tabInventory->Controls->Add(this->txtbox_AddInv);
			this->tabInventory->Location = System::Drawing::Point(4, 22);
			this->tabInventory->Name = L"tabInventory";
			this->tabInventory->Padding = System::Windows::Forms::Padding(3);
			this->tabInventory->Size = System::Drawing::Size(748, 515);
			this->tabInventory->TabIndex = 4;
			this->tabInventory->Text = L"Inventory";
			this->tabInventory->UseVisualStyleBackColor = true;
			// 
			// btn_RemoveInv
			// 
			this->btn_RemoveInv->Location = System::Drawing::Point(358, 249);
			this->btn_RemoveInv->Name = L"btn_RemoveInv";
			this->btn_RemoveInv->Size = System::Drawing::Size(75, 23);
			this->btn_RemoveInv->TabIndex = 7;
			this->btn_RemoveInv->Text = L"Remove";
			this->btn_RemoveInv->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(227, 252);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// lbl_Qty
			// 
			this->lbl_Qty->AutoSize = true;
			this->lbl_Qty->Location = System::Drawing::Point(246, 285);
			this->lbl_Qty->Name = L"lbl_Qty";
			this->lbl_Qty->Size = System::Drawing::Size(46, 13);
			this->lbl_Qty->TabIndex = 5;
			this->lbl_Qty->Text = L"Quantity";
			// 
			// txtbox_Quantity
			// 
			this->txtbox_Quantity->Location = System::Drawing::Point(318, 282);
			this->txtbox_Quantity->Name = L"txtbox_Quantity";
			this->txtbox_Quantity->ReadOnly = true;
			this->txtbox_Quantity->Size = System::Drawing::Size(100, 20);
			this->txtbox_Quantity->TabIndex = 4;
			// 
			// btn_SearchInv
			// 
			this->btn_SearchInv->Location = System::Drawing::Point(358, 187);
			this->btn_SearchInv->Name = L"btn_SearchInv";
			this->btn_SearchInv->Size = System::Drawing::Size(75, 23);
			this->btn_SearchInv->TabIndex = 3;
			this->btn_SearchInv->Text = L"Search";
			this->btn_SearchInv->UseVisualStyleBackColor = true;
			// 
			// txtbox_SearchInv
			// 
			this->txtbox_SearchInv->Location = System::Drawing::Point(227, 190);
			this->txtbox_SearchInv->Name = L"txtbox_SearchInv";
			this->txtbox_SearchInv->Size = System::Drawing::Size(100, 20);
			this->txtbox_SearchInv->TabIndex = 2;
			// 
			// btn_AddInv
			// 
			this->btn_AddInv->Location = System::Drawing::Point(358, 133);
			this->btn_AddInv->Name = L"btn_AddInv";
			this->btn_AddInv->Size = System::Drawing::Size(75, 23);
			this->btn_AddInv->TabIndex = 1;
			this->btn_AddInv->Text = L"Add ";
			this->btn_AddInv->UseVisualStyleBackColor = true;
			// 
			// txtbox_AddInv
			// 
			this->txtbox_AddInv->Location = System::Drawing::Point(227, 136);
			this->txtbox_AddInv->Name = L"txtbox_AddInv";
			this->txtbox_AddInv->Size = System::Drawing::Size(100, 20);
			this->txtbox_AddInv->TabIndex = 0;
			// 
			// tab_Logout
			// 
			this->tab_Logout->Controls->Add(this->btn_Logout);
			this->tab_Logout->Location = System::Drawing::Point(4, 22);
			this->tab_Logout->Name = L"tab_Logout";
			this->tab_Logout->Padding = System::Windows::Forms::Padding(3);
			this->tab_Logout->Size = System::Drawing::Size(748, 515);
			this->tab_Logout->TabIndex = 5;
			this->tab_Logout->Text = L"Logout";
			this->tab_Logout->UseVisualStyleBackColor = true;
			// 
			// btn_Logout
			// 
			this->btn_Logout->Location = System::Drawing::Point(231, 183);
			this->btn_Logout->Name = L"btn_Logout";
			this->btn_Logout->Size = System::Drawing::Size(274, 165);
			this->btn_Logout->TabIndex = 0;
			this->btn_Logout->Text = L"Logout";
			this->btn_Logout->UseVisualStyleBackColor = true;
			this->btn_Logout->Click += gcnew System::EventHandler(this, &MainPage::btn_Logout_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainPage::timer1_Tick);
			// 
			// txtbox_Pass
			// 
			this->txtbox_Pass->Location = System::Drawing::Point(349, 250);
			this->txtbox_Pass->Name = L"txtbox_Pass";
			this->txtbox_Pass->Size = System::Drawing::Size(100, 20);
			this->txtbox_Pass->TabIndex = 9;
			// 
			// txtbox_User
			// 
			this->txtbox_User->Location = System::Drawing::Point(349, 190);
			this->txtbox_User->Name = L"txtbox_User";
			this->txtbox_User->Size = System::Drawing::Size(100, 20);
			this->txtbox_User->TabIndex = 8;
			// 
			// lb_pass
			// 
			this->lb_pass->AutoSize = true;
			this->lb_pass->Location = System::Drawing::Point(264, 253);
			this->lb_pass->Name = L"lb_pass";
			this->lb_pass->Size = System::Drawing::Size(56, 13);
			this->lb_pass->TabIndex = 7;
			this->lb_pass->Text = L"Password:";
			// 
			// lb_user
			// 
			this->lb_user->AutoSize = true;
			this->lb_user->Location = System::Drawing::Point(262, 193);
			this->lb_user->Name = L"lb_user";
			this->lb_user->Size = System::Drawing::Size(58, 13);
			this->lb_user->TabIndex = 6;
			this->lb_user->Text = L"Username:";
			// 
			// btn_enter
			// 
			this->btn_enter->Location = System::Drawing::Point(361, 306);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(75, 23);
			this->btn_enter->TabIndex = 5;
			this->btn_enter->Text = L"Enter";
			this->btn_enter->UseVisualStyleBackColor = true;
			this->btn_enter->Click += gcnew System::EventHandler(this, &MainPage::btn_enter_Click_1);
			// 
			// tabAcc
			// 
			this->tabAcc->Controls->Add(this->btn_AddAcc);
			this->tabAcc->Controls->Add(this->txtbox_CreatePass);
			this->tabAcc->Controls->Add(this->txt_AddUser);
			this->tabAcc->Controls->Add(this->lb_CreatePass);
			this->tabAcc->Controls->Add(this->lb_CreateUser);
			this->tabAcc->Location = System::Drawing::Point(4, 22);
			this->tabAcc->Name = L"tabAcc";
			this->tabAcc->Padding = System::Windows::Forms::Padding(3);
			this->tabAcc->Size = System::Drawing::Size(748, 515);
			this->tabAcc->TabIndex = 6;
			this->tabAcc->Text = L"Account";
			this->tabAcc->UseVisualStyleBackColor = true;
			// 
			// lb_CreateUser
			// 
			this->lb_CreateUser->AutoSize = true;
			this->lb_CreateUser->Location = System::Drawing::Point(212, 159);
			this->lb_CreateUser->Name = L"lb_CreateUser";
			this->lb_CreateUser->Size = System::Drawing::Size(92, 13);
			this->lb_CreateUser->TabIndex = 10;
			this->lb_CreateUser->Text = L"Create Username:";
			// 
			// lb_CreatePass
			// 
			this->lb_CreatePass->AutoSize = true;
			this->lb_CreatePass->Location = System::Drawing::Point(212, 223);
			this->lb_CreatePass->Name = L"lb_CreatePass";
			this->lb_CreatePass->Size = System::Drawing::Size(90, 13);
			this->lb_CreatePass->TabIndex = 11;
			this->lb_CreatePass->Text = L"Create Password:";
			// 
			// txt_AddUser
			// 
			this->txt_AddUser->Location = System::Drawing::Point(333, 156);
			this->txt_AddUser->Name = L"txt_AddUser";
			this->txt_AddUser->Size = System::Drawing::Size(100, 20);
			this->txt_AddUser->TabIndex = 10;
			// 
			// txtbox_CreatePass
			// 
			this->txtbox_CreatePass->Location = System::Drawing::Point(333, 219);
			this->txtbox_CreatePass->Name = L"txtbox_CreatePass";
			this->txtbox_CreatePass->Size = System::Drawing::Size(100, 20);
			this->txtbox_CreatePass->TabIndex = 12;
			// 
			// btn_AddAcc
			// 
			this->btn_AddAcc->Location = System::Drawing::Point(333, 273);
			this->btn_AddAcc->Name = L"btn_AddAcc";
			this->btn_AddAcc->Size = System::Drawing::Size(75, 23);
			this->btn_AddAcc->TabIndex = 10;
			this->btn_AddAcc->Text = L"Add";
			this->btn_AddAcc->UseVisualStyleBackColor = true;
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 589);
			this->Controls->Add(this->txtbox_Pass);
			this->Controls->Add(this->txtbox_User);
			this->Controls->Add(this->lb_pass);
			this->Controls->Add(this->lb_user);
			this->Controls->Add(this->btn_enter);
			this->Controls->Add(this->tabControl_Main);
			this->Name = L"MainPage";
			this->Text = L"MainPage";
			this->tabControl_Main->ResumeLayout(false);
			this->tabMain->ResumeLayout(false);
			this->tabMain->PerformLayout();
			this->tabClock->ResumeLayout(false);
			this->tabClock->PerformLayout();
			this->tabStudent->ResumeLayout(false);
			this->tab_BalanceTabMain->ResumeLayout(false);
			this->tab_BalanceInfoTab->ResumeLayout(false);
			this->tab_BalanceInfoTab->PerformLayout();
			this->tabGuest->ResumeLayout(false);
			this->tabGuest->PerformLayout();
			this->tabInventory->ResumeLayout(false);
			this->tabInventory->PerformLayout();
			this->tab_Logout->ResumeLayout(false);
			this->tabAcc->ResumeLayout(false);
			this->tabAcc->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//private: System::Void Frm_FormClosing(System::Object^ sender, FormClosingEventArgs e)
		//{
		//	Application app = Application::Exit();
		//}
	private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void ts_Btn_Logout_Click(System::Object^  sender, System::EventArgs^  e) {
			//LoginForm1^ test = gcnew LoginForm1();
		}

private: System::Void btn_clock_Click(System::Object^  sender, System::EventArgs^  e) {
	//Takes the current time and the last time
	this->txtbox_lastTimePush->Text = this->txtbox_timePush->Text;
	this->txtbox_timePush->Text = this->txtbox_CurTime->Text;
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	//Uodates current time
	DateTime dateTime = DateTime::Now;
	this->txtbox_CurTime->Text = dateTime.ToString();
}
private: System::Void btn_enter_Click(System::Object^  sender, System::EventArgs^  e) {
	

	//DB^ db = gcnew DB;
	String^ username = txtbox_User->Text;
	String^ password = txtbox_Pass->Text;

	//bool result = db->logUserIn(username, password);

	////if (result)
	//{
	//	MessageBox::Show("Success");
	//}
}

private: System::Void btn_Logout_Click(System::Object^  sender, System::EventArgs^  e) {
	//Returns to the login page
	txtbox_Pass->Text = "";
	txtbox_User->Text = "";
	txtbox_Pass->Visible = true;
	txtbox_User->Visible = true;
	btn_enter->Visible = true;
	lb_user->Visible = true;
	lb_pass->Visible = true;
	tabControl_Main->Visible = false;
}





private: System::Void btn_enter_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//Checks username and password
	//Then opens up program
	String^ username = txtbox_User->Text;
	String^ password = txtbox_Pass->Text;
	if (password == "pass"&&username == "user")
	{
		txtbox_Pass->Visible = false;
		txtbox_User->Visible = false;
		btn_enter->Visible = false;
		lb_user->Visible = false;
		lb_pass->Visible = false;
		tabControl_Main->Visible = true;
	}
	else
	{
		//if password and user name are wrong throws up an error
		MessageBox::Show("Wrong username or password. Hint username is user and password is pass.");
	}

}
};
}
