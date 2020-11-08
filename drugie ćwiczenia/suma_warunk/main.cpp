/*
Program do dzielenia dwoch dodatnich liczb
*/

#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float liczb1;
    float liczb2;
    float dziel;

    cout << "Wprowadz pierwsza liczbe: " << endl;
    cin  >> liczb1;

    cout << "Wprowadz druga liczbe: " << endl;
    cin >> liczb2;

    if (liczb1 > 0 && liczb2 > 0) {
        dziel = liczb1 / liczb2;
        cout << "Twoj wynik to: " << dziel << endl;
    } else if (liczb2 == 0) {
        cout << "Nie wolno dzielic przez zero!" << endl;
    } else {
        cout << "Obie liczby powinny byc dodatnie!" << endl;
    }

    return 0;
}
