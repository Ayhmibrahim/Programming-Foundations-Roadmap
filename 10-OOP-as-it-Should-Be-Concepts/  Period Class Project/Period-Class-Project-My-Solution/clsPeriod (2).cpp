#include <iostream>
#include "clsPeriod.h"

using namespace std;

int main() {
    // 1. Define two periods using clsDate objects
    cout << "--- Period 1 Information ---\n";
    clsPeriod Period1(clsDate(1, 1, 2024), clsDate(10, 1, 2024));
    Period1.Print();
    cout << "Length: " << Period1.PeriodLengthInDays() << " Days" << endl;

    cout << "\n--- Period 2 Information ---\n";
    clsPeriod Period2(clsDate(5, 1, 2024), clsDate(15, 1, 2024));
    Period2.Print();
    cout << "Length: " << Period2.PeriodLengthInDays() << " Days" << endl;

    // 2. Check if Period 1 and Period 2 overlap
    cout << "\n--- Overlap Analysis ---\n";
    if (Period1.IsOverLapPeriods(Period2)) {
        cout << "Result: The periods overlap." << endl;
        cout << "Number of overlap days: " << Period1.CountOverLapDays(Period2) << " Days" << endl;
    }
    else {
        cout << "Result: No overlap detected." << endl;
    }

    // 3. Check if a specific date falls within a period
    clsDate TestDate(7, 1, 2024);
    cout << "\n--- Date Inclusion Test ---\n";
    cout << "Checking if " << TestDate.DateToString() << " is within Period 1: ";
    if (Period1.IsDateWithinPeriod(TestDate))
        cout << "Yes, it is." << endl;
    else
        cout << "No, it is not." << endl;

    // 4. Testing Swap Periods
    cout << "\n--- Swapping Periods ---\n";
    cout << "Before Swap -> Period 1 Start: " << Period1.PeriodLengthInDays() << " Days\n";
    Period1.SwapPeriods(Period2);
    cout << "After Swap  -> Period 1 Start: " << Period1.PeriodLengthInDays() << " Days\n";

    system("pause>0");
    return 0;
}