#include <iostream>
#include <math.h>   // import funkcji sqrt

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int n, p, w, suma;

    cout << "Program szuka liczby doskona³e do wpisanej wartoœci." << endl;
    cout << "WprowadŸ wartoœæ, do której chcesz znaleŸæ wszystkie liczby doskona³e." << endl;
    cin >> w;

    for (int n=0; n<w; n++) {   //sprawdzanie zachodzi dla ka¿dej liczby do wprowadzonej wartoœci w
        suma = 0;
        p = sqrt(n);

        while (p > 1) {
            if (n%p == 0) {         // znajduje dzielnik liczby n
                int p1;
                suma = suma + p;    // dodaje go do sumy
                p1 = n/p;
                if (p1 != p) {
                    suma = suma + p1;
                }
            }
            p = p - 1;
        }
        suma = suma + 1;
        if (suma == n) {
            cout << "Liczba " << n << " jest liczb¹ doskona³¹." << endl;
        }
    }

    return 0;
}
