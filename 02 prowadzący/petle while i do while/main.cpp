#include <iostream>

using namespace std;

int main()
{
    int i = 6;

    setlocale(LC_ALL, "");

    while (i < 6) {

        cout << "i = " << i ;
        cout << " Czeœæ" << endl;

        i++;
    }

    i = 6;

    do {

        cout << "i = " << i ;
        cout << " Hej" << endl;

        i++; // ++i
    } while (i < 6);


    return 0;
}
