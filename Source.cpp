// Week02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <chrono>
#include <cmath>
#include <random>
#include <string>

// ------

void day01Challenge01() {
    int a, b;
    int *ptrA, *ptrB;
    std::cout << "Input an integer for A: ";
    std::cin >> a;
    std::cout << "Input an integer for B: ";
    std::cin >> b;
    ptrA = &a;
    ptrB = &b;
    std::cout << "The value stored at " << ptrA << " is " << *ptrA << "\n";
    std::cout << "The value stored at " << ptrB << " is " << *ptrB << "\n";
}


int main()
{
    std::cout << "----- LUU Week 03 -----\n-- Anthony Criscione --\n=======================\n\n";

    // Day01
    std::cout << "Day 02:\n";
    day01Challenge01();
    std::cout << std::endl;
    std::cout << "\n-----------------------\n";

    return 0;
}