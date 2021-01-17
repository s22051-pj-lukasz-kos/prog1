#include <iostream>

using namespace std;

int a;
int b;
int c;

int max2(int a, int b);
int max3(int a, int b, int c);

int main()
{
    setlocale(LC_ALL, "");

    cout << "Podaj a = " << endl;
    cin >> a;
    cout << endl;

    cout << "Podaj b = " << endl;
    cin >> b;
    cout << endl;

    cout << "Podaj c = " << endl;
    cin >> c;
    cout << endl;

    cout << "Max2 = " << max2(a,b) << endl;
    cout << "Max3 = " << max3(a,b,c) << endl;

    return 0;
}

int max3(int a, int b, int c){

    if (c > max2(a,b)){
        return c;
    }else {
        return max2(a,b);
    }
}

int max2(int a, int b){

    if(a>b){
        return a;
    }else {
        return b;
    }
}
