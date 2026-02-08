//
// LargestOfThree.cpp
// Created by Christine on 1/25/2026.
//

#include <iostream>
// Apply namespace std
using namespace std;
int main() {
    // Store User Input
    int firstNumber, secondNumber, thirdNumber;
    // Return Newline + Request User Input + Return Newline
    cout << "\nEnter first number: \n";
    cin >> firstNumber;
    // Return Newline + Request User Input + Return Newline
    cout << "\nEnter second number: \n";
    cin >> secondNumber;
    // Return Newline + Request User Input + Return Newline
    cout << "\nEnter third number: \n";
    cin >> thirdNumber;
    if (firstNumber > secondNumber && firstNumber > thirdNumber) {
        // block of code to be executed if the condition is true
        cout << "\nThe 1st number, " << firstNumber << ", is greater than second and third numbers.\n" << endl;
    }
    else if (secondNumber > firstNumber && secondNumber > thirdNumber) {
        // block of code to be executed if the condition is true
        cout << "\nThe 2st number, " << secondNumber << ", is greater than first and third numbers.\n" << endl;
    }
    else {
        // block of code to be executed if neither of the above conditions is true
        cout << "\nThe 3rd number, " << thirdNumber << ", is greater than first and second numbers.\n" << endl;
        return 0;
    }
}