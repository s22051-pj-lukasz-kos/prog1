#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int n;
    bool pier = false;

    cout << "Podaj liczbe " << endl;
    cin >> n;

    for (int i=2; i*i <= n; i++ ){
        if (n%i == 0){
            pier = false;
        }else {
            pier = true;
        }
    }

    if(pier == true){
        cout << "Liczba pierwsza" << endl;
    } else {
        cout << "Nie jest liczb¹ pierwsz¹" << endl;
    }

    return 0;
}
