#include <iostream>
#include "clsString.h"   // String processing class
#include "clsStringIO.h" // String Input/Output helper class

using namespace std;

int main() {
    // 1. Use the IO library to read text from the user
    cout << "Please Enter a String:\n";
    string input = clsStringIO::ReadText();

    // 2. Create an instance of clsString and pass the input text to it
    clsString s1(input);

    cout << "\n-----------------------------------------\n";
    cout << "String Info Summary:\n";
    cout << "-----------------------------------------\n";

    // 3. Access object methods and display results
    cout << "Original Value  : " << s1.Value << endl;
    cout << "Length          : " << s1.Length() << endl;
    cout << "Words Count     : " << s1.CountWords() << endl;
    cout << "Vowels Count    : " << s1.CountVowels() << endl;

    cout << "\n-----------------------------------------\n";
    cout << "Using Your Custom IO Library (clsStringIO):\n";
    cout << "-----------------------------------------\n";

    // 4. Print vowels found in the text using your helper library
    cout << "Vowels Found: ";
    clsStringIO::PrintVowels(s1.Value);

    // 5. Print the first letter of each word using your helper library
    cout << "\nFirst Letter of Each Word:\n";
    clsStringIO::PrintFirstLetterOfEachWord(s1.Value);

    // 6. Split text into a Vector and print each word using your helper library
    cout << "\nPrinting Each Word Separately:\n";
    vector<string> vWords = s1.Split(" ");
    clsStringIO::PrintEachWord(vWords);

    // 7. Test word reversal and update the internal value
    cout << "\n-----------------------------------------\n";
    s1.ReverseWordsInString();
    cout << "After Reversing Words: " << s1.Value << endl;

    system("pause>0");
    return 0;
}