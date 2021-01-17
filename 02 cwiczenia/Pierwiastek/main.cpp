#include <iostream>
#include <cmath>    //biblioteka do implementacji funkcji sqrt()

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int licz;
    float pierw;

    cout << "Podaj liczbê do pierwiastkowania: " << endl;

    cin >> licz;

    pierw = sqrt(licz);

    cout << "Wynik pierwiastkowania: " << pierw << endl;

    return 0;
}
