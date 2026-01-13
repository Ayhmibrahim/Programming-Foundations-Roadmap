#include <iostream>
#include "clsDate.h"

using namespace std;

int main() {
    // 1. Testing Default Constructor (System Date)
    clsDate Date1;
    cout << "Today is: " << Date1.DateToString() << " (" << Date1.DayShortName() << ")" << endl;

    // 2. Testing String Constructor
    clsDate Date2("1/1/2024");
    cout << "Target Date: " << Date2.DateToString() << endl;

    // 3. Date Comparisons
    cout << "\nComparison Results:" << endl;
    cout << "Is Date1 Before Date2? " << (Date1.IsDate1BeforeThanDate2(Date2) ? "Yes" : "No") << endl;
    cout << "Difference in Days: " << clsDate::GetDifferenceInDays(Date2, Date1) << " Days" << endl;

    // 4. Calendar Display
    cout << "\nMonth Calendar for Current Date:";
    clsDate::PrintMonthCalendar(Date1.Month, Date1.Year);

    // 5. Date Manipulation (Increase/Decrease)
    cout << "\nManipulating Dates:" << endl;
    Date1.IncreaseDateByOneMonth();
    cout << "Date After 1 Month: " << Date1.DateToString() << endl;

    Date1.IncreaseDateByXYears(2);
    cout << "Date After 2 Years: " << Date1.DateToString() << endl;

    // 6. Vacation Logic (Business Days)
    clsDate VacationStart(1, 8, 2024);
    short VacationDays = 15;
    clsDate ReturnDate = VacationStart.CalculateVacationReturnDate(VacationDays);

    cout << "\nVacation Details:" << endl;
    cout << "Start Date  : " << VacationStart.DateToString() << endl;
    cout << "Duration    : " << VacationDays << " Business Days" << endl;
    cout << "Return Date : " << ReturnDate.DateToString() << " (" << ReturnDate.DayShortName() << ")" << endl;

    // 7. Practical Checks
    cout << "\nStatus Checks:" << endl;
    cout << "Is Current Year (" << Date1.Year << ") Leap? " << (Date1.IsLeapYear() ? "Yes" : "No") << endl;
    cout << "Is Today a Weekend? " << (clsDate::GetSystemDate().IsWeekEnd() ? "Yes" : "No") << endl;
    cout << "Is Today a Business Day? " << (clsDate::GetSystemDate().IsBusinessDay() ? "Yes" : "No") << endl;

    // 8. Custom Formatting
    cout << "\nCustom Format (Year-Month-Day):" << endl;
    cout << Date1.DateToString(clsDate::enDateFormat::YearMonthDay, "-") << endl;

    system("pause>0");
    return 0;
}