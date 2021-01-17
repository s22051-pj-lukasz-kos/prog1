#include <iostream>
#include <ctime>
#include <cstdlib>

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
    babelkowe(tab, 100);

    return 0;
}

void babelkowe(int t[], int n) {
    for (int i=0; i < 100; i++){
        cout << "tab["<< i<<"]= " << t[i] <<endl;
    }

    int tem;
    int j;

    for (int i=1; i < n; i++) {
        tem = t[i];
        j = i - 1;
        while (j>=0 && t[j]>tem) {
            t[j+1] = t[j];
            j = j - 1;
            t[j+1] = tem;
        }
    }

     cout << "PO SORTOWANIU b¹belkowym" << endl;
     for (int i=0; i <100; i++){
        cout << "tab["<< i<<"]= " << t[i] <<endl;
    }
}
