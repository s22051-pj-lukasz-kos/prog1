#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    int a;
    int b;
    int a1;
    int b1;
    int nwp;

    char znak = 'n';
    do {

    cout <<"Je¿eli chcesz wyliczycz nwd to podaj liczbê" << endl;
    cout <<"J¿e¿eli chcesz skoñczyæ dzia³anie programu to wciœnij 't' a je¿eli kontynuowaæ to wciœnij 'n'." << endl;

    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "Podaj liczbê a: ";
    cin >> a;
    cout << endl;

    cout << "Podajliczbê b: ";
    cin >> b;
    cout << endl;

    if(a>0 && b>0){
        a1 = a;
        b1 = b;

        while(a1 != b1) {

            if (a1>b1){
                a1 = a1 - b1;
            } else {
                b1 = b1 - a1;
            }
        }
        nwp = a1;


        cout << "Najwiêkszy wspólny podzielni = " << nwp << endl;

    }else {

        cout << "Brak rozwi¹zaia" << endl;
    }

    cout << endl << endl;
    cout << "Wybierz klawisz 't', aby skoñczyæ lub 'n' aby kontynuowaæ." << endl;
    cin >> znak;

    if (znak != 't' && znak != 'n'){
        cout << "Poda³eœ z³y znak steruj¹cy, podaj nowy, tj. 'n' lub 't'." << endl;
        cin >> znak;
    }

    } while(znak != 't' && znak == 'n');

    return 0;
}
