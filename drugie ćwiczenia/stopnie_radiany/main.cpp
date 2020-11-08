/* Program do przeliczania stopni k¹ta na radiany
*/

/*
aby uzyc stalej matematycznej PI nalezy zdefiniowac makro i zalaczyc biblioteke.
Te dwie linijki kodu sa NIEZMIENNE i nalezy je zapisywac dokladnie w tej kolejnosci,
jesli chce sie uzyc stalej matematycznej takiej jak PI.

#define _USE_MATH_DEFINES
#include <cmath>
*/

#define _USE_MATH_DEFINES   //aby uzyc stalej matematycznej nalezy najpierw zdefiniowac makro

#include <iostream>
#include <cmath>    //a nastepnie wlaczyc biblioteke, ktora zawiera stala M_PI


using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    float Radiany;
    float Stopnie;

    cout << "Podaj stopnie do przeliczenia na radiany: " << endl;
    cin >> Stopnie;

    Radiany = Stopnie * M_PI/180;

    cout << "Wynik: " << Radiany << " radianow." << endl;

    return 0;
}
