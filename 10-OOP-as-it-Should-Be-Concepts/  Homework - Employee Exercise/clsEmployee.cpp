#include <iostream>

using namespace std;


class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:


    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    int ID()
    {
        return _ID;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName))string FirstName;

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    __declspec(property(get = GetLastName, put = SetLastName))string LastName;

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string GetEmail()
    {
        return _Email;
    }

    __declspec(property(get = GetEmail, put = SetEmail))string Email;

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string GetPhone()
    {
        return _Phone;
    }

    __declspec(property(get = GetPhone, put = SetPhone))string Phone;

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }


    void Print()
    {

        cout << "Info\n\n";
        cout << "-------------------------------\n";
        cout << "ID        : " << _ID << endl;
        cout << "FirstName : " << _FirstName << endl;
        cout << "LastName  : " << _LastName << endl;
        cout << "FullName  : " << FullName() << endl;
        cout << "Email     : " << _Email << endl;
        cout << "Phone     : " << _Phone << endl;
        cout << "-------------------------------\n";
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email : " << _Email << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body    : " << Body << endl;
    }


    void SendSMS(string MessageOfSMS)
    {
        cout << "\nThe following SMS sent successfully to phone : " << _Phone << endl;
        cout << MessageOfSMS << endl;
    }

};

class clsEmployee : public clsPerson
{

private:
    string _Title;
    string _Department;
    float _Salary;

public:


    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
        : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }


    //Property Set
    void setTitle(string Title)
    {
        _Title = Title;
    }

    //Property Get
    string Title()
    {
        return _Title;
    }

    //Property Set
    void setDepartment(string Department)
    {
        _Department = Department;
    }

    //Property Get
    string Department()
    {
        return _Department;
    }

    //Property Set
    void setSalary(float Salary)
    {
        _Salary = Salary;
    }

    //Property Get
    float Salary()
    {
        return _Salary;
    }

    void Print()
    {

        cout << "Info\n\n";
        cout << "-------------------------------\n";
        cout << "ID         : " << ID() << endl;
        cout << "FirstName  : " << GetFirstName() << endl;
        cout << "LastName   : " << GetLastName() << endl;
        cout << "FullName   : " << FullName() << endl;
        cout << "Email      : " << GetEmail() << endl;
        cout << "Phone      : " << GetPhone() << endl;
        cout << "Salary     : " << _Salary << endl;
        cout << "Department : " << _Department << endl;
        cout << "Title      : " << _Title << endl;

        cout << "-------------------------------\n";

    }

};

int main()
{

    clsEmployee Employee(10, "ALi", "Rifai", "my@gmail.com", "0096387727", "Programming", "CEO", 5000);



    Employee.Print();


    return 0;
}