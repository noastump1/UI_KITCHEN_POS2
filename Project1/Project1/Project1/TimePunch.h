#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TimePunch
	/// </summary>
	public ref class TimePunch : public System::Windows::Forms::Form
	{
	public:
		TimePunch(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			timer1->Start();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TimePunch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(21, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Current Time";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TimePunch::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(142, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Clock In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TimePunch::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(196, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Clock Out";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TimePunch::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &TimePunch::timer1_Tick);
			// 
			// TimePunch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(332, 260);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"TimePunch";
			this->Text = L"TimePunch";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime datetime = DateTime::Now;
		this->label1->Text = datetime.ToString();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	DateTime datetime = DateTime::Now;
	MessageBox::Show("You clocked in at ", datetime.ToString());
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	DateTime datetime = DateTime::Now;
	MessageBox::Show("You clocked out at ", datetime.ToString());
}
};
}
