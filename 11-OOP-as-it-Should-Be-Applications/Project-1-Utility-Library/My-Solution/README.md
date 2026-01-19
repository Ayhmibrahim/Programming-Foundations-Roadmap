# Comprehensive C++ Utility Library

This project is a fully integrated C++ library that consolidates all algorithmic solutions and programming problems covered in **Level 5** of the Programming Foundations Roadmap ([Algorithms & Problem Solving – Level 2](https://github.com/ammmrrr18-cloud/Programming-Foundations-Roadmap/tree/main/05%20-%20Algorithms%20%26%20Problem-Solving%20%E2%80%93%20Level%202)).

The solutions have been restructured and refactored into **Static Classes**. This transformation turns individual problem-solving scripts into a professional, reusable utility library that can be easily integrated into any C++ project.



## 📂 Library Components

The library is organized into 4 core interconnected classes:

### 1. Math Utility Class (`clsMathUtil`)
Contains mathematical algorithms and number-related solutions:
* **Validation:** (Prime Numbers, Perfect Numbers, Palindrome Numbers).
* **Rounding & Arithmetic:** (MyRound, MyFloor, MyCeil, MyABS).
* **Randomization:** Generating random numbers within specific ranges.
* **Swap Overloading:** Support for swapping values of all data types (int, string, double, char, bool).

### 2. String Utility Class (`clsStringUtil`)
Handles text processing and basic cryptography solutions:
* **Key Generation:** Creating random formatted security keys.
* **Encryption/Decryption:** Protecting text using character shifting algorithms.
* **Randomization:** Generating random characters, digits, and symbols.

### 3. Array Utility Class (`clsArrayUtil`)
Provides powerful tools for array manipulation and analysis:
* **Statistics:** Finding Max, Min, Sum, and Average of array elements.
* **Processing:** Shuffling elements, copying arrays, and filtering Prime numbers.
* **Search:** Validating element existence and returning their positions.

### 4. Input Utility Class (`clsInputUtil`)
Manages user communication and ensures data integrity:
* **Input Validation:** Ensuring positive numbers or range-specific inputs to prevent runtime errors.
* **Reading Data:** Specialized functions to read (Short, Int, Float, String) with custom prompts.

---

## 🛠️ Systems Integration
The power of this library lies in its interdependency. Classes work together seamlessly—for example, the **Array Utility** uses the **Math Utility** for swapping elements, and the **Input Utility** is used to populate arrays with validated user data. This demonstrates clean code organization for algorithmic solutions.

## 🚀 Quick Start
Include the required header files and call the static methods directly:

```cpp
#include "clsMathUtil.h"
#include "clsStringUtil.h"
#include "clsArrayUtil.h"
#include "clsInputUtil.h"

int main() {
    // Initialize the random number generator
    clsMathUtil::Srand(); 
    
    // Example of swapping string values
    string s1 = "Hello", s2 = "World";
    clsMathUtil::Swap(s1, s2); 
    
    // Example of generating a random security key
    string key = clsStringUtil::GenerateKey();
    
    // Example of reading a validated positive number
    int num = clsInputUtil::ReadPositiveNumber("Please enter a positive ID:");
    
    return 0;
}
