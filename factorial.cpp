// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Uses a do-while loop to calculate factorial of a number entered
// by the user
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    // initializing variables
    int loopCount = 0, factorial = 1, numInt;
    string uNum;

    cout << "Enter a number to be factorialized: ";
    cin >> uNum;

    // catching any invalid input
    try {
        numInt = stoi(uNum);

        // will only continue if the number is in the "whole" dataset
        if (numInt >= 0) {
            // Do while is for looping thorugh and calculating the
            do {
                loopCount += 1;
                cout << loopCount << " times through loop." << endl;
                factorial = factorial * loopCount;
            } while (loopCount < numInt);

            cout << "The factorial of " << numInt << " is " << factorial;
        } else {
            cout << "Can not be a negative number.";
        }
    } catch (...) {
        cout << "Invalid input";
    }
}
