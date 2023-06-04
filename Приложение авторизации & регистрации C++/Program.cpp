#include "LoginForm.h"
#include "RegistrationForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		Login::LoginForm loginForm;
		loginForm.ShowDialog();
		User^ user = nullptr;

		if (loginForm.go_to_registration == true) {
			Registration::RegistrationForm registrationForm;
			registrationForm.ShowDialog();

			if (registrationForm.go_to_login == true) {
				continue;
			}
			else {
				user = registrationForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}
}