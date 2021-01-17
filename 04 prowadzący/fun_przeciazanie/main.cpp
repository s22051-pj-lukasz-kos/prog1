#include <iostream>

using namespace std;

int pole(int a, int b);
int pole(int a);

int main()
{
    setlocale(LC_ALL, "");

    int x = 4;
    int y = 7;

    cout << "Pole prostok¹ta = " << pole(x,y) << endl;
    cout << "Pole kwadratu = " << pole(x) << endl;

    return 0;
}

int pole(int a){

    return a*a;

}

int pole(int a, int b){

    return a*b;
}
