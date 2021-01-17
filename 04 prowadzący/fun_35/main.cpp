#include <iostream>

using namespace std;

int a;
int b;

void fun1(int a, int b);

int main()
{
    setlocale(LC_ALL, "");

    a = 4;

    b = 2;

    cout << "a = " << a << " b = " << b << endl;

    fun1(a, b);

    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

void fun1(int a, int b){

 a = a*2;

 b = b + 100;

 cout << "a = " << a << " b = " << b << endl;
}
