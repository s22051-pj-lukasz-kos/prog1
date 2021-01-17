#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand ((int) time(NULL));
    int licznik = 0;

    int los = rand() % 100 + 1;
    int dana;
    int warunek;

    cout << "Zgadznij liczbê od 1 do 100" << endl;
    cout << "w ilu ruchach chcesz wygraæ: ";
    cin >> warunek;

    cout << "Podaj liczbe od 1 do 100" << endl;
    cin >> dana;

    do {

        if (dana > los) {
            cout << "Podales za du¿¹ liczbê.Podaj now¹." << endl;

            cin >> dana;
        } else {

            cout << "Podales za ma³a liczbê. Podaj now¹." << endl;
            cin >> dana;

        }
        licznik++;

    } while(los != dana);

    cout << "Brawo TY, wygra³eœ!!!" << " po " << licznik << " razach." << endl;

    return 0;
}

/*
#include <cstdlib>
#include  <ctime>



srand ((int) time(NULL));
int nWylosowana = rand() % 100 + 1;
*/
