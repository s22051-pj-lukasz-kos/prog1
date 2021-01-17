#include <iostream>
#include <fstream>

using namespace std;

int n;
string imie[3];
string nazwi[3];

void pisanie();
void czytanie();

int main()
{
    setlocale(LC_ALL, "");

    cout << "Wpisz dane trzech osób: " << endl;

    for (int i=0; i<3; i++) {
        cin >> imie[i] >> nazwi[i];

    }

    pisanie();
    czytanie();

    return 0;
}

void pisanie(int &n, string *) {
    fstream zapis("zapis.txt", ios::out);

    if(zapis.good()) {
        for (int i = 0; i < 3; i++) {
            zapis << i << " ; " << imie[i] << " ; " << nazwi[i] << endl;
        }

        zapis.flush();
        zapis.close();
    } else cout << "B³¹d pliku." << endl;
}

void czytanie() {
    string zdanie;
    fstream odczyt("zapis.txt", ios::in);



    if(odczyt.good()){
        while(!odczyt.eof()){
            getline(odczyt,zdanie);
            cout << zdanie << endl;
        }
        getline(odczyt, zdanie);
        odczyt.close();
    } else cout << "B³¹d pliku." << endl;
    cout << "Pobra³eœ z pliku: " << endl << zdanie << endl;
}
