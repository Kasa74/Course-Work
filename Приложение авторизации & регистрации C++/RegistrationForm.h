#pragma once
#include "User.h"

namespace Registration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для RegisterForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
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
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_ConfirmReg;
	private: System::Windows::Forms::TextBox^ textBox_Login;


	private: System::Windows::Forms::TextBox^ textBox_Password;
	private: System::Windows::Forms::Button^ Leave_App;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_Surname;
	private: System::Windows::Forms::TextBox^ textBox_Name;
	private: System::Windows::Forms::Button^ btn_Clear;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_ConfirmReg = (gcnew System::Windows::Forms::Button());
			this->textBox_Login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->Leave_App = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_Surname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(180, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Регистрация";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Логин";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пароль";
			// 
			// btn_ConfirmReg
			// 
			this->btn_ConfirmReg->Location = System::Drawing::Point(186, 272);
			this->btn_ConfirmReg->Name = L"btn_ConfirmReg";
			this->btn_ConfirmReg->Size = System::Drawing::Size(208, 59);
			this->btn_ConfirmReg->TabIndex = 3;
			this->btn_ConfirmReg->Text = L"Подтвердить регистрацию";
			this->btn_ConfirmReg->UseVisualStyleBackColor = true;
			this->btn_ConfirmReg->Click += gcnew System::EventHandler(this, &RegistrationForm::btn_ConfirmReg_Click);
			// 
			// textBox_Login
			// 
			this->textBox_Login->Location = System::Drawing::Point(140, 181);
			this->textBox_Login->Name = L"textBox_Login";
			this->textBox_Login->ShortcutsEnabled = false;
			this->textBox_Login->Size = System::Drawing::Size(390, 31);
			this->textBox_Login->TabIndex = 4;
			// 
			// textBox_Password
			// 
			this->textBox_Password->Location = System::Drawing::Point(140, 227);
			this->textBox_Password->Name = L"textBox_Password";
			this->textBox_Password->PasswordChar = '*';
			this->textBox_Password->Size = System::Drawing::Size(390, 31);
			this->textBox_Password->TabIndex = 5;
			// 
			// Leave_App
			// 
			this->Leave_App->BackColor = System::Drawing::Color::Firebrick;
			this->Leave_App->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Leave_App->Location = System::Drawing::Point(527, -4);
			this->Leave_App->Name = L"Leave_App";
			this->Leave_App->Size = System::Drawing::Size(28, 30);
			this->Leave_App->TabIndex = 6;
			this->Leave_App->Text = L"X";
			this->Leave_App->UseVisualStyleBackColor = false;
			this->Leave_App->Click += gcnew System::EventHandler(this, &RegistrationForm::Leave_App_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(208, 334);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(172, 25);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Авторизоваться";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistrationForm::linkLabel1_LinkClicked);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 31);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Имя";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 31);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Фамилия";
			// 
			// textBox_Surname
			// 
			this->textBox_Surname->Location = System::Drawing::Point(140, 134);
			this->textBox_Surname->Name = L"textBox_Surname";
			this->textBox_Surname->ShortcutsEnabled = false;
			this->textBox_Surname->Size = System::Drawing::Size(390, 31);
			this->textBox_Surname->TabIndex = 10;
			// 
			// textBox_Name
			// 
			this->textBox_Name->Location = System::Drawing::Point(140, 87);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->ShortcutsEnabled = false;
			this->textBox_Name->Size = System::Drawing::Size(390, 31);
			this->textBox_Name->TabIndex = 11;
			// 
			// btn_Clear
			// 
			this->btn_Clear->Location = System::Drawing::Point(18, 290);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Size = System::Drawing::Size(113, 41);
			this->btn_Clear->TabIndex = 12;
			this->btn_Clear->Text = L"Очистить";
			this->btn_Clear->UseVisualStyleBackColor = true;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &RegistrationForm::btn_Clear_Click);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(551, 368);
			this->Controls->Add(this->btn_Clear);
			this->Controls->Add(this->textBox_Name);
			this->Controls->Add(this->textBox_Surname);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Leave_App);
			this->Controls->Add(this->textBox_Password);
			this->Controls->Add(this->textBox_Login);
			this->Controls->Add(this->btn_ConfirmReg);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegistrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;

	private: System::Void btn_ConfirmReg_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = textBox_Name->Text;
		String^ surname = textBox_Surname->Text;
		String^ login = textBox_Login->Text;
		String^ password = textBox_Password->Text;

		if (login->Length == 0 || password->Length == 0 || name->Length == 0 || surname->Length == 0) {
			MessageBox::Show("Заполните все поля!",
				"Вы заполнили не все поля!", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=localhost;Initial Catalog=university;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM user_data WHERE login=@login";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@login", login);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				MessageBox::Show("Такой аккаунт уже существует!",
					"Зарегистрируйте новый!", MessageBoxButtons::OK);
			}
			else {
				String^ connString = "Data Source=localhost;Initial Catalog=university;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();
				String^ sqlQuery = "INSERT INTO user_data " +
					"(name, surname, login, password) VALUES " +
					"(@name, @surname, @login, @pwd);";

				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@name", name);
				command.Parameters->AddWithValue("@surname", surname);
				command.Parameters->AddWithValue("@login", login);
				command.Parameters->AddWithValue("@pwd", password);

				if (command.ExecuteNonQuery() == 1) {
					MessageBox::Show("Аккаунт был создан!",
						"Аккаунт создан!", MessageBoxButtons::OK);
					user = gcnew User;
					user->name = name;
					user->surname = surname;
					user->login = login;
					user->password = password;
				}
				else {
					MessageBox::Show("Аккаунт не был создан!",
						"Аккаунт не создан!", MessageBoxButtons::OK);
				}

			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Ошибка подключения к базе данных, попробуйте позже!");
			MessageBoxButtons::OK;
		}
	}

	public: bool go_to_login = false;
	private: System::Void Leave_App_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->go_to_login = true;
		this->Close();
	}
	private: System::Void btn_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox_Name->Text = L"";
		textBox_Surname->Text = L"";
		textBox_Login->Text = L"";
		textBox_Password->Text = L"";
	}
};
}
