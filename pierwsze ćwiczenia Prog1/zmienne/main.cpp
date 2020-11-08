#include <iostream>

using namespace std;

int main()
{
    int zmienna1;
    float zmienna2;
    double zmienna3;
    char zmienna4;
    string zmienna5;

    cout << "zmienna typu INT: " << zmienna1 << endl;
    cout << "zmienna typu FLOAT: " << zmienna2 << endl;
    cout << "zmienna typu DOUBLE: " << zmienna3 << endl;
    cout << "zmienna typu CHAR: " << zmienna4 << endl;
    cout << "zmienna typu STRING: " << zmienna5 << endl;
    cout << endl;

    cout << "rozmiar zmiennej INT:" << sizeof(zmienna1) << endl;
    cout << "rozmiar zmiennej FLOAT: " << sizeof(zmienna2) << endl;
    cout << "rozmiar zmiennej DOUBLE: " << sizeof(zmienna3) << endl;
    cout << "rozmiar zmiennej CHAR: " << sizeof(zmienna4) << endl;
    cout << "rozmiar zmiennej STRING: " << sizeof(zmienna5) << endl;
    cout << endl;

    cout << "adres zmiennej INT:" << &zmienna1 << endl;
    cout << "adres zmiennej FLOAT: " << &zmienna2 << endl;
    cout << "adres zmiennej DOUBLE: " << &zmienna3 << endl;
    cout << "adres zmiennej CHAR: " << &zmienna4 << endl;
    cout << "adres zmiennej STRING: " << &zmienna5 << endl;
    cout << endl;

    zmienna1 = 1;
    zmienna2 = 2.4;
    zmienna3 = 128000;
    zmienna4 = 'c';
    zmienna5 = "COVID is alive and influenza is dead.";

    cout << "zmienna typu INT: " << zmienna1 << endl;
    cout << "zmienna typu FLOAT: " << zmienna2 << endl;
    cout << "zmienna typu DOUBLE: " << zmienna3 << endl;
    cout << "zmienna typu CHAR: " << zmienna4 << endl;
    cout << "zmienna typu STRING: " << zmienna5 << endl;
    cout << endl;

    cout << "rozmiar zmiennej INT:" << sizeof(zmienna1) << endl;
    cout << "rozmiar zmiennej FLOAT: " << sizeof(zmienna2) << endl;
    cout << "rozmiar zmiennej DOUBLE: " << sizeof(zmienna3) << endl;
    cout << "rozmiar zmiennej CHAR: " << sizeof(zmienna4) << endl;
    cout << "rozmiar zmiennej STRING: " << sizeof(zmienna5) << endl;
    cout << endl;

    cout << "adres zmiennej INT:" << &zmienna1 << endl;
    cout << "adres zmiennej FLOAT: " << &zmienna2 << endl;
    cout << "adres zmiennej DOUBLE: " << &zmienna3 << endl;
    cout << "adres zmiennej CHAR: " << &zmienna4 << endl;
    cout << "adres zmiennej STRING: " << &zmienna5 << endl;

    return 0;
}
