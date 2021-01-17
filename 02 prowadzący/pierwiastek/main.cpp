#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");
    int licz;
    float pierwias;

    cout << "Podaj liczbê do pierwiastkowania: " << endl;

    cin >> licz;

    pierwias = sqrt(licz);

    cout << "Twój wynik: " << pierwias << endl;

    return 0;
}
