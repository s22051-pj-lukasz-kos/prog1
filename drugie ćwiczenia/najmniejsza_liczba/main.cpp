#include <iostream>

using namespace std;

int main()
{
    int licz1;
    int licz2;
    int licz3;

    setlocale(LC_ALL, "");

    cout << "Wprowadz pierwsza liczbe: " << endl;
    cin >> licz1;
    cout << "Wprowadz druga liczbe: " << endl;
    cin >> licz2;
    cout << "Wprowadz trzecia  liczbe: " << endl;
    cin >> licz3;

    if (licz1 < licz2 && licz2 < licz3) {
        cout << "Najmniejsza liczba to: " << licz1 << endl;
    } else if (licz3 < licz2) {
        cout << "Najmniejsza liczba to: " << licz3 << endl;
    } else
        cout << "najmniejsza liczba to: " << licz2 << endl;

    return 0;
}
