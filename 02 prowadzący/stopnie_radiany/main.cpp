#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

float Rad;
float Stop;

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Podaj stopnie do przeliczenia na radiany: " << endl;

    cin >> Stop;

    Rad = Stop*M_PI/180;

    cout << "Po przeliczeniu mamy " << Rad << " radianów." << endl;

    return 0;
}
