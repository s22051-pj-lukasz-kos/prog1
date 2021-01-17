#include <iostream>
#include <stdlib.h>

using namespace std;

void czyt_wyraz(char A[ ], int &n);
void sprawdz_wyraz(char A[ ], int &n);

int main()
{
    //setlocale(LC_ALL, "");
    int n  = 0;
    char znak[30];

    cout << "Podaj liczb znakw Twojego wyrazu: " << endl;
    cin >> n;

    czyt_wyraz(znak,n);
    sprawdz_wyraz(znak,n);

    return 0;
}

void czyt_wyraz(char A[ ], int &n){
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
}

void sprawdz_wyraz(char A[ ], int &n){
//    cout << "Twój wyraz: " << A << endl;
//    for(int i=0; i<n; i++){
//        cout << A[i];
//    }

    bool spr = false;

    for(int i=0; i<(n/2); i++) {
        if (A[i]==A[(n-1)-i]){
            spr = true;
        }else{
            spr = false;
        }
    }
    if(spr){
        cout << "tak" << endl;
    }else{
        cout << "nie" << endl;
    }

}
