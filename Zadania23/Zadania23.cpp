﻿//LotOfTasks

/*Podstawy programowania:
1. Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
2. Program obliczaj¹cy pole prostok¹ta.
3. Program obliczaj¹cy objêtoœæ sto¿ka.
4. Program obliczaj¹cy pole ko³a.
5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
7. Program obliczaj¹cy objêtoœæ kuli o promieniu r
8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
Instrukcja If:
1. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
2. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
4. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
6.Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
Pêtle:
1. Program sprawdzaj¹cy czy podana liczba jest liczb¹ pierwsz¹ (czyli tak¹, która dzieli siê tylko przez 1 i przez siebie sam¹)
2. Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
3. Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
4. Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹ (czyli tak¹, której suma dzielników (z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
Pêtla for:
1. Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
2. Program obliczaj¹cy sumê liczb od 1 do 100
3. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
4. Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
5. Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
6. Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
7. Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
8. Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
9. Program wyœwietlaj¹cy na ekranie kolejne potêgi 2 od 2^0 do 2^10 (np. 2^0, 2^1, 2^2 itd.)
10. Program wyœwietlaj¹cy na ekranie kolejne elementy ci¹gu a_n = a_{n-1} + a_{n-2}, gdzie a_0=1, a_1=1 (ci¹g ten zaczyna siê od 1, 1, 2, 3, 5, 8, 13 itd.).
Pêtla do-while:
1. Program pytaj¹cy u¿ytkownika o has³o i wyœwietlaj¹cy komunikat "has³o poprawne" lub "has³o niepoprawne" dopóki u¿ytkownik nie poda poprawnego has³a (np. "abc123").
2. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.
Trudniejsze zadania:
1. Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
2. Program obliczaj¹cy najwiêkszy wspólny dzielnik (NWD) dwóch liczb
3. Program obliczaj¹cy najmniejsz¹ wspóln¹ wielokrotnoœæ (NWW) dwóch liczb.
4. Program wyci¹gaj¹cy informacje z numeru PESEL
5. Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
Dla zaawansowanych:
1. Program implementuj¹cy algorytm generowania liczb pseudolosowych (np. algorytm Mersenne Twister).
2. Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
3. Algorytm szyfrowania Morse'a - algorytm szyfruj¹cy, w którym ka¿da litera w tekœcie jest zamieniana na ci¹g znaków "+" i "-", zgodny z kodem Morse'a.
4. Napisz program, który pobiera od u¿ytkownika dwie macierze kwadratowe o takim samym rozmiarze i wyœwietla ich iloczyn.
5. Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
6. Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
7. Napisz grê kó³ko i krzy¿yk.
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>

using namespace std;


//Pêtle:
//1. Program sprawdzaj¹cy czy podana liczba jest liczb¹ pierwsz¹(czyli tak¹, która dzieli siê tylko przez 1 i przez siebie sam¹)
//2. Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
//3. Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami(czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
//4. Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹(czyli tak¹, której suma dzielników(z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).

//2. Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
void task6()
{
    string slowo;
    int i, j;

    cout << "Podaj wyraz,chcesz sprawdzic: "<< endl;
    cin >> slowo;
     
    for (i = 0, j = slowo.length() - 1; i < j; i++, j--)
    {
        if (slowo[i] != slowo[j])
            break;
    }
    if (i < j)
        cout << "Podany wyraz nie jest palindronem" << endl;
    else
        cout << "Podany wyraz jest palindronem" << endl;
}
//7. Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
void task8()
{
    for (int i = 1; i > 11; i++)
    {
        cout << i * i << endl;
    }
}

int main()
{
    task8();

}