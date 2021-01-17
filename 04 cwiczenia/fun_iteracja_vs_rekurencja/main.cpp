#include <iostream>

using namespace std;

int suma_iter(int n);
int suma_rek(int n);

int silnia_iter(int n);
int silnia_rek(int n);

int main()
{
    setlocale(LC_ALL, "");

    cout << "Suma z iteracji " << suma_iter(55) << endl;
    cout << "Suma z rekurencji " << suma_rek(55) << endl;
    cout << endl;

    cout << "Silnia z iteracji " << silnia_iter(5) << endl;
    cout << "Silnia z rekurencji " << silnia_rek(5) << endl;

    return 0;
}

int suma_iter(int n) {
    int s = 0;

    for (int i = 0; i <= n; i++) {
        s+=i;
    }
    return s;
}

int suma_rek(int n) {
    if (n < 2) {
        return 1;
    } else {
        return n+suma_rek(n-1);
    }
}

int silnia_iter(int n) {
    int silnia = 1;
    for (int i = 2; i <= n; i++) {
        silnia *= i;
    }
    return silnia;
}

int silnia_rek(int n) {
    if (n < 2) {
        return 1;
    } else
        return n*silnia_rek(n-1);
}
