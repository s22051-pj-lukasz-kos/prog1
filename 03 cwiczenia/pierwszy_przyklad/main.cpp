#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "");

    int a, b;
    char znak = 't';

    do{
        cout << "Podaj liczb� a: " << endl;
        cin >> a;
        cout << "Podaj liczb� b: " << endl;
        cin >> b;

        if (a>0 && b>0) {
            int a1, b1;
            a1 = a;
            b1 = b;

            while (a1 != b1) {
                if (a1 > b1) {
                    a1 = a1 - b1;
                } else {
                    b1 = b1 - a1;
                }
            }
            cout << "Najwi�kszy wsp�lny dzielnik to " << a1 << endl;
        } else {
            cout << "Brak rozwi�zania";
        }
        cout << "Powt�rzy�? t/n" << endl;
        cin >> znak;

        while (znak != 't' && znak != 'n') {
            cout << "Wpisa�e� z�y znak. U�yj t lub n" << endl;
            cin >> znak;
        }

    } while (znak == 't');

    return 0;
}
