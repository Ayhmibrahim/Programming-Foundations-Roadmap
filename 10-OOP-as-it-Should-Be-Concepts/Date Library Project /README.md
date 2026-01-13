# Date Library Project (OOP Implementation) 📅

## 🌟 Overview
This project is a fundamental pillar in my journey to master **Object-Oriented Programming (OOP)**. I have built a comprehensive library for date management (`clsDate`), which relies on the robust logic I previously developed during **Level 8** (Algorithms & Problem Solving - Level 4).

## 📈 Evolution: From Level 8 to Level 10
* **Level 8 Roots**: In Level 8, I solved over 60 programming challenges related to date manipulation, leap years, and date arithmetic. You can view the foundational work here:
  🔗 [My Level 8 Project Link (Algorithms & Problem Solving Level 4)](https://github.com/ammmrrr18-cloud/Programming-Foundations-Roadmap/tree/main/08%20-%20Algorithms%20%26%20Problem%20Solving%20Level%204)
* **Transition to OOP**: In Level 10, I refactored and encapsulated all those functionalities into a single, integrated class (`clsDate`) designed for easy reuse in any future project.
* **Compatibility**: The class supports automatically fetching the current system date or processing custom-defined dates.

## 📂 Project Structure
The files are organized to showcase implementation accuracy and allow for comparison with model solutions:
* **`Date-Library-Project-My-Solution`**: Contains my personal implementation of the Date class, covering all required functionalities.
* **`Date-Library-Project-Instructor-Solution`**: Contains the instructor's reference solution for benchmarking and learning best programming practices.

## 🛠 Advanced Features (Developed since Level 8)
The `clsDate` class includes all the features I mastered in Level 8, now optimized for OOP:
- **Leap Year Validation**: Accurately determines if a year is leap or common.
- **Time Difference Calculation**: Calculates the exact number of days between any two dates.
- **Conversions**: Converts dates to strings, handles day order within a year, and identifies day names.
- **Date Arithmetic**: Functions to add or subtract days, weeks, months, or years from a specific date.
- **Comparison Logic**: Methods to compare two dates (Before, After, or Equal).

## 🖥 Usage Example
```cpp
#include <iostream>
#include "clsDate.h"

int main() {
    // A Date object representing today's system date
    clsDate Date1; 
    Date1.Print();

    // Adding 10 days to the current date
    Date1.AddDays(10);
    cout << "Date after 10 days: " << Date1.DateToString() << endl;

    return 0;
}
