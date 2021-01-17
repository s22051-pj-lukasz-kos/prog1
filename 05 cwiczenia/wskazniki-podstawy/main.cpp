#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int zmienna1;
    int zmienna2 = 222;

    int *wsk;

    cout << "zmienna2 " << zmienna2 << endl;
    cout  << "wsk " << wsk << endl;

    wsk = &zmienna1;

    cout << "zmienna2 " << zmienna2 << endl;
    cout << "wsk " << wsk << endl;

    cout << "wartosc zmiennej2 = " << zmienna2 << endl;
    cout << "wartosc wskaŸnika = " << *wsk << endl;

    cout << "adres zmiennej2 [&zmienna2]= " << &zmienna2 << endl;
    cout << "adres wskaŸnika [wsk]= " << wsk << endl;

    int *wsk2;

    wsk2 = wsk;
    cout << "wsk = " << wsk << " wartosci wsk = " << *wsk << endl;
    cout << "wsk2 = " << wsk2 << " wartosci wsk2 = " << *wsk2 << endl;

    float *wsk3;

    void * wskv;
    wsk3 = sss;
    cout << "wskv = " << *wskv << endl;
    wskv = wsk2;
    cout << "wskv = " << *wskv << endl;

    return 0;
}
