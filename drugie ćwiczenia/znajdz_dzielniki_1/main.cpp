/*
Program szukający liczby trzycyfrowe podzielne przez 13
wykorzystujacy trzy rodzaje petli
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int licznik = 0;

    //wykorzystanie petli for
    for (int i = 100; i < 1000; i++) {
        if (i%13 == 0) {
            cout << i << endl;
            licznik++;
        }
    }
    cout << "Liczb podzielnych przez 13 jest " << licznik << endl;


    //ten sam program, ale z wykorzystaniem petli do
    int i = 100;
    licznik = 0;
    do {
        if (i%13 == 0) {
            cout << i << endl;
            licznik++;
        }
        i++;
    } while (i < 1000);
    cout << "Liczb podzielnych przez 13 jest " << licznik << endl;


    //to samo co powyzej z wykorzystaniem petli while
    i = 100;
    licznik = 0;
    while (i<1000) {
        if (i%13 == 0) {
            cout << i << endl;
            licznik++;
        }
        i++;
    }
    cout << "Liczb podzielnych przez 13 jest " << licznik << endl;

    return 0;
}
