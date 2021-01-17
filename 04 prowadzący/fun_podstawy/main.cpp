#include <iostream>

using namespace std;


inline int kwadrat(int x) {return x * x;} // funkcja inline

void odejmij1(); //deklaracja funkcji
void odejmij2(int x, int y);

int odejmij3();
int odejmij4(int x, int y);

    int a;

    int b;

int main()
{
    setlocale(LC_ALL, "");

    a = 5;

    b = 3;

    odejmij1(); // wywo³anie fuknkcji

    odejmij2(6,2);

    odejmij2(a, b);

    cout << "Odejmowanie3 = " << odejmij3() << endl;

    int dana;

    dana = odejmij3();

    cout << "Odejmowanie3 = " << dana << endl;

    cout << "Odejmowanie4 = " << odejmij4(7,2) << endl;

    dana = odejmij4(a,b);

    cout << "Odejmowanie4 = " << dana << endl;

    return 0;
}

int odejmij4(int x, int y){

   // int wynik;

    //wynik = x - y;

    //return wynik;
    return x - y;
}

int odejmij3(){

    // int wynik;

    // wynik = a - b;

    // return wynik;

    return (a-b);
}

void odejmij2(int x, int y){

    int wynik;

    wynik = x - y;

    cout << "odejmowanie2 = " << wynik << endl;


}

void odejmij1(){  // definicja funkcji

    int wynik;

    wynik = a - b;

    cout << "odejmowanie1 = " << wynik << endl;
}

