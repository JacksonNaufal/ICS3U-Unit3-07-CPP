// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a "random number guesser"


#include <iostream>
#include <random>



int main() {
    // this function is a random number guesser
    int guessNumber;
    int randomNumber;


    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    randomNumber = idist(rgen);


    // input
    std::cout << "Enter your random number (0-9): ";
    std::cin >> guessNumber;
    std::cout << "" << std::endl;
    // process
    if (guessNumber != randomNumber) {
    // output
        std::cout << "Guess is incorrect";
    }
    // process
    if (guessNumber == randomNumber) {
    // output
        std::cout << "Guess is correct";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
