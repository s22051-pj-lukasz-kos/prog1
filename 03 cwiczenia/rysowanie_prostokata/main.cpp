#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int wiersze;
    cout << "Podaj liczb� wierszy: ";
    cin >> wiersze;
    cout << endl;

    int kolumny;
    cout << "Podaj liczb� kolumn: ";
    cin >> kolumny;
    cout << endl;

    char znak;
    cout << "Podaj znak: ";
    cin >> znak;
    cout << endl;

    for (int i=0; i<wiersze; i++) {
        for (int j=0; j<kolumny; j++) {
            if (i==0 || i==wiersze-1 || j==0 || j==kolumny-1) {
                cout << znak;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
