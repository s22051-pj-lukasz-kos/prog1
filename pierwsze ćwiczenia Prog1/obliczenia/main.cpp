/*
Program napisany na lekcji mial na celu jedynie prezentacje typow danych
*/

#include <iostream>

using namespace std;

int licz1 = 4;
int licz2;
int wynik = 0;

int main()
{
    setlocale(LC_ALL, "Polish");

    cout << "wynik = " << wynik << endl;
    wynik = 44 + 888;
    cout << "wynik = " << wynik << endl;

    wynik = licz1 * 2;
    cout << " wynik = " << wynik << endl;

    licz2 = 5;

    wynik = licz1 / licz2;
    cout << "wynik = " << wynik << endl;

    cout << "Po zastosowaniu stumienia CIN" << endl;

    cout << "Podaj pierwsz� liczb�: " << endl;
    cin >> licz1;

    cout << "Podaj drug� liczb�: " << endl;
    cin >> licz2;

    wynik = licz1 * licz2;
    cout << "Wynik mno�enia to " << wynik << endl;

    return 0;
}
