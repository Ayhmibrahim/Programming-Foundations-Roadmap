
#pragma once

#include <iostream>
#include <string>
#include <math.h>
#include "clsMathUtil.h"
#include "clsStringUtil.h"
#include "clsInputUtil.h"

using namespace std;

class clsArrayUtil
{
public:

    /* Reads array elements from the user */
    static void ReadArray(short Arr[100], short& ArrayLength)
    {
        cout << "Enter number of elements :\n";
        cin >> ArrayLength;

        cout << "\nPlease enter array elements:\n";
        for (short i = 0; i < ArrayLength; i++)
        {
            cout << "Element [" << i + 1 << "] : ";
            cin >> Arr[i];
        }
        cout << endl;
    }

    /* Fills array by random numbers from 1 to 100 - Using clsMathUtil::RandomNumber */
    static void FillArrayByRandomNumbers(short Arr[100], short& ArrayLength)
    {
        cout << "Enter number of elements :\n";
        cin >> ArrayLength;

        for (short i = 0; i < ArrayLength; i++)
        {
            // استدعاء من كلاس سترينج يوتل
            Arr[i] = clsMathUtil::RandomNumber(1, 100);
        }
    }

    /* Prints array elements */
    static void PrintArray(short Arr[100], short ArrayLength)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            cout << Arr[i] << " ";
        }
        cout << endl;
    }

    /* Returns the maximum number in the array */
    static short MaxNumberInArray(short Arr[100], short ArrayLength)
    {
        short MaxNumber = Arr[0];
        for (short i = 1; i < ArrayLength; i++)
        {
            if (Arr[i] > MaxNumber)
                MaxNumber = Arr[i];
        }
        return MaxNumber;
    }

    /* Returns the minimum number in the array */
    static short MinimumNumberInArray(short Arr[100], short ArrayLength)
    {
        short MinimumNumber = Arr[0];
        for (short i = 1; i < ArrayLength; i++)
        {
            if (Arr[i] < MinimumNumber)
                MinimumNumber = Arr[i];
        }
        return MinimumNumber;
    }

    /* Returns the sum of all numbers in the array */
    static short SumOfNumbersInArray(short Arr[100], short ArrayLength)
    {
        short Sum = 0;
        for (short i = 0; i < ArrayLength; i++)
        {
            Sum += Arr[i];
        }
        return Sum;
    }

    /* Returns the average of numbers in the array */
    static float AvgOfNumbersInArray(short Arr[100], short ArrayLength)
    {
        return (float)SumOfNumbersInArray(Arr, ArrayLength) / ArrayLength;
    }

    /* Returns how many times a number is repeated in the array */
    static short TimesRepeated(short Arr[100], short NumberToCheck, short ArrayLength)
    {
        short Counter = 0;
        for (short i = 0; i < ArrayLength; i++)
        {
            if (Arr[i] == NumberToCheck)
                Counter++;
        }
        return Counter;
    }

    /* Copies source array to destination array */
    static void CopiedArray(short ArrSource[100], short ArrDestination[100], short ArrayLength)
    {
        for (short i = 0; i < ArrayLength; i++)
            ArrDestination[i] = ArrSource[i];
    }

    /* Copies only prime numbers - Using clsMathUtil::CheckPrime */
    static void CopyOnlyPrimeNumbers(short ArrSource[100], short ArrDestination[100], short ArrayLength, short& Array2Length)
    {
        short counter = 0;
        for (short i = 0; i < ArrayLength; i++)
        {
            if (clsMathUtil::CheckPrime(ArrSource[i]) == clsMathUtil::enPrimeNotPrime::Prime)
            {
                ArrDestination[counter] = ArrSource[i];
                counter++;
            }
        }
        Array2Length = counter;
    }

    /* Sums two arrays into a third array */
    static void SumOf2Arrays(short Arr[100], short Arr2[100], short ArrSum[100], short ArrayLength)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            ArrSum[i] = Arr[i] + Arr2[i];
        }
    }


    /* Shuffles array elements - Using clsMathUtil::RandomNumber */
    static void ShuffleArray(short Arr[100], short ArrayLength)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            clsMathUtil::Swap(Arr[clsMathUtil::RandomNumber(1, ArrayLength) - 1], Arr[clsMathUtil::RandomNumber(1, ArrayLength) - 1]);
        }
    }

    /* Copies array elements in reverse order */
    static void CopyArrayInReverseOrder(short ArrSource[100], short ArrDestination[100], short ArrayLength)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            ArrDestination[i] = ArrSource[(ArrayLength - 1 - i)];
        }
    }

    /* Fills array by random keys - Using clsStringUtil::GenerateKey */
    static void FillArrayByKeys(string Arr[100], short& ArrayLength)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            Arr[i] = clsStringUtil::GenerateKey();
        }
    }

    /* Prints string array elements */
    static void PrintStringArray(string Arr[100], short ArrayLength)
    {
        cout << "\nArray Elements:\n\n";
        for (short i = 0; i < ArrayLength; i++)
        {
            cout << "Array[" << i << "]: " << Arr[i] << endl;
        }
        cout << endl;
    }

    /* Finds the position of a number in the array */
    static short FindNumberPositionInArray(short Arr[100], short ArrayLength, short NumberToSearch)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            if (Arr[i] == NumberToSearch)
                return i;
        }
        return -1;
    }

    /* Returns true if the number exists in the array */
    static bool IsNumberInArray(short Arr[100], short ArrayLength, short NumberToSearch)
    {
        return FindNumberPositionInArray(Arr, ArrayLength, NumberToSearch) != -1;
    }

    /* Adds a single element to the array and updates length */
    static void AddArrayElement(short Number, short Arr[100], short& ArrayLength)
    {
        ArrayLength++;
        Arr[ArrayLength - 1] = Number;
    }

    /* Copies array using AddArrayElement function */
    static void CopyArrayUsingAddArrayElement(short ArrSource[100], short ArrDestination[100], short ArrayLength, short& Array2Length)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            AddArrayElement(ArrSource[i], ArrDestination, Array2Length);
        }
    }

    /* Copies only odd numbers - Using clsMathUtil::CheckOddOrEven */
    static void CopyOddNumbers(short ArrSource[100], short ArrDestination[100], short ArrayLength, short& Array2Length)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            if (clsMathUtil::CheckOddOrEven(ArrSource[i]) == clsMathUtil::enOddOrEven::Odd)
            {
                AddArrayElement(ArrSource[i], ArrDestination, Array2Length);
            }
        }
    }

    /* Copies only distinct (unique) numbers to another array */
    static void CopyDistinctNumbers(short ArrSource[100], short ArrDestination[100], short ArrayLength, short& Array2Length)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            if (!IsNumberInArray(ArrDestination, Array2Length, ArrSource[i]))
            {
                AddArrayElement(ArrSource[i], ArrDestination, Array2Length);
            }
        }
    }


    /* Checks if the array is a palindrome - Returns Enum from clsMathUtil */
    static clsMathUtil::enPalindromeOrNot IsPalindromeArray(short arr[100], short ArrayLength)
    {
        for (short i = 0; i < ArrayLength / 2; i++)
        {
            if (arr[i] != arr[ArrayLength - 1 - i])
            {
                return clsMathUtil::enPalindromeOrNot::NotPalindrome;
            }
        }
        return clsMathUtil::enPalindromeOrNot::Palindrome;
    }

    /* Returns count of odd numbers - Using clsMathUtil::CheckOddOrEven */
    static short CountOddNumbersInArray(short Arr[100], short ArrayLength)
    {
        short OddCounter = 0;
        for (short i = 0; i < ArrayLength; i++)
        {
            if (clsMathUtil::CheckOddOrEven(Arr[i]) == clsMathUtil::enOddOrEven::Odd)
                OddCounter++;
        }
        return OddCounter;
    }

    /* Returns count of even numbers - Using clsMathUtil::CheckOddOrEven */
    static short CountEvenNumbersInArray(short Arr[100], short ArrayLength)
    {
        short EvenCounter = 0;
        for (short i = 0; i < ArrayLength; i++)
        {
            if (clsMathUtil::CheckOddOrEven(Arr[i]) == clsMathUtil::enOddOrEven::Even)
                EvenCounter++;
        }
        return EvenCounter;
    }

    /* Returns count of positive numbers - Using clsMathUtil::CheckPositiveOrNegative */
    static short CountPositiveNumbersInArray(short Arr[100], short ArrayLength)
    {
        short PositiveCounter = 0;
        for (short i = 0; i < ArrayLength; i++)
        {
            if (clsMathUtil::CheckPositiveOrNegative(Arr[i]) == clsMathUtil::enPositiveOrNegative::Positive)
                PositiveCounter++;
        }
        return PositiveCounter;
    }

    /* Returns count of negative numbers - Using clsMathUtil::CheckPositiveOrNegative */
    static short CountNegativeNumbersInArray(short Arr[100], short ArrayLength)
    {
        short NegativeCounter = 0;
        for (short i = 0; i < ArrayLength; i++)
        {
            if (clsMathUtil::CheckPositiveOrNegative(Arr[i]) == clsMathUtil::enPositiveOrNegative::Negative)
                NegativeCounter++;
        }
        return NegativeCounter;
    }

    /* Fills the array with a fixed set of 10 elements (shuffled duplicates of 10, 50, 70, 90) */
    static void FillArrayWithSemiData(short arr[10], short& ArrayLength)
    {
        ArrayLength = 10;
        arr[0] = 10;
        arr[1] = 10;
        arr[2] = 10;
        arr[3] = 50;
        arr[4] = 50;
        arr[5] = 70;
        arr[6] = 70;
        arr[7] = 70;
        arr[8] = 70;
        arr[9] = 90;
    }

    /* Fills the array with a symmetric set of 6 elements to test Palindrome logic */
    static void FillArrayWithPalindromeData(short arr[6], short& ArrayLength)
    {
        ArrayLength = 6;
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 30;
        arr[4] = 20;
        arr[5] = 10;
    }

    // Repeatedly prompts the user to enter numbers and adds them to the array.
    // It uses clsInputUtil::ReadNumber() for input and asks the user whether to continue or stop.

    static void InputUserNumberInArray(short Arr[100], short& ArrayLength)
    {
        bool AddMore = true;

        do
        {
            // Adds a new element by reading it through the Utility Input Class
            AddArrayElement(clsInputUtil::ReadNumber(), Arr, ArrayLength);

            cout << "\nDo you want to add numbers? [0]:No, [1]:Yes? ";
            cin >> AddMore;

        } while (AddMore);
    }

    /* Copies prime numbers using AddArrayElement function */
    static void CopyPrimeNumbers(short ArrSource[100], short ArrDestination[100], short ArrayLength, short& Array2Length)
    {
        for (short i = 0; i < ArrayLength; i++)
        {
            if (clsMathUtil::CheckPrime(ArrSource[i]) == clsMathUtil::enPrimeNotPrime::Prime)
            {
                AddArrayElement(ArrSource[i], ArrDestination, Array2Length);
            }
        }
    }
};
