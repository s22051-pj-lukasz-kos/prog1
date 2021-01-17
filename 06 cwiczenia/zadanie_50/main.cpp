#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string zdanie;
    cout << "Program liczy wyrazy" << endl;
    cout << "Wpisz zdanie" << endl;
    getline(cin, zdanie);

    int licz = 1;

    for (int i = 0; i < zdanie.length(); i++) {
        if (0 != isspace(zdanie[i])) {
            licz++;
        }
    }

    cout << "napisa³eœ " << licz << " wyrazów." << endl;



    return 0;
}
