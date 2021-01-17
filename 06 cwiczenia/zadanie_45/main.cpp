#include <iostream>

using namespace std;

int f(int *a,int *b);
int* g(int *a,int *b);

int main() {
//uzupelnij
    int liczcb1 = 3;
    int liczcb2 = 5;

    int wynikf = f(&liczcb1, &liczcb2);
    cout << "Funkcja f: " << wynikf << endl;

    int wynikg = *g(&liczcb1, &liczcb2);
    cout << "Funkcja g: " << wynikg << endl;
}

int f(int *a, int *b)
{
    if(*a<*b) return *a;
    else return *b;
}

int* g(int *a, int *b)
{
    if(*a<*b) return a;
    else return b;
}
