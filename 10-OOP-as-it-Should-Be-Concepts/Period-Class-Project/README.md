# Period Class Project (OOP Implementation) 📅⏳

## 🌟 Overview
This project is an advanced application of **Object-Oriented Programming (OOP)** principles, specifically focusing on the concept of **Composition**. The goal is to manage and validate time periods (Start Date and End Date) by leveraging the `clsDate` class that was previously developed.

## 📈 Evolution and Integration (Programming Background)
* **Level 8 Roots**: I built the core logic for handling dates and complex time calculations in Level 8.
  🔗 [My Level 8 Project Link (Algorithms & Problem Solving Level 4)](https://github.com/ammmrrr18-cloud/Programming-Foundations-Roadmap/tree/main/08%20-%20Algorithms%20%26%20Problem%20Solving%20Level%204)
* **Level 10 Refactoring**: The `clsDate` class was integrated into the `clsPeriod` class to perform complex checks, such as period overlapping, using the **Composition** pattern.

## 📂 Project Structure
The folder is organized to include both my personal solutions and the model solutions for benchmarking:
* **`Period-Class-Project-My-Solution`**: My personal implementation that utilizes my custom Date library.
* **`Period-Class-Project-Instructor-Solution`**: The instructor's reference solution for learning optimization techniques.

## 🛠 Features & Capabilities
- **Overlap Detection**: Check if two time periods intersect with each other.
- **Duration Calculation**: Calculate the total number of days between the start and end dates.
- **Inclusion Testing**: Verify if a specific date falls within a given time period.
- **Overlap Counting**: Determine the exact number of shared days between two different periods.

## 💻 Usage Example
The following example demonstrates how easily the Period class can be used thanks to effective class design:

```cpp
#include <iostream>
#include "clsPeriod.h"

int main() {
    // Creating two time periods
    clsPeriod Period1(clsDate(1, 1, 2024), clsDate(10, 1, 2024));
    clsPeriod Period2(clsDate(5, 1, 2024), clsDate(15, 1, 2024));

    // Overlap Check
    if (Period1.IsOverLapPeriods(Period2)) {
        std::cout << "Periods Overlap!" << std::endl;
    }

    // Calculating Duration for the first period
    std::cout << "Period 1 Duration: " << Period1.PeriodLengthInDays() << " Days" << std::endl;

    return 0;
}
