#include <iostream>

using namespace std;

int x, y;

void manipulator(int a, int b);

int main()
{
    setlocale(LC_ALL, "");

    cout << "Wpisz pierwsz� liczb�" << endl;
    cin >> x;
    cout << "Wpisz drug� liczb�" << endl;
    cin >> y;
    cout << endl;

    manipulator(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

void manipulator(int a, int b) {
    a = 2 * a;
    b = b + 100;

    cout << "Pierwsza warto�� wynosi teraz " << a << endl;
    cout << "Druga warto�� wynosi teraz " << b << endl;
}
