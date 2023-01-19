#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj się
*/

/*
Operatory porównania:
* równości				==
* różności				!=
* większości			>
* mniejszości			<
* większe lub równe		>=
* mniejsze lub równe	<=
argument1 >= argument2
Wynikiem działania tych operatorów
jest wartość logiczna true/false typu bool
bool zmienna = true;
bool zmienna2 = 5 > 74;
*/

/*
Napisz funkcję, któa wczyta dwie liczby i wykona dzielenie na nich
*/
void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe (nie podawaj zera):\n";
	std::cin >> secondNumber;

	//iloraz
	int quotient = 0;

	/*if (secondNumber != 0)
		quotient = firstNumber / secondNumber;
	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";
	if (secondNumber == 0)
		std::cout << "Dzielenie przez zero!!!!\n";*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	else
	{
		std::cout << "Dzielenie przez zero!!!!\n";
	}

	std::cout << "Koniec programu\n";
}

/*
Napisz funkjcę, która wczyta liczbę i wyświetli informację
czy jest ona dodatnia czy nie.
*/
void task2()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	if (numberToCheck > 0)
		std::cout << "Liczba większa od zera\n";
	else
		std::cout << "Liczba równa lub mniejsza od zera\n";
}

/*
Napisz funkcję, która wczyta liczbę i wyświetli informację
czy jest ona w zakresie <10, 25>.
*/
void task3()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;
	if (numberToCheck >= 10)
	{
		std::cout << "Liczba jest w zakresie\n";

		if (numberToCheck <= 25)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";

		}
	}
	else
	{

		std::cout << "Liczba nie jest w zakresie\n";
		
	}


}

/*Sprawdź czy liczba jest parzysta*/
void task4()
{
	int Pierwsza;

	std::cout << "Podaj liczbe\n";
	std::cin >> Pierwsza;

	if (Pierwsza % 2 == 0)
		std::cout << "Jest parzysta\n";
	else
		std::cout << "Nie jest parzysta\n";
}
/*Napisz funkcję która wczyta liczbę która będzie bokiem kwadratu i wyświetli informacje o polu i obwodzie*/
void task5()
{
	int bok, wynik;

	std::cout << "Podaj liczbe\n";
	std::cin >> bok;

	if (bok * bok)
		std::cout << "Pole kwadratu wynosi\n";
	wynik = bok * bok;

}
void task6()
{
	int firstNumber, secondNumber;

		std::cout << "Podaj pierwszą liczbe\n";
		std::cin >> firstNumber;

		std::cout << "Podaj druga liczbe\n";
		std::cin >> secondNumber;
		
		if (firstNumber > secondNumber)
			std::cout << "Pierwsza jest wieksza\n";
		else if (firstNumber < secondNumber)
			std::cout << "Druga jest wieksza\n";
		else
			std::cout << "Liczby sa rowne\n";
}
void task7()
{
	int firstNumber,secondNumber,threeNumber;

	std::cout << "Podaj pierwszą liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;
	
	std::cout << "Podaj trzecia liczbe\n";
	std::cin >> threeNumber;

	if (firstNumber > secondNumber && firstNumber > threeNumber)
		std::cout << "Pierwsza jest najwieksza\n";
	else if (secondNumber > threeNumber && secondNumber > firstNumber)
		std::cout << "Druga jest najwieksza\n";
	else
		std::cout << "Trzecia jest najwieksza\n";




}

void task10()
switch (daynumber)
{
		case 1:
			std::cout << "Poniedziałek\n";
			break;
		case 2:
			std::cout << "Wtorek\n";
			break;
		case 3:
			std::cout << "Środa\n";
			break;
		case 4:
			std::cout << "Czwartek\n";
			break;
		case 5:
			std::cout << "Piątek\n";
			break;
		case 6:
			std::cout << "Sobota\n";
			break;
		case 0:
			
		case 7:
			std::cout << "Niedziela\n";
			break;
		default
			std::cout << "błedny dzien\n";






}

void task 11();
	std::cout <<""


/*
Zadanie 7
Napisz funkcję która wczyta trzy liczby i wyświetli największą z nich.

Zadanie 8
Napisz funkcję, która wczyta dwie liczby i wyświetli je w kolejności rosnącej.
Zadanie 9
Napisz funkcję, która wczyta trzy liczby i wyświetli je w kolejności rosnącej.
Zadanie 10
Napisz funkcję, która wczyta numer dnia tygodnia i wyświetli nazwę tego dnia.
Zadanie 11 *   
Napisz funkcję, która wczyta współczynniki równania kwadratowego i wyświetli pierwiastki tego równania*/
int main()

//task1();
//task2();
//task3();
//task4();
//task5();
//task6();
//task7();
//task8();
//task9();
//task10();
task11();

}
