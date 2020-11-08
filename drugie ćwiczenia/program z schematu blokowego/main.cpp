/* program do weryfikacji parzystosci sumy dwoch liczb
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int c;
    int d;

    cout << "Podaj a: ";
    cin >> a;

    cout << endl;

    cout << "Podaj b: ";
    cin >> b;

    c = a + b;

    d = c % 2;

    if (d == 0) {
        cout << "Suma a+b jest parzysta" << endl;
    } else {
        cout << "Suma a+b jest nieparzysta" << endl;
    }

    return 0;
}
