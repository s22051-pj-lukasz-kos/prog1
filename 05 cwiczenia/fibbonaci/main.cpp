#include <iostream>
#include <stdlib.h>

using namespace std;

int fib(int liczb1);
int n = 0;

int main()
{
    setlocale(LC_ALL, "");

    cout << "Podaj d³ugoœæ ci¹gu: " << endl;
    cin >> n;

    cout << fib(n) << endl;


    return 0;
}

int fib(int liczb1) {
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
