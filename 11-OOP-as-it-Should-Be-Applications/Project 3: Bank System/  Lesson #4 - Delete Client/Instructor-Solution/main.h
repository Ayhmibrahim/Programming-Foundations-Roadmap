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

    clsBankClient Client1 = clsBankClient::Find(AccountNumber);
    Client1.Print();

    char Answer;
    cout << "\nAre you sure that you want to delete this Client (y or n) ?";
    cin >> Answer;

    if (Answer == 'y' || Answer == 'Y')
    {
        if (Client1.Delete())
        {
            cout << "Deleted Successfully\n";
        }
        else
        {
            cout << "Client Not Found\n";
        }

    }



}

int main()

{
    DeleteClient();
    system("pause>0");
    return 0;
}
