#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float licz1;
    float licz2;
    float dziel;

    cout << "Podaj pierwsz¹ liczbê: " << endl;
    cin >> licz1;

    cout << "Podaj drug¹ liczbê: " << endl;
    cin >> licz2;


    if(licz1>0 && licz2>0){

        dziel = licz1 / licz2;
        cout << "Twoje dzielene: " << dziel << endl;
    } else if(licz2 == 0){

        cout << "Nie mo¿na dzieliæ przez 0" << endl;
    } else {

        cout << "Powtórz oblicznia" << endl;
    }



    return 0;
}
