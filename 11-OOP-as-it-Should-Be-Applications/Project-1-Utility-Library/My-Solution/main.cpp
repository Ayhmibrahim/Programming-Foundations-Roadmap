#include <iostream>
#include <string>
#include "clsMathUtil.h"
#include "clsStringUtil.h"
#include "clsArrayUtil.h"
#include "clsInputUtil.h"

using namespace std;

int main()
{
    clsMathUtil::Srand();

    cout << "\n--- [ SYSTEM 1: INPUT & MATH ] ---" << endl;
    int Num = clsInputUtil::ReadPositiveNumber("Enter a positive number to reverse:");
    cout << "Reversed Number: " << clsMathUtil::GetReverseNumber(Num) << endl;
    cout << "Is Palindrome: " << (clsMathUtil::IsPalindromeNumber(Num) ? "Yes" : "No") << endl;

    int x = 100, y = 500;
    cout << "\n--- [ SYSTEM 2: SWAP OVERLOADING ] ---" << endl;
    cout << "Before Swap: x=" << x << ", y=" << y << endl;
    clsMathUtil::Swap(x, y);
    cout << "After Swap : x=" << x << ", y=" << y << endl;

    string s1 = "Functional", s2 = "Systems";
    cout << "Before Swap: s1=" << s1 << ", s2=" << s2 << endl;
    clsMathUtil::Swap(s1, s2);
    cout << "After Swap : s1=" << s1 << ", s2=" << s2 << endl;

    cout << "\n--- [ SYSTEM 3: STRING & SECURITY ] ---" << endl;
    cout << "Security Key: " << clsStringUtil::GenerateKey() << endl;
    string Text = "Programming";
    string Encrypted = clsStringUtil::EncryptText(Text, 5);
    cout << "Text: " << Text << " | Encrypted: " << Encrypted << endl;
    cout << "Decrypted: " << clsStringUtil::DecryptText(Encrypted, 5) << endl;

    cout << "\n--- [ SYSTEM 4: ARRAY OPERATIONS ] ---" << endl;
    short MyArr[100], ArrLength = 0;
    clsArrayUtil::InputUserNumberInArray(MyArr, ArrLength);

    cout << "\nArray Stats:" << endl;
    clsArrayUtil::PrintArray(MyArr, ArrLength);
    cout << "Max: " << clsArrayUtil::MaxNumberInArray(MyArr, ArrLength) << endl;
    cout << "Min: " << clsArrayUtil::MinimumNumberInArray(MyArr, ArrLength) << endl;
    cout << "Avg: " << clsArrayUtil::AvgOfNumbersInArray(MyArr, ArrLength) << endl;

    cout << "\nShuffling Array..." << endl;
    clsArrayUtil::ShuffleArray(MyArr, ArrLength);
    clsArrayUtil::PrintArray(MyArr, ArrLength);

    cout << "\nGenerating Prime Numbers from 1 to 50:" << endl;
    clsMathUtil::PrintPrimeNumbersFrom1ToN(50);

    return 0;
}
