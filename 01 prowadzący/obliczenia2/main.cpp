#include <iostream>

using namespace std;

float licz1=4;
float licz2;
float wynik=0;

int main()
{

    setlocale(LC_ALL, "Polish");
    cout << "wynik = " << wynik << endl;

    // 3 + 5 = 8
    wynik = 44 + 888; // = jest tu operatorem przypisania, a == jest operatorem porównania
    cout << "wynik = " << wynik << endl;

    wynik = licz1 * 2;
    cout << "\twynik = " << wynik << endl;

    licz2=5;

    wynik = licz1 / licz2;
    cout << "wynik = " << wynik << endl;

    cout << "Po zastosowaniu strumienia CIN \n";

    cout << "\tPodaj pierwsz¹ liczbê: " << endl;
    cin >> licz1;

    cout << "Podaj drug¹ liczbê: " << endl;
    cin >> licz2;

    wynik = licz1 * licz2;
    cout << "wynik = " << wynik << endl;




    return 0;
}
