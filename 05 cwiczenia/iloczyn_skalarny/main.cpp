#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int skalarny(int n, int X[], int Y[]);
int dane(int )

int main()
{
    setlocale(LC_ALL, "");
    srand((int) time(NULL));
    int A[5];
    int B[5];
    int n = 5;
    int wynik = 0;

    for (int i = 0; i<n; i++) {
        A[i] = rand() % 10 + 1;
        B[i] = rand() % 10 + 1;
    }
    for (int i = 0; i<n; i++) {
        cout << "A " << i << " = " << A[i] << endl;
        cout << "B " << i << " = " << B[i] << endl;
    }

    cout << "Wynik sumy = " << skallarny(n, A, B) << endl;

    return 0;
}

int skarny(int n, int X[], int Y[]) {
    int suma = 0;

    for (int i - 0; i < n; i++){
        suma += X[i] * Y[i];
        cout << " krok iteracji: " << i+1 << " suma = " << X[i] << " * " << Y[i] << " = " << X[i] * Y[i] << endl;
    }
    return suma;
}

