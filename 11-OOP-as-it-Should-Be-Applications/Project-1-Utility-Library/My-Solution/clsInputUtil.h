
#pragma once

#include <iostream>
#include <string>

using namespace std;

class clsInputUtil
{
public:

	/* Reads a positive integer from the user, keeps asking if the number is <= 0 */
	static int ReadPositiveNumber(string Message)
	{
		int Number = 0;

		do
		{
			cout << Message << endl;
			cin >> Number;

		} while (Number <= 0);

		return Number;
	}

	/* Reads a short integer from the user with a prompt message */
	static short ReadNumber()
	{
		short Number = 0;

		cout << "Please enter a number?" << endl;
		cin >> Number;

		return Number;
	}

	/* Reads a float number from the user */
	static float ReadfloatNumber()
	{
		float Number;

		cout << "Please enter a number ?\n";
		cin >> Number;
		return Number;
	}

};
