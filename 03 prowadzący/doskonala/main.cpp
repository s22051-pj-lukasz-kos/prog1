#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int p;
    int p1;
    int n;
    int  k;
    int suma;

    setlocale(LC_ALL, "");

    cout<< "Podaj liczbê k = " << endl;

    cin >> k;

    for (int f=0; f<=k; f++){

    n = f;
    suma = 0;

    p = sqrt((float)n);

    while(p>1){

       if(n%p==0) {

            suma = suma + p;
            p1 = n/p;

            if (p1!=p){

                suma = suma + p1;
            }
       }

        p = p - 1;
      }

    suma = suma + 1;

    if (suma == n ){

        cout << n << " jest JLD" << endl;
    }
    /*else {
        cout << "NJLD" << endl;
    }
*/
    }
    return 0;
}
