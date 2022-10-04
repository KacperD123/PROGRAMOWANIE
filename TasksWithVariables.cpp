// PROJEKT 2 KACPER DYK.cpp : This file contains the 'main' function. Program execution begins and ends there.
// s

#include <iostream>

void task1()
{
    int firstnumber;
    int secondNumber;
    std::cout << "Podaj pierwsza liczbe:\n";
    std::cin >> firstnumber;
    std::cout << "Podaj druga liczbe:\n";
    std::cin >> secondNumber;

    //suma,roznica       iloczyn ,iloraz
    int sum, difference, product, quotient;
    sum = firstnumber + secondNumber;
    difference = firstnumber - secondNumber;
    product = firstnumber * secondNumber;
    quotient = firstnumber / secondNumber;


    std::cout << "Suma: " << sum << "\n";
    std::cout << "roznica: " << difference << "\n";
    std::cout << "Iloczyn: " << product << "\n";
    std::cout << "Iloraz:  " << quotient << "\n";

}

int main()
{
    task1();
}

