#include <iostream>
#include <cstdlib>      // srand, rand,
#include <ctime>        // time

using namespace std;

int rand_tab(int tablica[], int length);
void wyswietl_tab(int tablica[]);
int copy_array(int tablica1[], int tablica2[], int length);
int bubble_sort(int tablica[], int length);
int insert_sort(int tablica[], int length);

int main()
{
    setlocale(LC_ALL, "");

    // tworzenie tablicy o losowych wartoœciach
    int tab[100];
    rand_tab(tab, 100);
    cout << "Nieposortowana tablica" << endl;
    wyswietl_tab(tab);
    cout << endl;

    // kopiowanie tablicy do wykorzystania innego algorytmu
    int tab2[100];
    copy_array(tab, tab2, 100);

    clock_t time_buble = clock();
    // sortowanie b¹belkowe
    bubble_sort(tab, 100);
    time_buble -= clock();
    cout << "Tablica po sortowaniu b¹belkowym" << endl;
    wyswietl_tab(tab);
    cout << "Zajê³o to " << time_buble << " cykli." << endl;
    cout << endl;

    // sortowanie przez wstawianie
    clock_t time_insert = clock();
    insert_sort(tab2, 100);
    time_insert -= clock();
    cout << "Tablica po sortowaniu przez wstawianie" << endl;
    wyswietl_tab(tab2);
    cout << "Zajê³o to " << time_insert << " cykli." << endl;

    return 0;
}

int rand_tab(int tablica[], int length) {
    srand((int) time(NULL));    // tworzenie generatora liczb pseudolosowych opartego o czas

    // wype³nianie komórek tablicy losowymi wartoœciami
    for (int i=0; i < length; i++) {
        tablica[i] = rand() % 100;
    }
    return tablica[length];
}

void wyswietl_tab(int tablica[]) {
    // Wyœwietlanie tablicy

    for (int i=0; i<100; i++) {
        cout << "Wartoœæ komórki " << i << " to " << tablica[i] << endl;
    }
}

int copy_array(int tablica[], int tablica2[], int length) {
    for (int i=0; i < length; i++) {
        tablica2[i]=tablica[i];
    }
    return tablica2[length];
}

int bubble_sort(int tablica[], int length) {
    // algorytm sortowania b¹belkowego
    int tmp;    // zmienna tymczasowa do zamiany wartoœci miêdzy komórkami

    for (int i=length; i > 0; i--) {     // pierwsza pêtla odcina posortowany koniec tablicy
        for (int j=0; j < i; j++) {             // druga pêtla po ka¿dym przejœciu zaczyna od pocz¹tku przesuwaj¹c wartoœci wiêksze od nastêpnej komórki
            if (tablica[j] > tablica[j+1]) {            // jeœli wartoœæ w kolejnej komórce jest mniejsza od wartoœci w obecnej komórce
                tmp = tablica[j];                   // to zapisz wartoœæ obecnej komórki do zmiennej tymczasowej
                tablica[j] = tablica[j+1];              // i obecn¹ komórkê nadpisz wartoœci¹ z kolejnej
                tablica[j+1] = tmp;                 // po czym kolejn¹ komórkê nadpisz zawartoœci¹ zmiennej tymczasowej
            }
        }
    }
    return tablica[length];
}

// algorytm sortowania przez wstawianie
int insert_sort(int tablica[], int length) {
    int temp, j;
    for (int i=1; i<length; i++) {
        temp = tablica[i];
        j = i - 1;
        while (j>=0 && tablica[j]>temp) {
            tablica[j+1] = tablica[j];
            j = j - 1;
            tablica[j + 1] = temp;
        }
    }
    return tablica[length];
}
