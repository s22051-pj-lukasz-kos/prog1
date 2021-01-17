#include <iostream>
#include <cstdlib>     // srand, rand
#include <ctime>       // time

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    srand((int) time(NULL));    // inicjacja generatora liczb pseudolosowych, gdzie ziarnem jest funkcja time, ziarno musi byæ ca³kowite (int)
    int tab[100];

    // pêtla wype³nia tablicê losowo generowanymi liczbami
    for (int i = 0; i < sizeof(tab)/4; i++) {   // poniewa¿ sizeof() pokazuje pojemnoœæ tablicy w bajtach, to nale¿y wynik podzieliæ przez 4 by otrzymaæ iloœæ komórek
        tab[i] = rand() % 100 + 1;             // losowanie liczb, po % pierwsz¹ liczb¹ jest zakres, kolejn¹ jest pocz¹tek zakresu (tu: 1 - 1000)
        cout << "Komórka " << i << " ma wartoœæ " << tab[i] << endl;
    }
    cout << endl;   // pusta linia w ramach estetyki

    // pêtla sumuje wartoœci komórek tablicy i znajduje œredni¹ artmetyczn¹
    int suma = 0;
    for (int i=0; i<sizeof(tab)/4; i++) {
        suma = suma + tab[i];
    }
    cout << "Suma wartoœci wszystkich komórek wynosi " << suma << endl;
    cout << "Œrednia wartoœæ z tej tablicy wynosi " << suma/100 << endl;
    cout << endl;

    // fragment odpowiada za szukanie okreœlonej wartoœci w tablicy i podaje ile razy siê pojawia
    int wprowadzana_wartosc;    // szukana wartoœæ z tablicy
    int licznik;                // ile takich wartoœci jest
    char znak;                  // kontrola dzia³ania programu ze strony u¿ytkownika
    do {
        licznik = 0;
        cout << "Podaj wartoœæ z tablicy: " << endl;
        cin >> wprowadzana_wartosc;
        for (int i=0; i<sizeof(tab)/4; i++) {
            if (wprowadzana_wartosc==tab[i]) {
                cout << "Dana wartoœæ jest w komórce " << i << endl;
                licznik++;
            }
        }
        cout << "Dana wartoœæ wystêpuje " << licznik << " razy." << endl;
        cout << "Powtórzyæ szukanie? t/n" << endl;
        cin >> znak;
        while (znak != 't' && znak != 'n') {
            cout << "Wcisn¹³eœ z³y klawisz. Wciœnij t lub n" << endl;
            cin >> znak;
        }
    } while (znak=='t');
    cout << endl;

    // Ten fragment kodu szuka wartoœæ minimaln¹ i maksymaln¹ z tablicy i podaje ich lokacje
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
    cout << "Wartoœæ minimalna to " << w_min << " w komórce " << p_min << endl;
    cout << "Wartoœæ maksymalna to " << w_max << " w komórce " << p_max << endl;

    return 0;
}
