#include <iostream>

using namespace std;

inline int kwadrat (int x) {return x * x;} // inline stosowaæ tylko do wyj¹tkowo prostych funkcji, bez logiki, pêtli, itp.

void odejmij1();    // deklaracja funkcji
void odejmij2(int x, int y);
int odejmij3();
int odejmij4(int x, int y);

int a, b;

int main()
{
    setlocale(LC_ALL, "");

    a = 5;
    b = 3;

    odejmij1();  // wywo³anie funkcji
    cout << endl;

    odejmij2(8, 3);
    cout << endl;

    cout << "Odejmij3 = " << odejmij3() << endl;
    cout << endl;

    cout << "Odejmij4 = " << odejmij4(7, 3) << endl;

    return 0;
}

void odejmij1() {    // definicja funkcji
    int wynik;

    wynik = a - b;

    cout << "odejmowanie = " << wynik << endl;
}

void odejmij2(int x, int y) {
    int wynik;

    wynik = x - y;

    cout << "Odejmowanie2 = " << wynik << endl;
}

int odejmij3() {
/*    int wynik;

    wynik = a - b;

    return wynik;
*/
    return (a - b);
}

int odejmij4(int x, int y) {
/*
    int wynik;

    wynik = x - y;

    return wynik;
*/
    return x - y;
}
