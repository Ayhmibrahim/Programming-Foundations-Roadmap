#pragma once
#include <iostream>
#include "clsDate.h"

using namespace std;
class clsInputValidate
{
public:


	static bool IsNumberBetween(short Num, short From, short To)
	{
		return (Num >= From && Num <= To);

	}

	static bool IsNumberBetween(int Num,int From,int To)
	{
		return (Num >= From && Num <= To);
			
	}

	static bool IsNumberBetween(float Num, float From, float To)
	{
		return (Num >= From && Num <= To);
	}

	static bool IsNumberBetween(double Num, double From, double To)
	{
		return (Num >= From && Num <= To);
	}

	static bool IsDateBetween(clsDate Date, clsDate FromDate, clsDate ToDate)
	{

	if(clsDate::CompareDates(Date, FromDate)== clsDate::Equal || clsDate::CompareDates(Date, ToDate)== clsDate::Equal)
		return true;
	if(clsDate::CompareDates(Date, FromDate)== clsDate::After && clsDate::CompareDates(Date, ToDate) == clsDate::Before)
		return true;
	if (clsDate::CompareDates(Date, FromDate) == clsDate::Before && clsDate::CompareDates(Date, ToDate) == clsDate::After)
		return true;


	return false;
	}

	static int ReadIntNumber(string Message)
	{
		int Number;
		cout << "Please enter a number?" << endl;
		cin >> Number;

		while (cin.fail())
		{
			// user didn't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << Message << endl;

			cin >> Number;
		}

		return Number;
	}
	
	static int ReadIntNumberBetween(int From, int To, string ErrorMessage)
	{

		int Number;
		cout << "Please enter a number?" << endl;
		cin >> Number;

		while (true)
		{

			if (cin.fail())
			{
				// user didn't input a number
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

				cout << "Invalid Number, Enter again:" << endl;

				cin >> Number;
				continue;
			}


			if (Number < From || Number > To)
			{
				cout << ErrorMessage << endl;
				cin >> Number;
				continue;

			}
			return Number;
		}
	}

	static double ReadDblNumber(string Message)
	{
		double Number;
		cout << "Please enter a number?" << endl;
		cin >> Number;

		while (cin.fail())
		{
			// user didn't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << Message << endl;

			cin >> Number;
		}

		return Number;
	}

	static double ReadDblNumberBetween(double From, double To, string ErrorMessage)
	{


		double Number;
		cout << "Please enter a number?" << endl;
		cin >> Number;

		while (true)
		{

			if (cin.fail())
			{
				// user didn't input a number
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

				cout << "Invalid Number, Enter again:" << endl;

				cin >> Number;
				continue;
			}


			if (Number < From || Number > To)
			{
				cout << ErrorMessage << endl;
				cin >> Number;
				continue;

			}
			return Number;
		}
	}

	static bool IsValideDate(clsDate Date)
	{
		return clsDate::IsValidDate(Date);
	}
};




