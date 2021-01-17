#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "");

    srand ((int) time(NULL));

    int tab[100];

    for (int i =0; i<100; i++){
        tab[i] = rand() % 100 + 1;
    }

    cout << "Przed Sortowaniem " << endl << endl;

    for (int i =0; i<sizeof(tab)/4; i++){
        cout << "tab[" << i << "]= " << tab[i] << endl;
    }

    int n = 100;
    int temp;

    do{

        for(int i =0; i < n-1; i++){

            if(tab[i] > tab[i+1]){

                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
            }
        }
        n = n -1;

    } while (n > 1);

    cout << endl << endl;

    cout << "Po po po sortowanie " << endl;

     for (int i =0; i<sizeof(tab)/4; i++){
        cout << "tab[" << i << "]= " << tab[i] << endl;
    }

    return 0;
}
