#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

     for (int u = 0 ; u<10; u++){

         cout << "u = " << u ;
        cout << " cze��" << endl;
    }

    int n=0;
    int sum=0;

    cout << "Podaj liczb� n : " << n << endl;
    cin >> n;

    for (int i=0; i <=n; i++){

        sum = sum + i;

        cout << "i = " << i << endl;
        cout << "suma cz�ciowa = " << sum << endl;

    }
    cout << "suma wynikowa = " << sum << endl;

    return 0;
}
