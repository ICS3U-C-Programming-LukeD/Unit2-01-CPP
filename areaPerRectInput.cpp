// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: Feb 25, 2025
// Calculates the area and perimeter of a rectangle with user input

#include <cmath>
// adds math library
#include <iostream>
// adds iostream library
int main() {
    int length;
    // creates a variable to store input for length
    int width;
    // creates a variable to store input for width
    std::cout << "Enter length of rectangle:" << std::endl;
    // prompts user to give length of rectangle
    std::cin >> length;
    // stores user input inside the length variable
    std::cout << "Enter width of rectangle:" << std::endl;
    // prompts user to give width of rectangle
    std::cin >> width;
    // stores user input inside the width variable
    std::cout << "The area is: " << (length * width) << std::endl;
    // performs area calculation and displays answer
    std::cout << "The perimeter is: " << (2 * (length + width)) << std::endl;
    // performs perimeter calculation and displays answer
}
