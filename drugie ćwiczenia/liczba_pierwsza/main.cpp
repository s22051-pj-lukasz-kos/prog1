#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");  //ustawienie lokalizacji wedlug srodowiska

    int liczb = 0;
    bool pierw = true;

    cout << "Podaj liczbe pierwsza: " << endl;
    cin >> liczb;

    for (int i = 2; i <= liczb/2; i++) {
        if (liczb%i == 0) {
            pierw = false;
        } else {
        pierw = true;
        }
    }

    if (pierw == true) {
        cout << "Liczba jest pierwsza" << endl;
    } else {
        cout << "liczba nie jest pierwsza" << endl;
    }

    return 0;
}
