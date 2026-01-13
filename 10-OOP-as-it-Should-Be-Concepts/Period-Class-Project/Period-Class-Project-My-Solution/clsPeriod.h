#pragma once
#include"clsDate.h"

using namespace std;

class clsPeriod
{
private:
	clsDate StartDate;
	clsDate EndDate;


	
public:

	clsPeriod(clsDate StartDate, clsDate EndDate)
	{
		this->StartDate = StartDate;
		this->EndDate = EndDate;
	}





	/* Alternative Method: Using comprehensive logic to check every overlap case. */
	/*static bool IsPeriodsOverLap(clsPeriod &Period1, clsPeriod &Period2)
	{
		if (clsDate::CompareDates(Period1.StartDate, Period2.StartDate) == clsDate::enCompareDates::Equal || clsDate::CompareDates(Period1.EndDate, Period2.EndDate) == clsDate::enCompareDates::Equal)
			return true;
		else if (clsDate::CompareDates(Period1.StartDate, Period2.EndDate) == clsDate::enCompareDates::Equal || clsDate::CompareDates(Period1.EndDate, Period2.StartDate) == clsDate::enCompareDates::Equal)
			return true;
		else if (clsDate::CompareDates(Period1.StartDate, Period2.StartDate) == clsDate::enCompareDates::Before && clsDate::CompareDates(Period1.EndDate, Period2.EndDate) == clsDate::enCompareDates::After)
			return true;
		else if (clsDate::CompareDates(Period1.StartDate, Period2.StartDate) == clsDate::enCompareDates::After && clsDate::CompareDates(Period1.EndDate, Period2.EndDate) == clsDate::enCompareDates::Before)
			return true;
		else if (clsDate::CompareDates(Period1.EndDate, Period2.StartDate) == clsDate::enCompareDates::After && clsDate::CompareDates(Period1.StartDate, Period2.EndDate) == clsDate::enCompareDates::Before)
			return true;
		else if (clsDate::CompareDates(Period2.EndDate, Period1.StartDate) == clsDate::enCompareDates::After && clsDate::CompareDates(Period2.StartDate, Period1.EndDate) == clsDate::enCompareDates::Before)
			return true;

		return false;
	}
	bool IsPeriodsOverLap(clsPeriod Period2)
	{
		return IsPeriodsOverLap(*this, Period2);
	}*/


	static int PeriodLengthInDays(clsPeriod& Period, bool IncludeEndDay = false)
	{
		return clsDate::GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludeEndDay);
	}
	int PeriodLengthInDays(bool IncludeEndDay = false)
	{
		return clsPeriod::PeriodLengthInDays(*this, IncludeEndDay);
	}



	static bool IsDateWithinPeriod(clsPeriod& Period, clsDate& Date)
	{
		if (clsDate::CompareDates(Date, Period.StartDate) == clsDate::enCompareDates::Before
			|| clsDate::CompareDates(Date, Period.EndDate) == clsDate::enCompareDates::After)
			return false;
		else
			return true;
	}
	bool IsDateWithinPeriod(clsDate& Date)
	{
		return IsDateWithinPeriod(*this, Date);
	}
	

	static bool IsOverLapPeriods(clsPeriod &Period1, clsPeriod &Period2)
	{
		if (clsDate::CompareDates(Period2.EndDate, Period1.StartDate) == clsDate::enCompareDates::Before
			|| clsDate::CompareDates(Period2.StartDate, Period1.EndDate) == clsDate::enCompareDates::After)
			return false;
		else
			return true;
	}
	bool IsOverLapPeriods(clsPeriod& Period2)
	{
		return IsOverLapPeriods(*this, Period2);
	}


	static void SwapPeriods(clsPeriod& P1, clsPeriod& P2)
	{
		clsPeriod Temp = P1;
		P1 = P2;
		P2 = Temp;
	}
	void SwapPeriods(clsPeriod& P2)
	{
		 SwapPeriods(*this, P2);
	}

	static short CountOverLapDays(clsPeriod Period1, clsPeriod Period2)
	{
		if (IsOverLapPeriods(Period1, Period2))
		{
			short OverLapDaysCounter = 0;

			if (clsDate::CompareDates(Period2.StartDate, Period1.StartDate) == clsDate::enCompareDates::Before)
			{
				SwapPeriods(Period1, Period2);
			}

			if (clsDate::CompareDates(Period2.StartDate, Period1.StartDate) == clsDate::enCompareDates::Equal)
			{
				Period2.StartDate = clsDate::IncreaseDateByOneDay(Period2.StartDate);
			}

			while (clsDate::CompareDates(Period2.StartDate, Period1.EndDate) == clsDate::enCompareDates::Before)
			{
				if (IsDateWithinPeriod(Period1, Period2.StartDate))
				{
					OverLapDaysCounter++;
					Period2.StartDate = clsDate::IncreaseDateByOneDay(Period2.StartDate);
				}
				else
					break;
			}

			return OverLapDaysCounter;
		}

		return 0;
	}
	short CountOverLapDays(clsPeriod& Period2)
	{
		return CountOverLapDays(*this, Period2);
	}



	void Print()
	{
		cout << "Period Start: ";
		StartDate.Print();


		cout << "Period End: ";
		EndDate.Print();


	}



};
  