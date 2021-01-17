#include <iostream>

using namespace std;

int a;
int b;
int c;


int main()
{
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;
    cout << "Podaj c: " << endl;
    cin >> c;

    if (a<b && b < c){
            cout << a << endl;

    } else if (c<b){
        cout << c << endl;

    } else {

        cout << b << endl;
    }

}
