/*
Program realizuje prostym kalkulatorem pracuj¹cym z dwoma liczbami
podawanymi z konsoli.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "");

  float liczba1 = 0; // pierwsza liczba
  float liczba2 = 0; //druga liczba
  int operacja = 1; //domy˜lna operacj¥ jest dodawanie
  cout << "          kalkulator" << endl;
  cout << "-------------------------------" << endl;
  cout << endl;
  cout << "Podaj pierwsz¥ liczb©: " << endl; //podanie 1 liczby
  cin >> liczba1;
  cout << "Podaj drug¥ liczb©: " << endl; //podanie 2 liczby
  cin >> liczba2;
  cout << endl;
  cout << "Wybierz operacj©: " << endl; //interfejs
  cout << "1. Dodawanie" << endl;
  cout << "2. Odejmowanie" << endl;
  cout << "3. Mno¿enie" << endl;
  cout << "4. Dzielenie" << endl;
  cout << "0. Koniec" << endl;
  cout << endl;
  cin >> operacja; // podanie numeru opearcji
  cout << "Twój wybór operacji: " << operacja << endl;

  switch (operacja) {
  case 1: cout << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2; break; //wybór operacji dodawania
  case 2: cout << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2; break; //wybór operacji odejmowania
  case 3: cout << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2; break; //wybór operacji mno¿enia
  case 4: if (liczba2 != 0) cout << liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2;
              else cout << "podaj inn¹ drug¹ liczbê - ró¿n¹ od zera" << endl;  break; //wybór operacji dzielenia
  case 0: cout << "Dziêkujê" << endl; break; // zakoñczenie pracy

  default: cout << "nie ma takiej operacji" << endl;
  }

  _getch();
    return 0;
}
