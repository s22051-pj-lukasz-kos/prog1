#include<iostream>

using namespace std;


int main() {
    setlocale (LC_ALL, "");

    int* wn;
    int* wk;
    int* wsn;
    int* wsk;
    int* wsnk;

    int n, k;
    wn = &n;
    wk = &k;

    cout << "Podaj kolejno n i k:" << endl;
    cin >> *wn >> *wk;

    int sn = 1;
    wsn = &sn;

    for(int i=2;i<=*wn;i++)
        *wsn=(*wsn)*i;

    int sk=1;
    wsk = &sk;

    for(int i=2;i<=*wk;i++)
        *wsk=*wsk*i;

    int snk=1;
    wsnk = & snk;

    for (int i=2; i < *wn-*wk; i++) {
        *wsnk=*wsnk*i;
    }


    cout << "Symbol Newtona n nad k wynosi"<<*wsn/(*wsk*(*wsnk));
}
