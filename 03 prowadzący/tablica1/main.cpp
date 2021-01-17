#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    int zmienna;

    int tab[8];

    char tabc[7];

    cout << "rozmiar zmiennej int: " << sizeof(zmienna) << endl;
    cout << "rozmiar tablicy int: " << sizeof(tab) << endl;
    cout << "rozmiar tablicy char: " << sizeof(tabc) << endl;

    zmienna = 333;

    tab[0] = 11;

    tab[2] = 33;

    tab[6] = 77;

    cout << "wartosc zmiennej: " << zmienna << endl;
    cout << "wartosc tablicy int: " << tab << endl;
    cout << "dla tab[0] = " << tab[0] << endl;
    cout << "dla tab[2] = " << tab[2] << endl;
    cout << "dla tab[7] = " << tab[7] << endl;
    cout << "dla tab[1] = " << tab[1] << endl;
    cout << "dla tab[6] = " << tab[6] << endl;

    cout << "adres zmienje: " << &zmienna << endl;
    cout << "adres tablicy: " << &tab << endl;
    cout << "adres komórki 0: " << &tab[0] << endl;
    cout << "adres komórki 1: " << &tab[1] << endl;
    cout << "adres komórki 2: " << &tab[2] << endl;
    cout << "adres komórki 3: " << &tab[3] << endl;
    cout << "adres komórki 6: " << &tab[6] << endl;
    cout << "adres komórki 7: " << &tab[7] << endl;



    const int roz = 9;

    float tabf[roz];

    int tab2[] = {5,4, 3, 55,22,11111,4,8,76};

    cout << " komórki 0: " << tab2[0] << endl;
    cout << " komórki 1: " << tab2[1] << endl;
    cout << " komórki 2: " << tab2[2] << endl;
    cout << " komórki 3: " << tab2[3] << endl;
    cout << " komórki 6: " << tab2[6] << endl;
    cout << " komórki 7: " << tab2[7] << endl;

    char tabt[] = "ja to nie ty a ty to nie ja";

    cout << "zawartoœæ: " << tabt << endl;


    return 0;
}
