#include <iostream>

using namespace std;

inline void suma(int a, int b){

    cout << "suma: " << a + b << endl;
}
inline void suma(int a, int b, int c){
    cout << "suma: " << a + b + c << endl;
}


int main()
{
    setlocale(LC_ALL, "");

    suma(3, 4);
    suma(5, 6, 3);

    return 0;
}
