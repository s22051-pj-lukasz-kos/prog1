#include <iostream>

using namespace std;

struct trojkat {
    int a;
    int b;
    int c;
};

float obwod (trojkat t);

trojkat skala(trojkat t, float skala);

int main()
{
    setlocale(LC_ALL, "");

    trojkat tt;
    trojkat nn;

    tt.a = 4;
    tt.b = 3;
    tt.c = 2;

    nn.a = 33;
    nn.b = 222;
    nn.c = 99;

    cout << "Obwód tt = " << obwod(tt) << endl;
    cout << "Obwód nn= " << obwod(nn) << endl;

    trojkat duzy;
    duzy = skala(tt);
    cout << "Obwod dla nn = " << obwod(duzy) << endl;

    return 0;
}

float obwod(trojkat t) {
    return t.a + t.b + t.c;
}

trojkat skala(trojkat t, float skala) {
    t.a = t.a*skala;
    t.b = t.b*skala;
    t.c = t.c*skala;

    return t;
}
