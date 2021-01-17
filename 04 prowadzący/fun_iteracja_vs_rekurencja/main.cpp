#include <iostream>

using namespace std;

int suma_iter(int n);
int suma_rek(int n);
int silnia_iter(int n);
int silnia_rek(int n);

int main()
{
    setlocale(LC_ALL, "");

    cout << "Suma z iteracji = " << suma_iter(5) << endl;
    cout << "Suma z rekurencja = " << suma_rek(5) << endl;
    cout << "Silnia z iteracji = " << silnia_iter(5) << endl;
    cout << "Silnia z rekurencyjnie = " << silnia_rek(5) << endl;
}

int silnia_rek(int n){

    if (n<1){

        return 1;
    }else {
        return n*silnia_rek(n-1);
    }
}

int silnia_iter(int n){

    int il=1;

    for (int i =1; i <= n; i++){
        il *=i;
    }
    return il;
}


int suma_rek(int n){

    if (n < 2){

        return 1;
    }else {

        return n+suma_rek(n-1);
    }
}

int suma_iter(int n){

    int s=0;

    for (int i = 0; i <= n; i++){

        //s = s + i;
        s += i;
    }

    return s;
}
