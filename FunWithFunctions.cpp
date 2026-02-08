//
// FunWithFunctions.cpp
// Created by Christine on 2/8/2026.
//

#include <iostream>

// Apply namespace std
using namespace std;
int main()
{
    // Store User Input
    int firstNumber, secondNumber;
    // Return Newline + Request User Input + Return Newline
    cout << "\nEnter first number: \n";
    cin >> firstNumber;
    // Return Newline + Request User Input + Return Newline
    cout << "\nEnter second number: \n";
    cin >> secondNumber;
    // Sum of 2 Ints
    int result = firstNumber + secondNumber;
    // Return Newline + Output Statement
    cout << "\nThe sum of the two numbers is: " << result << endl;
    int largestNumber = max(firstNumber, secondNumber);
    int smallestNumber = min(firstNumber, secondNumber);
    cout << "\nThe largest number is: " << largestNumber << endl;
    cout << "\nThe smallest number is: " << smallestNumber << endl;
    return 0;
}