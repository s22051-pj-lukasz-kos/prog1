#include <iostream>
#include <cstdlib>
#include <ctime>

int tpmax (int *t, int &n);
int tpmin (int *t, int &n);
float tsred (int *t, int &pmax, int &pmin);

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int n = 20;
    int* tab = new int[n];

    srand((int) time(NULL));

    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 100 + 1;
    }

    // wyœwietlanie
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    int poz_max = tpmax(tab,n);
    int poz_min = tpmin(tab,n);

    cout << poz_max << endl;
    cout << poz_min << endl;

    cout << tsred(tab, poz_max, poz_min) << endl;

    delete [] tab;
    return 0;
}


int tpmax (int *t, int &n) {
    int temp = t[0];
    int pmx=0;
    for (int i = 0; i < n; i++) {
        if (t[i] > temp){
            temp = t[i];
            pmx = i;
        }
    }
    return pmx;
}

int tpmin (int *t, int &n) {
    int temp = t[0];
    int pmn=0;
    for (int i = 0; i < n; i++) {
        if (t[i] < temp){
            temp = t[i];
            pmn = i;
        }
    }
    return pmn;
}

float tsred (int *t, int &pmax, int &pmin) {
    int suma = 0;
    float srednia;
    if(pmax > pmin) {
        for (int i = pmin; i <=pmax; i++) {
            suma += t[i];
        }
        srednia = suma / (pmax - pmin);
    }else if (pmax < pmin) {
        for (int i = pmax; i <=pmin; i++) {
            suma += t[i];
        }
        srednia = suma / (pmin - pmax);
    }
    return srednia;
}
