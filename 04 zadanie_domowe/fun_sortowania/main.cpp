#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

void babelkowe(int t[], int n);

int main()
{
    setlocale(LC_ALL, "");
    srand((unsigned) time(NULL) );

    int tab[100];

    for (int i=0; i <100; i++){
        tab[i] = (double)rand ( )/(RAND_MAX)*100+1;
    }

    cout << "Przed SORTOWANIEM" << endl;

    babelkowe(tab,100);

    return 0;
}


void babelkowe(int t[], int n){

 for (int i=0; i <100; i++){
        cout << "tab["<< i<<"]= " << t[i] <<endl;
    }

    int tem;

    do{

        for (int i = 0; i < n-1; i++){

            if( t[i] > t[i+1]){

                tem = t[i];

                t[i] = t[i+1];

                t[i+1] = tem;
            }
        }
        n = n - 1;

    } while(n>1);

     cout << "PO SORTOWANIU B¹belkowym" << endl;
     for (int i=0; i <100; i++){
        cout << "tab["<< i<<"]= " << t[i] <<endl;
    }
}
