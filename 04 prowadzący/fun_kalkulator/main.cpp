#include <iostream>

using namespace std;

  float liczba1 = 0; // pierwsza liczba
  float liczba2 = 0; //druga liczba
  int operacja = 1; //domyœlna operacj¹ jest dodawanie

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
        case 1: dodawanie(liczba1,liczba2); break; //wybór operacji dodawania
        case 2: odejmowanie(liczba1,liczba2); break; //wybór operacji odejmowania
        case 3: mnozenie(liczba1,liczba2); break; //wybór operacji mno¿enia
        case 4: dzielenie(liczba1,liczba2); break; //wybór operacji dzielenia
        case 0: cout << "Dziêkujê" << endl; break; // zakoñczenie pracy
        default: cout << "nie ma takiej operacji" << endl;
  }
}

void menu1(){
  cout << "          kalkulator" << endl;
  cout << "-------------------------------" << endl;
  cout << endl;
  cout << "Podaj pierwsz¹ liczbê: " << endl; //podanie 1 liczby
  cin >> liczba1;
  cout << "Podaj drug¹ liczbê: " << endl; //podanie 2 liczby
  cin >> liczba2;
  cout << endl;
  cout << "Wybierz operacjê: " << endl; //interfejs
  cout << "1. Dodawanie" << endl;
  cout << "2. Odejmowanie" << endl;
  cout << "3. Mno¿enie" << endl;
  cout << "4. Dzielenie" << endl;
  cout << "0. Koniec" << endl;
  cout << endl;
  cin >> operacja; // podanie numeru opearcji
  cout << "Twój wybór operacji: " << operacja << endl;
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
              else cout << "podaj inn¹ drug¹ liczbê - ró¿n¹ od zera" << endl;//wybór operacji dzielenia
}

