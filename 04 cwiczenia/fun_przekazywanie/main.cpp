#include <iostream>

using namespace std;

int x;
int y;

void zmienia_war(int a, int b);
void zmienia_ref(int &a, int &b);   // odniesienie do adresów pozwala na zmianê wartoœci zmiennych spoza zakresu funkcji (scope)

int main()
{
    setlocale(LC_ALL, "");

    x = 3;
    y = 8;

    cout << "x glob = " << x << " y glob = " << y << endl;

    zmienia_war(x, y);

    cout << "x glob = " << x << " y glob = " << y << endl;

    zmienia_ref(x, y);

    cout << "x glob = " << x << " y glob = " << y << endl;

    return 0;
}

void zmienia_war(int a, int b) {    // swap po parametrach funkcji nie zmienia zmiennych wychodz¹cych poza zakres funkcji
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "x war = " << a << " y war = " << b << endl;
}

void zmienia_ref(int &a, int &b) {  // swap po adresie zmienia wartoœæ zmiennych wychodz¹cych poza zakres funkcji
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "x ref = " << a << " y ref = " << b << endl;
}
