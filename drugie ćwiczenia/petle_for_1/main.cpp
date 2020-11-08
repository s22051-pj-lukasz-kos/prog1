#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int u;

    for (u=0; u<6; u++) {
        cout << "c" << u << endl;
    }

    int n=0;
    int sum=0;

    cout << "Podaj liczbe n: " << endl;
    cin >> n;

    for (int i=0; i<=n; i++) {
        sum = sum + i;
        cout << "suma czêsciowa = " << sum << endl;
    }
    cout << "suma wynikowa " << sum << endl;

    return 0;
}
