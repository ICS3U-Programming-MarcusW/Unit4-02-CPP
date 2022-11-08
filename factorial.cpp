// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Date: Nov 2, 2022
// This program asks the user for a whole number. It
// then calculates the factorial of that number.

#include <iostream>

int main() {
    // initializations
    // the loop counter
    int counter = 0;
    // The answer
    int factorialAnswer = 1;
    // The users number input (as string and integer)
    int userNum;
    std::string userNumAsString;

    // get the users number
    std::cout << "Enter a whole number: ";
    std::cin >> userNumAsString;
    std::cout << std::endl;

    try {
        userNum = std::stoi(userNumAsString);
        if (userNum < 0) {
            // Tell the user they cannot enter a negative number
            std::cout << "Please do not enter a negative number." << std::endl;
        } else {
            // calculate the factorial of the number using a do while loop
            do {
                // Increment by 1
                counter++;
                // Multiplication between the counter and answer as it increases
                factorialAnswer = factorialAnswer * counter;
                // Track the amount of times through the loop
                std::cout << "Tracking " << counter <<
                " times through the loop.\n";
                // While counter is less than the users number, keep executing
            } while (counter < userNum);
            // display the answer to the user
            std::cout << userNum << "! = " << factorialAnswer << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number." << std::endl;
    }

    // Finally statement
    std::cout << "Thanks for playing!" << std::endl;
}
