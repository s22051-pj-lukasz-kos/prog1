#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int w;
    int k;
    char znak;

    cout << "Podaj liczbê wierszy: ";
    cin >> w;
    cout << endl;

    cout << "Podaj liczbê kolumn: ";
    cin >> k;
    cout << endl;

    cout << "Podaj znak do rysowania: ";
    cin >> znak;
    cout << endl;

    for (int i = 0; i<w; i++){

        for (int j = 0; j<k; j++){
           if(j==0 || j==k-1 || i==0 || i==w-1){
                cout << znak;
           } else {
                cout << " ";
            }
        }
            cout << endl;
    }

    return 0;
}
