#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class clsStringIO
{
public:

    // ---------- Read ----------
    static string ReadText()
    {
        string text;
        getline(cin, text);
        return text;
    }

    static char ReadCharacter()
    {
        char ch;
        cin >> ch;
        return ch;
    }

    // ---------- Print ----------
    static void PrintEachWord(const vector<string>& vWords)
    {
        for (const string& w : vWords)
            cout << w << endl;
    }

    static void PrintFirstLetterOfEachWord(const string& text)
    {
        bool isFirst = true;
        for (char c : text)
        {
            if (c != ' ' && isFirst)
                cout << c << endl;

            isFirst = (c == ' ');
        }
    }

    static void PrintVowels(const string& text)
    {
        for (char c : text)
        {
            char x = tolower(c);
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                cout << c << " ";
        }
        cout << endl;
    }
};
