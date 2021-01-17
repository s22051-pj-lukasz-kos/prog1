#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int n = 10;

    int * tab = new int[n];

    for (int i = 0; i < 40; i++) {
        tab[i] = i;
    }

    for (int i = 0; i < 40; i++) {
        cout < tab [i] << endl;
    }

    deleta [] tab;  // wszystkie operatory tworzone za pomoca funkcji new trzeba ubic na koncu programu
    return 0;
}
