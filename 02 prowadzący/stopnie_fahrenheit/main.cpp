#include <iostream>

float C;
float F;

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Podaj stopnie Celciuksza do przeliczenia: " << endl;

    cin >> C;

    F = 32 + 1.8*C;

    cout << "Po przeliczeniu mamy " << F << " stopni Fahrenheita." << endl;

    return 0;
}
