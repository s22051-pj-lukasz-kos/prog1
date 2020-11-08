#include <iostream>

using namespace std;

    float licz1 = 0;
    float licz2 = 0;
    float wynik = 0;
    int wybor = 1;

int main()
{


    cout << "\t KALKULATOR" << endl;
    cout << "---------------------------" << endl;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> licz1;
    cout << "Podaj druga liczbe: " << endl;
    cin >> licz2;

    cout << "Wybierz dzialanie:" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "0. Wyjscie \n" << endl;
    cout << "Twoj wybor: " << endl;
    cin >> wybor;

    if (wybor == 1) {
        wynik = licz1 + licz2;
        cout << licz1 << " + " << licz2 << " = " << wynik;
    }


    return 0;
}
