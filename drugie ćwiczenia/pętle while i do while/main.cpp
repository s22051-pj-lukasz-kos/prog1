#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int i = 0;

    while (i < 6) {
        cout << "Costam while" << i << endl;
        i++;
    }

    i=0;
    do {
        cout << "Costam do " << i << endl;
        i++;
    } while (i<6);


    return 0;
}
