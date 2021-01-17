#include <iostream>

using namespace std;

void fun_tab(int t[], int n);
void fun_wsk1(int *wsk1, int n);
void fun_wsk2(int *wsk2, int n);


int main()
{
    setlocale(LC_ALL, "");
    int n = 7;

    int test[] = {5,3,2,5,2,5};
    cout << "=======tab==========" << endl;
    fun_tab(test,n);
    cout << "========wsk1=========" << endl;
    fun_wsk1(test,n);
    cout << "========wsk2=========" << endl;
    fun_wsk2(test,n);

    return 0;
}

void fun_wsk1(int *wsk1, int n){
    int suma = 0;
    for (int i = 0; i<n; i++) {
        cout << wsk1[i] << endl;
        suma += wsk1[i];
    }
    cout << "suma = " << suma << endl;
}

void fun_wsk2(int *wsk2, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++){
        cout << *(wsk2) << endl;
        suma += *(wsk2);
    }
    cout << "suma = " << suma << endl;

}

void fun_tab(int t[], int n) {
    int suma = 0;
    for (int i = 0; i<n; i++) {
        cout << t[i] << endl;

        suma += t[i];
    }
    cout << "suma = " << suma << endl;
}
