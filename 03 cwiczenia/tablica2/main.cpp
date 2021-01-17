#include <iostream>
#include <cstdlib>     // srand, rand
#include <ctime>       // time

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    srand((int) time(NULL));    // inicjacja generatora liczb pseudolosowych, gdzie ziarnem jest funkcja time, ziarno musi by� ca�kowite (int)
    int tab[100];

    // p�tla wype�nia tablic� losowo generowanymi liczbami
    for (int i = 0; i < sizeof(tab)/4; i++) {   // poniewa� sizeof() pokazuje pojemno�� tablicy w bajtach, to nale�y wynik podzieli� przez 4 by otrzyma� ilo�� kom�rek
        tab[i] = rand() % 100 + 1;             // losowanie liczb, po % pierwsz� liczb� jest zakres, kolejn� jest pocz�tek zakresu (tu: 1 - 1000)
        cout << "Kom�rka " << i << " ma warto�� " << tab[i] << endl;
    }
    cout << endl;   // pusta linia w ramach estetyki

    // p�tla sumuje warto�ci kom�rek tablicy i znajduje �redni� artmetyczn�
    int suma = 0;
    for (int i=0; i<sizeof(tab)/4; i++) {
        suma = suma + tab[i];
    }
    cout << "Suma warto�ci wszystkich kom�rek wynosi " << suma << endl;
    cout << "�rednia warto�� z tej tablicy wynosi " << suma/100 << endl;
    cout << endl;

    // fragment odpowiada za szukanie okre�lonej warto�ci w tablicy i podaje ile razy si� pojawia
    int wprowadzana_wartosc;    // szukana warto�� z tablicy
    int licznik;                // ile takich warto�ci jest
    char znak;                  // kontrola dzia�ania programu ze strony u�ytkownika
    do {
        licznik = 0;
        cout << "Podaj warto�� z tablicy: " << endl;
        cin >> wprowadzana_wartosc;
        for (int i=0; i<sizeof(tab)/4; i++) {
            if (wprowadzana_wartosc==tab[i]) {
                cout << "Dana warto�� jest w kom�rce " << i << endl;
                licznik++;
            }
        }
        cout << "Dana warto�� wyst�puje " << licznik << " razy." << endl;
        cout << "Powt�rzy� szukanie? t/n" << endl;
        cin >> znak;
        while (znak != 't' && znak != 'n') {
            cout << "Wcisn��e� z�y klawisz. Wci�nij t lub n" << endl;
            cin >> znak;
        }
    } while (znak=='t');
    cout << endl;

    // Ten fragment kodu szuka warto�� minimaln� i maksymaln� z tablicy i podaje ich lokacje
    int w_min = tab[0];
    int w_max = tab[0];
    int p_min = 0;
    int p_max = 0;

    for (int i=0; i < sizeof(tab)/4; i++) {
        if (w_min > tab[i]) {
            w_min = tab[i];
            p_min = i;
        }
        if (w_max < tab[i]) {
            w_max = tab[i];
            p_max = i;
        }
    }
    cout << "Warto�� minimalna to " << w_min << " w kom�rce " << p_min << endl;
    cout << "Warto�� maksymalna to " << w_max << " w kom�rce " << p_max << endl;

    return 0;
}
