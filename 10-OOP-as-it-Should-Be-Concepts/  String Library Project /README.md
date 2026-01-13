# String Library Project (OOP Implementation) 🧵

## 🌟 Overview
This project represents a significant milestone in my programming journey. It is a comprehensive **String Utility Library** that bridges the gap between functional programming and **Object-Oriented Programming (OOP)**.

The core logic of this library was originally developed during **Level 7** (Algorithms & Problem Solving - Level 3), and it has been refactored and enhanced here in **Level 10** to adhere to "OOP as it should be" concepts.

## 📈 Evolution: From Level 7 to Level 10
* **Level 7 Roots**: In Level 7, I built these functions as standalone procedural tools to solve complex string manipulation problems. You can view the original logic I started with here:
  🔗 [My Level 7 Project Link (Algorithms & Problem Solving Level 3)](https://github.com/ammmrrr18-cloud/Programming-Foundations-Roadmap/tree/main/07%20-%20Algorithms%20%26%20Problem%20Solving%20Level%203)
* **Level 10 Refactoring**: In this level, I encapsulated those functions into the `clsString` class to function as an integrated object.
* **Versatility**: The library now provides both **Static Methods** (utility style) and **Non-Static Methods** (object-oriented style).

## 📂 Project Structure
* **`String-Library-Project-My-Solution`**: Contains my personal implementation, including the `clsStringIO` helper utility.
* **`String-Library-Project-Instructor-Solution`**: The instructor's reference solution for comparison and performance optimization.

## 🛠 Key Features (Developed since Level 7)
The `clsString` class includes all the tools I previously developed, now accessible through an OOP interface:
- **Tokenization**: Advanced `Split` method to convert strings into a `vector<string>`.
- **Word Processing**: Count words, reverse word order, and extract the first letter of each word.
- **Case Control**: `UpperAll`, `LowerAll`, and `InvertAllLettersCase` for flexible text formatting.
- **Trimming**: Precise `TrimLeft`, `TrimRight`, and `Full Trim` to clean up strings.
- **Search & Replace**: Intelligent word replacement with case-sensitivity options.

## 💻 How to Run
To use this library, ensure that the `clsString.h` file is in your project directory.

```cpp
#include <iostream>
#include "clsString.h"

int main() {
    // Creating an object using logic developed since Level 7
    clsString S1("Programming Advices - Level 10");

    cout << "Word Count: " << S1.CountWords() << endl;
    
    // Using the static method
    vector<string> vWords = clsString::Split("Welcome to OOP", " ");
    
    return 0;
}
