// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program converts grade levels to percentages

#include <iostream>
#include <string>

int PercentageCalculation(std::string level) {
    // This function converts the level to a percentage
    int percentage;

    if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 90;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 75;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 65;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 55;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R") {
        percentage = 0;
    } else {
        percentage = -1;
    }

    return percentage;
}


main() {
    // This function gets the grade level
    std::string levelInputString;
    int calculatedPercentage;

    // Input
    std::cout << "This program converts grade levels to percentages."
        << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter a grade level: ";
    std::cin >> levelInputString;

    // Call functions
    calculatedPercentage = PercentageCalculation(levelInputString);

    // Output
    if (calculatedPercentage == -1) {
        std::cout << "" << std::endl;
        std::cout << "-1" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Done." << std::endl;
    } else {
        std::cout << "" << std::endl;
        std::cout << "Level " << levelInputString << " is "
            << calculatedPercentage <<"%." << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Done." << std::endl;
    }
}
