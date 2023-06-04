#pragma once
#include "User.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Login_Label;
	private: System::Windows::Forms::Label^ Password_Label;
	private: System::Windows::Forms::TextBox^ textBox_Login;

	private: System::Windows::Forms::TextBox^ textBox_Password;



	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btn_Entrance;
	private: System::Windows::Forms::Button^ Leave_App;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ btn_Clear;




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
			this->Login_Label = (gcnew System::Windows::Forms::Label());
			this->Password_Label = (gcnew System::Windows::Forms::Label());
			this->textBox_Login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_Entrance = (gcnew System::Windows::Forms::Button());
			this->Leave_App = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Login_Label
			// 
			this->Login_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Login_Label->Location = System::Drawing::Point(20, 119);
			this->Login_Label->Name = L"Login_Label";
			this->Login_Label->Size = System::Drawing::Size(91, 45);
			this->Login_Label->TabIndex = 0;
			this->Login_Label->Text = L"Логин";
			this->Login_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Password_Label
			// 
			this->Password_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password_Label->Location = System::Drawing::Point(12, 193);
			this->Password_Label->Name = L"Password_Label";
			this->Password_Label->Size = System::Drawing::Size(110, 45);
			this->Password_Label->TabIndex = 1;
			this->Password_Label->Text = L"Пароль";
			this->Password_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_Login
			// 
			this->textBox_Login->Location = System::Drawing::Point(126, 129);
			this->textBox_Login->Name = L"textBox_Login";
			this->textBox_Login->Size = System::Drawing::Size(404, 31);
			this->textBox_Login->TabIndex = 2;
			// 
			// textBox_Password
			// 
			this->textBox_Password->Location = System::Drawing::Point(126, 203);
			this->textBox_Password->Name = L"textBox_Password";
			this->textBox_Password->PasswordChar = '*';
			this->textBox_Password->Size = System::Drawing::Size(404, 31);
			this->textBox_Password->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(180, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 45);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Авторизация";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_Entrance
			// 
			this->btn_Entrance->Location = System::Drawing::Point(207, 252);
			this->btn_Entrance->Name = L"btn_Entrance";
			this->btn_Entrance->Size = System::Drawing::Size(157, 34);
			this->btn_Entrance->TabIndex = 6;
			this->btn_Entrance->Text = L"Вход";
			this->btn_Entrance->UseVisualStyleBackColor = true;
			this->btn_Entrance->Click += gcnew System::EventHandler(this, &LoginForm::btn_Entrance_Click);
			// 
			// Leave_App
			// 
			this->Leave_App->BackColor = System::Drawing::Color::Firebrick;
			this->Leave_App->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Leave_App->Location = System::Drawing::Point(527, -4);
			this->Leave_App->Name = L"Leave_App";
			this->Leave_App->Size = System::Drawing::Size(28, 30);
			this->Leave_App->TabIndex = 7;
			this->Leave_App->Text = L"X";
			this->Leave_App->UseVisualStyleBackColor = false;
			this->Leave_App->Click += gcnew System::EventHandler(this, &LoginForm::Leave_App_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(181, 334);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(216, 25);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Зарегистрироваться";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// btn_Clear
			// 
			this->btn_Clear->Location = System::Drawing::Point(18, 297);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Size = System::Drawing::Size(113, 41);
			this->btn_Clear->TabIndex = 13;
			this->btn_Clear->Text = L"Очистить";
			this->btn_Clear->UseVisualStyleBackColor = true;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &LoginForm::btn_Clear_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(551, 368);
			this->Controls->Add(this->btn_Clear);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Leave_App);
			this->Controls->Add(this->btn_Entrance);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_Password);
			this->Controls->Add(this->textBox_Login);
			this->Controls->Add(this->Password_Label);
			this->Controls->Add(this->Login_Label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		public: User^ user = nullptr;
private: System::Void btn_Entrance_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login = this->textBox_Login->Text;
	String^ password = this->textBox_Password->Text;
	if (login->Length == 0 || password->Length == 0) {
		MessageBox::Show("Пароль или логин не введены, введите пароль и логин!",
			"Пароль или логин не введены, введите пароль и логин!", MessageBoxButtons::OK);
		
		return;
	}
	try {
		String^ connString = "Data Source=localhost;Initial Catalog=university;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM user_data WHERE login=@login AND password=@pwd";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@login", login);
		command.Parameters->AddWithValue("@pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->login = reader->GetString(1);
			user->password = reader->GetString(2);
			this->Close();

			MessageBox::Show("Успешная авторизация!",
				"Добро пожаловать!", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Пароль или логин введены неверно!",
				"Пароль или логин введены неверно!", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Ошибка подключения к базе данных, попробуйте позже!");
		MessageBoxButtons::OK;
	}
}
	   public: bool go_to_registration = false;
private: System::Void Leave_App_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->go_to_registration = true;
	this->Close();
}
private: System::Void btn_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox_Login->Text = L"";
	textBox_Password->Text = L"";
}
};
}
