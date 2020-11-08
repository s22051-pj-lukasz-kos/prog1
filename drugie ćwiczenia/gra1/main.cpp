#include <iostream>
#include <cstdlib> //do implementacji funkcji srand() i rand()
#include <ctime>    // do uzycia funkcji time() w funkcji srand()

using namespace std;

int main()
{
    setlocale(LC_ALL, "");  //ustawienie lokalizacji według srodowiska
    srand ((int) time(NULL));   //funkcja pseudo-losowa do generowania liczb losowych, która bazuje na funkcji czasu

    int los = rand() % 100 + 1; //funkcja do zwracania liczby calkowitej ograniczonej do 101
    int dana = 0;   //wprowadzana, zgadywana liczba
    int licznik = 0;    //licznik prob
    int ograniczenie = 0;   //ograniczenie dotyczące liczby prob

    cout << "W ilu ruchach chcesz wygrac?" << endl;
    cin >> ograniczenie;
    cout << "Zgadnij liczbe do 100" << endl;
    cin >> dana;
    licznik++;

    do {
        if (dana > los) {
            cout << "Podales za duza liczbe" << endl;
            cin >> dana;
        }else {
            cout << "Podales za mala liczbe" << endl;
            cin >> dana;
        }
        licznik++;
    } while ((dana != los) && (licznik < ograniczenie));

    if (dana == los) {
        cout << "BRAWO!!! Wygrales po " << licznik << " probach." << endl;
    } else {
        cout << "Przegrales. Nie udalo ci sie zmiescic w wymaganej ilosci ruchow." << endl;
    }


    return 0;
}
