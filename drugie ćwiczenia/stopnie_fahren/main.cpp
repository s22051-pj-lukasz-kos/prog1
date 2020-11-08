/* program do przeliczani stopni Cejciusza na stopnie Fahrenheita
*/

#include <iostream>
#include <cmath>

float Stopnie;
float Fahren;

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    cout << "Podaj stopnie Celcjusza: " << endl;
    cin >> Stopnie;

    Fahren = 32 + 1.8*Stopnie;

    cout << "Wynik w Fahrenheitach to: " << Fahren << endl;

    return 0;
}
