#include <iostream>

using namespace std;

int x;
int y;

void zmienia_war(int x, int y);
void zmienia_ref(int &x, int &y);

int main()
{
    setlocale(LC_ALL, "");

    x = 3;
    y = 8;

    cout << "x war = " << x << " y war = " << y << endl;

    zmienia_war(x, y);

    cout << "x war = " << x << " y war = " << y << endl;

    cout << " ---------------------------------- " << endl;

    cout << "x ref = " << x << " y ref = " << y << endl;

    zmienia_ref(x, y);

    cout << "x ref = " << x << " y ref = " << y << endl;

    return 0;
}
void zmienia_ref(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

   cout << "x ref = " << x << " y ref = " << y << endl;
}

void zmienia_war(int x, int y){
    int temp;
    temp = x;
    x = y;
    y =temp;

   cout << "x war = " << x << " y war = " << y << endl;
}
