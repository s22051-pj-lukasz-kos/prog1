#include <iostream>

using namespace std;

  float liczba1 = 0; // pierwsza liczba
  float liczba2 = 0; //druga liczba
  int operacja = 1; //domy�lna operacj� jest dodawanie

void menu1();
void dzialania();
void dodawanie(int a, int b);
void odejmowanie(int a, int b);
void mnozenie(int a, int b);
void dzielenie(int a, int b);

int main()
{
  setlocale(LC_ALL, "");
    char z='k';

  do{

    menu1();
    dzialania();

  } while (operacja != 0);

    return 0;
}

void dzialania(){
    switch (operacja) {
        case 1: dodawanie(liczba1,liczba2); break; //wyb�r operacji dodawania
        case 2: odejmowanie(liczba1,liczba2); break; //wyb�r operacji odejmowania
        case 3: mnozenie(liczba1,liczba2); break; //wyb�r operacji mno�enia
        case 4: dzielenie(liczba1,liczba2); break; //wyb�r operacji dzielenia
        case 0: cout << "Dzi�kuj�" << endl; break; // zako�czenie pracy
        default: cout << "nie ma takiej operacji" << endl;
  }
}

void menu1(){
  cout << "          kalkulator" << endl;
  cout << "-------------------------------" << endl;
  cout << endl;
  cout << "Podaj pierwsz� liczb�: " << endl; //podanie 1 liczby
  cin >> liczba1;
  cout << "Podaj drug� liczb�: " << endl; //podanie 2 liczby
  cin >> liczba2;
  cout << endl;
  cout << "Wybierz operacj�: " << endl; //interfejs
  cout << "1. Dodawanie" << endl;
  cout << "2. Odejmowanie" << endl;
  cout << "3. Mno�enie" << endl;
  cout << "4. Dzielenie" << endl;
  cout << "0. Koniec" << endl;
  cout << endl;
  cin >> operacja; // podanie numeru opearcji
  cout << "Tw�j wyb�r operacji: " << operacja << endl;
}

void dodawanie(int a, int b){
    cout << a << " + " << b << " = " << a + b;
}
void odejmowanie(int a, int b){
    cout << a << " - " << b << " = " << a - b;
}
void mnozenie(int a, int b){
    cout << a << " * " << b << " = " << a * b;
}
void dzielenie(int a, int b){
    if (b != 0) cout << a << " / " << b << " = " << a / b;
              else cout << "podaj inn� drug� liczb� - r�n� od zera" << endl;//wyb�r operacji dzielenia
}

