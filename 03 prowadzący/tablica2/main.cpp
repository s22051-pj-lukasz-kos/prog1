#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "");

    srand ((int) time(NULL));
    //int nWylosowana = rand() % 1000 + 1;

    int tab[100];

    for (int i =0; i<100; i++){
        tab[i] = rand() % 100 + 1;
    }

    for (int i =0; i<sizeof(tab)/4; i++){

        cout << "tab[" << i << "]= " << tab[i] << endl;
    }

    int suma = 0;

    for (int i =0; i<sizeof(tab)/4; i++){

        suma = suma + tab[i];

    }

    cout << "suma = " << suma/100 << endl;



    int znak;
    int licznik = 0;
    int poz;
  /*
    cout << "Podaj znak z tablicy: " << endl;
    cin >> znak;

    for (int i =0; i<sizeof(tab)/4; i++){

        if (znak == tab[i]){

            licznik++;
            poz = i;
            cout << "na pozycji: " << poz << endl;
        }
    }
    cout << "W tablicy mamy: " << licznik << endl;

*/
    int minn=tab[0];

    for (int i =0; i<sizeof(tab)/4; i++){

        if(minn>tab[i]){

            minn = tab[i];
            poz = i;
        }
    }

    cout << "Najmniejsza w tablicy jest: " << minn << " na pozycji: " << poz << endl;

    return 0;
}
