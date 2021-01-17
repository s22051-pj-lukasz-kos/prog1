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


    // algorytm sortowania b¹belkowego
    int tmp;    // zmienna tymczasowa do zamiany wartoœci miêdzy komórkami

    for (int i=sizeof(tab)/4; i > 0; i--) {     // pierwsza pêtla odcina posortowany koniec tablicy
        for (int j=0; j < i; j++) {             // druga pêtla po ka¿dym przejœciu zaczyna od pocz¹tku przesuwaj¹c wartoœci wiêksze od nastêpnej komórki
            if (tab[j] > tab[j+1]) {            // jeœli wartoœæ w kolejnej komórce jest mniejsza od wartoœci w obecnej komórce
                tmp = tab[j];                   // to zapisz wartoœæ obecnej komórki do zmiennej tymczasowej
                tab[j] = tab[j+1];              // i obecn¹ komórkê nadpisz wartoœci¹ z kolejnej
                tab[j+1] = tmp;                 // po czym kolejn¹ komórkê nadpisz zawartoœci¹ zmiennej tymczasowej
            }
        }
    }
    cout << "Tablica po sortowaniu" << endl;
    wyswietl_tab(tab);

    return 0;
}

void rand_tab(int (&tablica)[100]) {
    srand((int) time(NULL));    // tworzenie generatora liczb pseudolosowych opartego o czas

    // wype³nianie komórek tablicy losowymi wartoœciami
    for (int i=0; i < 100; i++) {
        tablica[i] = rand() % 101;
    }
}

void wyswietl_tab(int tablica[]) {
    // Wyœwietlanie tablicy

    for (int i=0; i<100; i++) {
        cout << "Wartoœæ komórki " << i << " to " << tablica[i] << endl;
    }
}


