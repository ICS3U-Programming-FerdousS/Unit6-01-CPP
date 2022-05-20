// Copyright (c) 2022 Ferdous Sediqi All rights reserved.
// Created by: Ferdous
// Created on: Sep 2022
// This program we asks the user for a random number 0-9
// we use try and catch statements to see if user entered
// an integer or a string as well as as displaying the answer
// for random number

#include <iostream>
// including string

// import decimal
#include <iomanip>

#include <string>
// including random for random number generator.
#include <random>
main() {
    // variables and constants
    int someRandomNumber;
    std::random_device rseed;
    const int MAX_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;
    int arraOfNumber[MAX_SIZE];
    double sumNumber = 0;
    
    for(int counter = 0; counter < MAX_SIZE; counter++){
        // set random number range
        std::random_device rseed;
        std::mt19937 rgen(rseed()); // mersenne_twister
        std::uniform_int_distribution<int> idist(0,100); // [0,100]
        someRandomNumber = idist(rgen);
        // insert random number inside the array 
        arraOfNumber[counter]= someRandomNumber;
        // display the number and its position in the array
        std::cout << someRandomNumber << " Added to the list at position " << counter<< std::endl;

}
    // loop to add numbers inside the array
    for (int counter = 0; counter < MAX_SIZE; counter++){
        sumNumber = sumNumber + arraOfNumber[counter];
    }
    
    // calculate and display the average
    int averageNum = sumNumber / MAX_SIZE;
    std::cout << std::fixed << std::setprecision(1) 
    << "The average is " << averageNum << std::endl;
}
