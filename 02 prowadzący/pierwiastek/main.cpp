#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");
    int licz;
    float pierwias;

    cout << "Podaj liczb� do pierwiastkowania: " << endl;

    cin >> licz;

    pierwias = sqrt(licz);

    cout << "Tw�j wynik: " << pierwias << endl;

    return 0;
}
