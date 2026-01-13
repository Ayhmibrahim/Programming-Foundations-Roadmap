#include <iostream>
#include <string>

using namespace std;

class clsPerson
{
private:
    // Private data members
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    // Constructor to initialize the object
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // Read Only Property for ID
    int ID()
    {
        return _ID;
    }

    // Property Set for FirstName
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    // Property Get for FirstName
    string FirstName()
    {
        return _FirstName;
    }

    // Property Set for LastName
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    // Property Get for LastName
    string LastName()
    {
        return _LastName;
    }

    // Property Set for Email
    void setEmail(string Email)
    {
        _Email = Email;
    }

    // Property Get for Email
    string Email()
    {
        return _Email;
    }

    // Property Set for Phone
    void setPhone(string Phone)
    {
        _Phone = Phone;
    }

    // Property Get for Phone
    string Phone()
    {
        return _Phone;
    }

    // Function to return the full name
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    // Function to print all person information
    void Print()
    {
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID        : " << _ID;
        cout << "\nFirstName : " << _FirstName;
        cout << "\nLastName  : " << _LastName;
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << _Email;
        cout << "\nPhone     : " << _Phone;
        cout << "\n___________________\n";
    }

    // Function to simulate sending an email
    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body << endl;
    }

    // Function to simulate sending an SMS
    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: " << _Phone;
        cout << "\n" << TextMessage << endl;
    }
};

int main()
{
    // Creating an object of clsPerson and passing data to the constructor
    clsPerson Person1(10, "Ali", "RIfai", "my@gmail.com", "0096387727");

    // Calling the Print function
    Person1.Print();

    // Calling communication functions
    Person1.SendEmail("Hi", "How are you?");
    Person1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}