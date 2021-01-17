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

    // tworzenie tablicy o losowych warto�ciach
    int tab[100];
    rand_tab(tab, 100);
    cout << "Nieposortowana tablica" << endl;
    wyswietl_tab(tab);
    cout << endl;

    // kopiowanie tablicy do wykorzystania innego algorytmu
    int tab2[100];
    copy_array(tab, tab2, 100);

    clock_t time_buble = clock();
    // sortowanie b�belkowe
    bubble_sort(tab, 100);
    time_buble -= clock();
    cout << "Tablica po sortowaniu b�belkowym" << endl;
    wyswietl_tab(tab);
    cout << "Zaj�o to " << time_buble << " cykli." << endl;
    cout << endl;

    // sortowanie przez wstawianie
    clock_t time_insert = clock();
    insert_sort(tab2, 100);
    time_insert -= clock();
    cout << "Tablica po sortowaniu przez wstawianie" << endl;
    wyswietl_tab(tab2);
    cout << "Zaj�o to " << time_insert << " cykli." << endl;

    return 0;
}

int rand_tab(int tablica[], int length) {
    srand((int) time(NULL));    // tworzenie generatora liczb pseudolosowych opartego o czas

    // wype�nianie kom�rek tablicy losowymi warto�ciami
    for (int i=0; i < length; i++) {
        tablica[i] = rand() % 100;
    }
    return tablica[length];
}

void wyswietl_tab(int tablica[]) {
    // Wy�wietlanie tablicy

    for (int i=0; i<100; i++) {
        cout << "Warto�� kom�rki " << i << " to " << tablica[i] << endl;
    }
}

int copy_array(int tablica[], int tablica2[], int length) {
    for (int i=0; i < length; i++) {
        tablica2[i]=tablica[i];
    }
    return tablica2[length];
}

int bubble_sort(int tablica[], int length) {
    // algorytm sortowania b�belkowego
    int tmp;    // zmienna tymczasowa do zamiany warto�ci mi�dzy kom�rkami

    for (int i=length; i > 0; i--) {     // pierwsza p�tla odcina posortowany koniec tablicy
        for (int j=0; j < i; j++) {             // druga p�tla po ka�dym przej�ciu zaczyna od pocz�tku przesuwaj�c warto�ci wi�ksze od nast�pnej kom�rki
            if (tablica[j] > tablica[j+1]) {            // je�li warto�� w kolejnej kom�rce jest mniejsza od warto�ci w obecnej kom�rce
                tmp = tablica[j];                   // to zapisz warto�� obecnej kom�rki do zmiennej tymczasowej
                tablica[j] = tablica[j+1];              // i obecn� kom�rk� nadpisz warto�ci� z kolejnej
                tablica[j+1] = tmp;                 // po czym kolejn� kom�rk� nadpisz zawarto�ci� zmiennej tymczasowej
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
