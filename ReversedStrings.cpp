//
// ReversedStrings.cpp
// Created by Christine on 2/8/2026.
//

#include <algorithm>
#include <iostream>

// Apply namespace std
using namespace std;
int main() {
    // Store User Input
    string oneWord;
    // Return Newline + Request User Input + Return Newline
    cout << "\nEnter a word: \n";
    cin >> oneWord;
    reverse(oneWord.begin(), oneWord.end());
    // Return Newline + Output Statement
    cout << "\nYour word REVERSED is: " << oneWord << endl;
    // Return Zero
    return 0;
}