/* 
	Skopiowane od prowadz�cego, bo nie by�o na zaj�ciach, ale 
	znalaz�o si� p�niej w kodzie od niego. 
*/
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int a1;
    int b1;
    int nww;

    setlocale(LC_ALL, "");
    cout << "Podaj liczb� a > 0: " ;
    cin >> a;
    cout << endl;
    cout << "Podaj liczb� b > 0: ";
    cin >> b;
    cout << endl;

    if (a > 0 && b > 0) {
        a1 = a;
        b1 = b;

        while (a1 != b1){

            if(a1>b1) {
                b1 = b1 + b;
            }else{
                a1 = a1 + a;
            }
        }
        nww = a1;
        cout << "nww = " << nww << endl;

    } else {

        nww = 0;
        cout << "nww = " << nww << endl;

    }

    return 0;
}
