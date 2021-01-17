#include <iostream>     // standardowa biblioteka, która umożliwia zastosowanie funkcji cout

using namespace std;    // taki zapis pozwala na skrocenie zapisu std::cout do samego cout

int main()              // funkcja main, ktora jest zawsze odpalana w pierwszej kolejnosci
{                       // w taki sposob definiujemy zmienne
    int zmienna1;       // int od integer, czyli liczby calkowite
    float zmienna2;     // float, liczby zmiennoprzecinkowe, do 6,7 miejsc po przecinku
    double zmienna3;    // double czyli podwojne, liczby zmiennoprzecinkowe, do 15, 16 miejsc po przecinku
    char zmienna4;      // char czyli character, pojedynczy znak, najczesciej litera
    string zmienna5;

    // cout to skrot od 'console output', funkcja umozliwia wyswietlanie napisow w konsoli

    cout << "zmienna typu INT: " << zmienna1 << endl;
    cout << "zmienna typu FLOAT: " << zmienna2 << endl;
    cout << "zmienna typu DOUBLE: " << zmienna3 << endl;
    cout << "zmienna typu CHAR: " << zmienna4 << endl;
    cout << "zmienna typu STRING: " << zmienna5 << endl;
    cout << endl;

    cout << "rozmiar zmiennej INT:" << sizeof(zmienna1) << endl;
    cout << "rozmiar zmiennej FLOAT: " << sizeof(zmienna2) << endl;
    cout << "rozmiar zmiennej DOUBLE: " << sizeof(zmienna3) << endl;
    cout << "rozmiar zmiennej CHAR: " << sizeof(zmienna4) << endl;
    cout << "rozmiar zmiennej STRING: " << sizeof(zmienna5) << endl;
    cout << endl;

    cout << "adres zmiennej INT:" << &zmienna1 << endl;
    cout << "adres zmiennej FLOAT: " << &zmienna2 << endl;
    cout << "adres zmiennej DOUBLE: " << &zmienna3 << endl;
    cout << "adres zmiennej CHAR: " << &zmienna4 << endl;
    cout << "adres zmiennej STRING: " << &zmienna5 << endl;
    cout << endl;

    zmienna1 = 1;
    zmienna2 = 2.4;
    zmienna3 = 128000;
    zmienna4 = 'c';
    zmienna5 = "COVID is alive and influenza is dead.";

    cout << "zmienna typu INT: " << zmienna1 << endl;
    cout << "zmienna typu FLOAT: " << zmienna2 << endl;
    cout << "zmienna typu DOUBLE: " << zmienna3 << endl;
    cout << "zmienna typu CHAR: " << zmienna4 << endl;
    cout << "zmienna typu STRING: " << zmienna5 << endl;
    cout << endl;

    cout << "rozmiar zmiennej INT:" << sizeof(zmienna1) << endl;
    cout << "rozmiar zmiennej FLOAT: " << sizeof(zmienna2) << endl;
    cout << "rozmiar zmiennej DOUBLE: " << sizeof(zmienna3) << endl;
    cout << "rozmiar zmiennej CHAR: " << sizeof(zmienna4) << endl;
    cout << "rozmiar zmiennej STRING: " << sizeof(zmienna5) << endl;
    cout << endl;

    cout << "adres zmiennej INT:" << &zmienna1 << endl;
    cout << "adres zmiennej FLOAT: " << &zmienna2 << endl;
    cout << "adres zmiennej DOUBLE: " << &zmienna3 << endl;
    cout << "adres zmiennej CHAR: " << &zmienna4 << endl;
    cout << "adres zmiennej STRING: " << &zmienna5 << endl;

    return 0;
}
