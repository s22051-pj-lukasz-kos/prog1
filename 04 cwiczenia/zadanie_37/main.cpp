#include <iostream>

using namespace std;

int liczba1;
int liczba2;
int liczba3;

int max2(int a, int b);
int max3(int a, int b, int c);

int main()
{
    setlocale(LC_ALL, "");

    cout << "Podaj pierwsz� liczb�" << endl;
    cin >> liczba1;
    cout << "Podaj drug� liczb�" << endl;
    cin >> liczba2;

    cout << "Najwi�ksz� liczb� jest " << max2(liczba1, liczba2) << endl;
    cout << endl;

    cout << "Podaj trzeci� liczb�" << endl;
    cin >> liczba3;

    cout << "Najwi�ksz� liczb� spo�r�d wszystkich trzech jest " << max3(liczba1, liczba2, liczba3) << endl;

    return 0;
}

int max2(int a, int b) {
    if(a >= b) {
        return a;
    } else {
        return b;
    }
}

int max3(int a, int b, int c) {
//    int first_check = max2(a, b);

//    if (first_check >= c) {
//        return first_check;
//    } else {
//        return c;
//    }
    if (max2(a, b) >= c) {
        return max2(a,b);
    } else {
        return c;
    }
}
