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

    cout <<"Je�eli chcesz wyliczycz nwd to podaj liczb�" << endl;
    cout <<"J�e�eli chcesz sko�czy� dzia�anie programu to wci�nij 't' a je�eli kontynuowa� to wci�nij 'n'." << endl;

    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "Podaj liczb� a: ";
    cin >> a;
    cout << endl;

    cout << "Podajliczb� b: ";
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


        cout << "Najwi�kszy wsp�lny podzielni = " << nwp << endl;

    }else {

        cout << "Brak rozwi�zaia" << endl;
    }

    cout << endl << endl;
    cout << "Wybierz klawisz 't', aby sko�czy� lub 'n' aby kontynuowa�." << endl;
    cin >> znak;

    if (znak != 't' && znak != 'n'){
        cout << "Poda�e� z�y znak steruj�cy, podaj nowy, tj. 'n' lub 't'." << endl;
        cin >> znak;
    }

    } while(znak != 't' && znak == 'n');

    return 0;
}
