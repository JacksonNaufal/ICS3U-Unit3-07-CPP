// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a "random number guesser"


#include <iostream>
#include <random>



int main() {
    // this function is a random number guesser
    std::string age;
    int integerAsNumber;


    // input
    std::cout << "Enter your age!: ";
    std::cin >> age;
    std::cout << std::endl;
    
    // process & output
    try {
        integerAsNumber = std::stoi(age);
        
    if (integerAsNumber >= 25 && integerAsNumber <= 40 ) {
        std::cout << "You're a good age";
    } else {
        std::cout << "You're not a good age";
    }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
