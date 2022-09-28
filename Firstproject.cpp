// FirstProject.cpp : This file contains the 'main' function.
//  Program execution begins and ends there.


#include <iostream>

int main()
{
    /*
    Instrukcja do wyświetlania informacji na standardowy strumień wyjścia.
    Domyślnie, jesli nie zostało to zmienione, jest to konsola w której aplikacja
    została uruchomiona.
    Aby wyswietlić na konsoli nalezy użyć std::cout.
    Na konosle wywyłamy za pomoca operatora <<.
    Po nim musi znajdować się dana do wysłania.
    Instrukcję kończymy znakiem średnik.
    "Hello World!\n" - jest to stała o wartości tekstowej.
    Stałe tekstowe są ograniczone znakami cudzysłowu.
    * ' (apostrof) - jesli jest jeden znak
    * " (cudzysłów) - jesli jest zero lub więcej znaków
    W stałych tekstowych moga być wstawiane znaki specjalne. Takie znaki
    zaczynają się od znaku \ (backslash) po którym może się znajdować:
    * jedna litera alfabetu angielskiego
    * trzy cyfry dające liczbę ósemkową
    Przykładowo:
    * \n - symbol oznaczający nową linię.
    * \t - symbol oznaczający znak tabulatora
    * \\ - symbol oznaczający znak \
    * \' - symbol oznaczający znak '
    * \" - symbol oznaczający znak "
    * \141 - symbol ósemkowy oznaczajacy zgodnie z tablicą kodów ASCII znak młaej literki a
    */

    //github.com/IronLittleFox

    std::cout << "Hel\nlo World!\n";
    std::cout << "Hello World!\n";

    std::cout << "Predkosc to km\\h";

    std::cout << "Tabulator\ttabulator\n";

    /*
   56 - stała liczbowa
   Stałe liczowe mogą składać się tylko z:
   * cyfr arabskich: 0,1,2,3,4,5,6,7,8,9
   * znaku + lub - znajdującego się na początku wartości ozaczający znak liczby
   * znaku . (kropka) oznaczający granicę pomiędzy częścią całkowitą a rzeczywistą
   */
    std::cout << -56;
    std::cout << "\n";
    std::cout << "56";
    std::cout << "\n";
    std::cout << +15.5;
    std::cout << "\n";

    /* Jeśli występuje potrzeba wyświetlenia dwóch lub więcej wartości można
    kontynuować instrukcję
    ale te wartości nalezy rozdzielić znakiem <<.
    */
    std::cout << 125.5 << " to jest tekst " << 16 << "\n";

    /*
    Zmienna – konstrukcja programistyczna posiadająca trzy podstawowe atrybuty:
    symboliczną nazwę, miejsce przechowywania i wartość;
    pozwalająca w kodzie źródłowym odwoływać się przy pomocy nazwy do wartości lub miejsca przechowywania.
    Nazwa służy do identyfikowania zmiennej w związku z tym często nazywana jest identyfikatorem.
    Miejsce przechowywania przeważnie znajduje się w pamięci komputera i określane jest przez adres i długość danych.
    Wartość to zawartość miejsca przechowywania.
    Zmienna zazwyczaj posiada również czwarty atrybut: typ, określający rodzaj danych przechowywanych w zmiennej
    i co za tym idzie sposób reprezentacji wartości w miejscu przechowywania. W programie wartość zmiennej może być
    odczytywana lub zastępowana nową wartością, tak więc wartość zmiennej może zmieniać się w trakcie wykonywania programu,
    natomiast dwa pierwsze atrybuty (nazwa i miejsce przechowywania) nie zmieniają się w trakcie istnienia zmiennej.
    Aby wykorzystać zmienne należy je zadeklarować.
    Deklaracja zmiennej w jezyku C++:
    typ_zmiennej nazwa_zmiennej;
    typ_zmiennej - jest to informacja co będziemy przechowywać w zmiennej.
    Przykładowe typy zmiennych:
    * int - typ liczbowy całkowity; zajmuje cztery bajty w pamięci i pozwala przechować wartości od -2 147 483 648 do 2 147 483 647
    * short - typ liczbowy całkowity; zajmuje dwa bajty i pozwala przechować wartości	od -32 768 do 32 767
    * float	- typ liczbowy rzeczywisty; zajmuje cztery bajty i pozwala przechować wartości 3.4E +/- 38 (7 cyfr)
    * bool - typ logiczny; zajmuje jeden bajt i pozwala przechować wartości	false lub true
    Nazwa zmiennej musi być poprawnym identyfikatorem:
    * dozwolone znaki: alfabet angielski a-z oraz A-Z, cyfry arabskie 0-9, podkreślenie _
    * pierwszym znakiem nie może być cyfra
    * nie może być to słowo kluczowe języka
    * musi być uniklana w swojej widoczności (wytłumaczone jest to w trakcie nauki)
    */


    std::cout << "Podaj liczbe:\n";
    int numberFromUser;
    std::cin >> numberFromUser;
    std::cout << "Podano: " << numberFromUser << "\n";
}
