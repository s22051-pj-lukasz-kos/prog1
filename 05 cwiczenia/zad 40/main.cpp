#include <iostream>
#include <ctime>
#include <stdlib.h>

void dane(int n, int tab[10][10]);
int przekatna(int n, int tab[10][10]);

void wyswietl(int n, int tab[10][10]);

using namespace std;

int main()
{
    srand ((int) time(NULL));
    int n = 10;
    int a[10][10];
    dane(n,a);
    wyswietl(n,a);
    cout << "suma po przekatnej" << " = " << przekatna(n,a)  << endl;

    return 0;
}

void dane(int n, int tab[10][10]){
    for (int k = 0; k<n; k++){
        for (int w = 0; w<n; w++){
            tab[k][w] = rand() % 10 + 1;
        }
    }
}

void wyswietl(int n, int tab[10][10]){
    for (int k = 0; k<n; k++){
        for (int w = 0; w<n; w++){
            cout << tab[k][w] << " , \t";
        }
        cout << endl;
    }
}

int przekatna(int n, int tab[10][10]){
    int suma = 0;

    for (int k = 0; k<n; k++){
        for (int w = 0; w<n; w++){
            if(k==w){
                suma+=tab[k][w];
            }
        }
    }

    return suma;
}
