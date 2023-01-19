// PROJEKT 2 KACPER DYK.cpp : This file contains the 'main' function. Program execution begins and ends there.
// s

#include <iostream>
#include <cmath>+


void task1()
{
    int firstnumber;
    int secondNumber;
    std::cout << "Podaj pierwsza liczbe:\n";
    std::cin >> firstnumber;
    std::cout << "Podaj druga liczbe:\n";
    std::cin >> secondNumber;

    //suma,roznica       iloczyn ,iloraz, reszta z dzielenia
    int sum, difference, product, quotient, rest;   



    sum = firstnumber + secondNumber;
    difference = firstnumber - secondNumber;
    product = firstnumber * secondNumber;
    quotient = firstnumber / secondNumber;
    rest = firstnumber % secondNumber;
 

    std::cout << "Suma: " << sum << "\n";
    std::cout << "roznica: " << difference << "\n";
    std::cout << "Iloczyn: " << product << "\n";
    std::cout << "Iloraz:  " << quotient << "\n";
    std::cout << "reszta z dzielenia:  " << rest << "\n";

  

}
/*
Przetestowac ró¿ne warianty dzielenia
*/
void task2()
{
    std::cout << "15 / 4 = " << (15 / 4) << '\n';
    std::cout << "15.0 / 4 = " << (15.0 / 4) << '\n';
    std::cout << "15 / 4.0 = " << (15 / 4.0) << '\n';
    std::cout << "15.0 / 4.0 = " << (15.0 / 4.0) << '\n';
    
}

    void task3()
        /*
        Napisz funkcje która obliczy pole trójk¹ta
        */
    {
        float base, height;
        std::cout << "Podaj podstawe trojkata =\n";
        std::cin >> base;

    
            std::cout << "Podaj wysokosc trojkata =\n";
            std::cin >> height;
            
            float area;
            area = 0.5 * base * height;
            std::cout <<"Pole trojkata wynosi:" <<area << "\n"; 

       }
    void task4()
        /* Napisz funkcje która obliczy przek¹tn¹ kwadratu*/
    {
        float side;
        std::cout << "Podaj przekatna kwadratu\n";
            std::cin >> side;
        float diagonal;
        diagonal = side * sqrt(2);
            std::cout << "Przekatna kwadratu:" << diagonal << "\n";
    }
    void task5()
    {
        std::cout << "20*5 = " << (20 * 5) << '\n';

    }

int main()
{
    //task1();
    //task2();
    //task3();
    //task4();
    task5();




}

