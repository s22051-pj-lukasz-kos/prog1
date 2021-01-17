#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "");

    int a, b;
    char znak = 't';

    do{
        cout << "Podaj liczbê a: " << endl;
        cin >> a;
        cout << "Podaj liczbê b: " << endl;
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
            cout << "Najwiêkszy wspólny dzielnik to " << a1 << endl;
        } else {
            cout << "Brak rozwi¹zania";
        }
        cout << "Powtórzyæ? t/n" << endl;
        cin >> znak;

        while (znak != 't' && znak != 'n') {
            cout << "Wpisa³eœ z³y znak. U¿yj t lub n" << endl;
            cin >> znak;
        }

    } while (znak == 't');

    return 0;
}
