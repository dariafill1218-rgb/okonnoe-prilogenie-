#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBoxGray;

	private: System::Windows::Forms::CheckBox^ checkBoxYellow;



	private: System::Windows::Forms::CheckBox^ checkBoxGreen;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBoxRed;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBoxGray = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxYellow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxGreen = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBoxRed = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать надпись";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 62);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(205, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Стереть надпись";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(260, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Кнопка работает";
			this->label1->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(12, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(233, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Поменять цвет окна\r\n";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkBoxGray
			// 
			this->checkBoxGray->AutoSize = true;
			this->checkBoxGray->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxGray->Location = System::Drawing::Point(280, 53);
			this->checkBoxGray->Name = L"checkBoxGray";
			this->checkBoxGray->Size = System::Drawing::Size(94, 29);
			this->checkBoxGray->TabIndex = 4;
			this->checkBoxGray->Text = L"Серый";
			this->checkBoxGray->UseVisualStyleBackColor = true;
			this->checkBoxGray->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBoxYellow
			// 
			this->checkBoxYellow->AutoSize = true;
			this->checkBoxYellow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxYellow->Location = System::Drawing::Point(280, 184);
			this->checkBoxYellow->Name = L"checkBoxYellow";
			this->checkBoxYellow->Size = System::Drawing::Size(113, 29);
			this->checkBoxYellow->TabIndex = 5;
			this->checkBoxYellow->Text = L"Желтый";
			this->checkBoxYellow->UseVisualStyleBackColor = true;
			this->checkBoxYellow->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxYellow_CheckedChanged);
			// 
			// checkBoxGreen
			// 
			this->checkBoxGreen->AutoSize = true;
			this->checkBoxGreen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxGreen->Location = System::Drawing::Point(280, 140);
			this->checkBoxGreen->Name = L"checkBoxGreen";
			this->checkBoxGreen->Size = System::Drawing::Size(117, 29);
			this->checkBoxGreen->TabIndex = 6;
			this->checkBoxGreen->Text = L"Зеленый";
			this->checkBoxGreen->UseVisualStyleBackColor = true;
			this->checkBoxGreen->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxGreen_CheckedChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 168);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 36);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Закрыть";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// checkBoxRed
			// 
			this->checkBoxRed->AutoSize = true;
			this->checkBoxRed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxRed->Location = System::Drawing::Point(280, 97);
			this->checkBoxRed->Name = L"checkBoxRed";
			this->checkBoxRed->Size = System::Drawing::Size(113, 29);
			this->checkBoxRed->TabIndex = 8;
			this->checkBoxRed->Text = L"Красный";
			this->checkBoxRed->UseVisualStyleBackColor = true;
			this->checkBoxRed->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxRed_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(468, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(417, 201);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация о приложении";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(138, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Оконное приложение";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(138, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Филонович Д.Э.";
			this->label2->Visible = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(30, 101);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(238, 26);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Технология приложения";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(30, 42);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(81, 26);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Автор";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(336, 291);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 33);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Вычислить";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(783, 291);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(142, 33);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 291);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 28);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"Делимое";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(184, 291);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 28);
			this->textBox2->TabIndex = 14;
			this->textBox2->Text = L"Делитель";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(498, 291);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 28);
			this->textBox3->TabIndex = 15;
			this->textBox3->Text = L"Результат (корень из частного)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(937, 336);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBoxRed);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkBoxGreen);
			this->Controls->Add(this->checkBoxYellow);
			this->Controls->Add(this->checkBoxGray);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = false;
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxGray->Checked)
	{
		checkBoxRed->Checked = false;
		checkBoxGreen->Checked = false;
		checkBoxYellow->Checked = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxGray->Checked)
	{
		this->BackColor = System::Drawing::Color::Gray;
	}
	else if (checkBoxRed->Checked)
	{
		this->BackColor = System::Drawing::Color::Red;
	}
	else if (checkBoxGreen->Checked)
	{
		this->BackColor = System::Drawing::Color::Green;
	}
	else if (checkBoxYellow->Checked)
	{
		this->BackColor = System::Drawing::Color::Yellow;
	}
	else
	{
		this->BackColor = System::Drawing::SystemColors::Control;
	}
}
private: System::Void checkBoxRed_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxRed->Checked)
	{
		checkBoxGray->Checked = false;
		checkBoxGreen->Checked = false;
		checkBoxYellow->Checked = false;
	}
}
private: System::Void checkBoxGreen_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxGreen->Checked)
	{
		checkBoxGray->Checked = false;
		checkBoxRed->Checked = false;
		checkBoxYellow->Checked = false;
	}
}
private: System::Void checkBoxYellow_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxYellow->Checked)
	{
		checkBoxGray->Checked = false;
		checkBoxRed->Checked = false;
		checkBoxGreen->Checked = false;
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label2->Visible = true;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label3->Visible = true;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		double dividend = Convert::ToDouble(textBox1->Text);
		double divisor = Convert::ToDouble(textBox2->Text);


		if (divisor == 0)
		{
			MessageBox::Show("Попытка деления на ноль или извлечения корня из отрицательного числа.",
				"Ошибка деления",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}

		double quotient = dividend / divisor;
		if (quotient < 0)
		{
			MessageBox::Show("Попытка деления на ноль или извлечения корня из отрицательного числа.",
				"Ошибка вычисления",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}


		double result = Math::Sqrt(quotient);

		textBox3->Text =result.ToString("");
		this->Text = result.ToString("");
	}
	catch (FormatException^)
	{
		MessageBox::Show("Ошибка: Введите корректные числовые значения!",
			"Ошибка ввода",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
	catch (OverflowException^)
	{
		MessageBox::Show("Ошибка: Слишком большое или маленькое число!",
			"Переполнение",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Произошла ошибка: " + ex->Message,
			"Ошибка",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { 
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	this->Text = "MyForm";
}
};
}

