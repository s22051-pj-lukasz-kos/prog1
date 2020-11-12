/*
Program napisany na lekcji mial na celu jedynie prezentacje typow danych
*/

#include <iostream>     // standardowa biblioteka, która umo¿liwia zastosowanie funkcji cout

using namespace std;    // taki zapis pozwala na skrocenie zapisu std::cout do samego cout
                        // tutaj deklarujemy zmienne
int licz1 = 4;
int licz2;
int wynik = 0;

int main()              // funkcja main, ktora jest zawsze odpalana w pierwszej kolejnosci
{
    setlocale(LC_ALL, "Polish");

    // cout to skrot od 'console output', funkcja umozliwia wyswietlanie napisow w konsoli

    cout << "wynik = " << wynik << endl;
    wynik = 44 + 888;
    cout << "wynik = " << wynik << endl;

    wynik = licz1 * 2;
    cout << " wynik = " << wynik << endl;

    licz2 = 5;

    wynik = licz1 / licz2;
    cout << "wynik = " << wynik << endl;

    cout << "Po zastosowaniu stumienia CIN" << endl;

    cout << "Podaj pierwsz¹ liczbê: " << endl;
    cin >> licz1;

    cout << "Podaj drug¹ liczbê: " << endl;
    cin >> licz2;

    wynik = licz1 * licz2;
    cout << "Wynik mno¿enia to " << wynik << endl;

    return 0;
}
