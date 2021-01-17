#include <iostream>
#include <cstdlib>      // srand, rand,
#include <ctime>        // time

using namespace std;

void rand_tab(int (&tablica)[100]);
void wyswietl_tab(int tablica[]);

int main()
{
    setlocale(LC_ALL, "");

    int tab[100];
    rand_tab(tab);
    cout << "Nieposortowana tablica" << endl;
    wyswietl_tab(tab);


    // algorytm sortowania b�belkowego
    int tmp;    // zmienna tymczasowa do zamiany warto�ci mi�dzy kom�rkami

    for (int i=sizeof(tab)/4; i > 0; i--) {     // pierwsza p�tla odcina posortowany koniec tablicy
        for (int j=0; j < i; j++) {             // druga p�tla po ka�dym przej�ciu zaczyna od pocz�tku przesuwaj�c warto�ci wi�ksze od nast�pnej kom�rki
            if (tab[j] > tab[j+1]) {            // je�li warto�� w kolejnej kom�rce jest mniejsza od warto�ci w obecnej kom�rce
                tmp = tab[j];                   // to zapisz warto�� obecnej kom�rki do zmiennej tymczasowej
                tab[j] = tab[j+1];              // i obecn� kom�rk� nadpisz warto�ci� z kolejnej
                tab[j+1] = tmp;                 // po czym kolejn� kom�rk� nadpisz zawarto�ci� zmiennej tymczasowej
            }
        }
    }
    cout << "Tablica po sortowaniu" << endl;
    wyswietl_tab(tab);

    return 0;
}

void rand_tab(int (&tablica)[100]) {
    srand((int) time(NULL));    // tworzenie generatora liczb pseudolosowych opartego o czas

    // wype�nianie kom�rek tablicy losowymi warto�ciami
    for (int i=0; i < 100; i++) {
        tablica[i] = rand() % 101;
    }
}

void wyswietl_tab(int tablica[]) {
    // Wy�wietlanie tablicy

    for (int i=0; i<100; i++) {
        cout << "Warto�� kom�rki " << i << " to " << tablica[i] << endl;
    }
}


