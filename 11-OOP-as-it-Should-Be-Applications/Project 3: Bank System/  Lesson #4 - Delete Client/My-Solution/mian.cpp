#include <iostream>
#include "clsPerson.h"
#include "clsBankClient.h"
#include "clsInputValidate.h"

void DeleteClient()
{
    string AccountNumber = "";

    cout << "Please enter an account number ?" << endl;
    cin >> AccountNumber;
    while (!clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount Number is not exist,Please enter an another one : ";
        cin >> AccountNumber;
    }



    clsBankClient Client = clsBankClient::GetDeleteClientObject(AccountNumber);
    Client.Print();

    char y = 'a';
    cout << "\nAre you sure that you want to delete this Client (Y or N) ?\n";
    cin >> y;

    if (tolower(y)!='y')
    {
        cout << "\nNot Deleted this Client .... \n";
        return;
    }


    

    clsBankClient::enSaveResults SaveResult;

    SaveResult = Client.Save();

    switch (SaveResult)
    {
    case  clsBankClient::enSaveResults::svSucceeded:
    {
        cout << "\nAccount Addeded Successfully :-)\n";
        Client.Print();
        break;
    }
    case clsBankClient::enSaveResults::svFaildEmptyObject:
    {
        cout << "\nError account was not saved because it's Empty";
        break;

    }
    case clsBankClient::enSaveResults::svFaildAccountNumberExists:
    {
        cout << "\nError account was not saved because account number is used!\n";
        break;

    }
    case clsBankClient::enSaveResults::svFaildAccountNumberNotExists:
    {
        cout << "\nError account was not Deleted because account number is not Exists !\n";
        break;
    }
    case clsBankClient::enSaveResults::svDeleteAccountNumber:
    {
        cout << "\nAccount is Deleted successfully :-)\n";
        break;
    }


    }

}

int main()

{
    DeleteClient();
    system("pause>0");
    return 0;
}
