#include <iostream>

using namespace std;

int iloczyn1(int a, int b);
int iloczyn1();
void iloczyn2(int a, int b);
void iloczyn2();

int x, y;

int main()
{
    setlocale(LC_ALL, "");

    cout << "WprowadŸ pierwsz¹ liczbê" << endl;
    cin >> x;

    cout << "WprowadŸ drug¹ liczbê" << endl;
    cin >> y;

    cout << "iloczyn1(int a, int b) = " << iloczyn1(x, y) << endl;
    cout << "iloczyn1() = " << iloczyn1() << endl;
    iloczyn2(x, y);
    iloczyn2();

    return 0;
}

int iloczyn1(int a, int b) {
    return a * b;
}

int iloczyn1() {
    return x * y;
}

void iloczyn2(int a, int b) {
    cout << "iloczyn2(int a, int b) = " << a * b << endl;
}

void iloczyn2() {
    cout << "iloczyn2() = " << x * y << endl;
}
