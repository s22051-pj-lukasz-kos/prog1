#include <iostream>

using namespace std;

int pole (int a, int b);
int pole (int a);           // w przeci��aniu chodzi o to, �e u�ywamy funkcji o tej samej nazwie, ale z inn� liczb� argument�w

int main()
{
    setlocale(LC_ALL, "");

    int x = 4;
    int y = 7;

    cout << "Pole prostok�ta = " << pole(x, y) << endl;
    cout << "Pole kwadratu = " << pole(x) << endl;


    return 0;
}

int pole(int a, int b) {
    return a * b;
}

int pole(int a) {   // przeci��ana funkcja musi by� osobno zdefiniowana
    return a * a;
}
