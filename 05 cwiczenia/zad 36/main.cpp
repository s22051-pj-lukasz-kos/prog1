#include <iostream>

using namespace std;
float prost(float flug, float szer, float wys, float &objetosc);

int main()
{
    setlocale(LC_ALL, "");
    float d;
    float s;
    float w;
    float objetosc;

    cout << "Podaj dlugosc: ";
    cin >> d;
    cout << "Podaj szerokosc: ";
    cin >> s;
    cout << "Podaj wysokosc: ";
    cin >> w;

    cout << "Pole = " << prost(d,s,w,objetosc) << endl;
    cout << "Objetosc = " << objetosc << endl;

    return 0;
}

float prost(float dlug, float szer, float wys, float &objetosc){
    float pole;

    pole = dlug * szer * 2 + dlug * wys * 2 + szer * wys * 2;

    objetosc = dlug * szer * wys;

    return pole;
}
