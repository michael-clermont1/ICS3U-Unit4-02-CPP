// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is a factorial calculator

#include <iostream>
#include <string>

int main() {
    // this function calculates the factorial
    std::string numberAsString;
    int numberAsInt;
    int loopCounter = 1;
    int sumNumber = 1;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        numberAsInt = std::stoi(numberAsString);
        if (numberAsInt == 0) {
            std::cout << "0! = 1." << std::endl;
        } else if (numberAsInt < 0) {
            std::cout << "not defined." << std::endl;
        } else {
            do {
            sumNumber = sumNumber * loopCounter;
            loopCounter = loopCounter + 1;
            } while (loopCounter <= numberAsInt);
            std::cout << "The sum is " << sumNumber << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
