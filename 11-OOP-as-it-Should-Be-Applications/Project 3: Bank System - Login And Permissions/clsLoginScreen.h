#pragma once
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "Global.h"
#include "clsMainScreen.h"

class clsLoginScreen :protected clsScreen
{

private:

	static void _Login()
	{
		string UserName, Password;
		bool LoginFailed = false;
		short Trials = 3;
		do
		{	
			

			if (LoginFailed)
			{
				cout << "\nInvalid UserName / Password..!\n\n";
				--Trials;
			}


			if (Trials == 0)
			{
				cout << "\nYou have exhausted all login attempts!\n";
				return;
			}
				

			cout << "\nYou have " << Trials << " Trials to try Logining\n\n";


			UserName = clsInputValidate::ReadString("Enter Username ?");
			Password = clsInputValidate::ReadString("Enter Password ?");
			
			CurrentUser = clsUser::Find(UserName, Password);

			LoginFailed = CurrentUser.IsEmpty();
			

		} while (LoginFailed);

		clsMainScreen::ShowMainMenue();
	}


public:


	static void ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("\tLogin Screen");
		_Login();



	}






};

