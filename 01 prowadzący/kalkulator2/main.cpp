#include <iostream>

using namespace std;

float licz1=0;
float licz2=0;
float wynik=0;
int wybor=1;

int main()
{
    setlocale(LC_ALL, "Polish");
    cout << "\tKALKULATOR" << endl;
    cout << "-----------------------" << endl;
    cout << endl;
    cout << "Podaj piewsz¹ liczbê: " << endl;
    cin >> licz1;
    cout << "Podaj drug¹ liczbê: " << endl;
    cin >> licz2;
    cout << "Wybierz dzia³anie: " << endl;
    cout << "\tdodawanie po wybraniu 1" << endl;
    cout << "\todejmowanie po wybraniu 2" << endl;
    cout << "\tmno¿enie po wybraniu 3" << endl;
    cout << "\tdzielenie po wybraniu 4" << endl;
    cout << "\twyjscie po wybraniu 0" << endl;
    cout << "Twój wybór: " << endl;
    cin >> wybor;


    if (wybor == 1 ) {

        wynik = licz1 + licz2;

        cout << licz1 << " + " << licz2 << " = "  << wynik << endl;
        cout << licz1 << " + " << licz2 << " = "  << licz1+licz2 << endl;

    }

    if (wybor == 2 ) {

        wynik = licz1 - licz2;

        cout << licz1 << " - " << licz2 << " = "  << wynik << endl;
        cout << licz1 << " - " << licz2 << " = "  << licz1-licz2 << endl;

    }


    if (wybor == 3 ) {

        wynik = licz1 * licz2;

        cout << licz1 << " * " << licz2 << " = "  << wynik << endl;
        cout << licz1 << " * " << licz2 << " = "  << licz1*licz2 << endl;

    }

    return 0;
}
