#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string wyraz;

    cout << "Program sprawdza, czy dany wyraz jest palinandronem." << endl;
    cout << "Wpisz sprawdzany wyraz" << endl;

    cin >> wyraz;

    bool check = true;
    for (int i = 0; i<wyraz.length()/2; i++) {
        if (wyraz[i] != wyraz[wyraz.length() - 1 - i]) {
            check = false;
        }
    }

    if (check == false) {
        cout << "Dany wyraz nie jest palinandronem" << endl;
    } else {
        cout << "Dany wyraz jest palinandronem" << endl;
    }
    return 0;
}
