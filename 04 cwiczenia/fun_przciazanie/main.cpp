#include <iostream>

using namespace std;

int pole (int a, int b);
int pole (int a);           // w przeci¹¿aniu chodzi o to, ¿e u¿ywamy funkcji o tej samej nazwie, ale z inn¹ liczb¹ argumentów

int main()
{
    setlocale(LC_ALL, "");

    int x = 4;
    int y = 7;

    cout << "Pole prostok¹ta = " << pole(x, y) << endl;
    cout << "Pole kwadratu = " << pole(x) << endl;


    return 0;
}

int pole(int a, int b) {
    return a * b;
}

int pole(int a) {   // przeci¹¿ana funkcja musi byæ osobno zdefiniowana
    return a * a;
}
