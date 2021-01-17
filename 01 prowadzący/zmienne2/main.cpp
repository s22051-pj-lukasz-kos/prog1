#include <iostream>
// #include <conio.h>

using namespace std;

int main()
{


   int zmienna1;  // dla liczb, np. 2, 6666, 333, -11111
   float zmienna2; //dla liczb rzeczywistch np. 3.1415, -33.22222
   double zmiennad;
   char zmienna3; // d, k, %, (,
   string zmienna4; // "jakis ³ancuch danych"

   cout << "zmiana typu INT: " << zmienna1 << endl; // przez nazwê zmiennej odwouje siê do jej wartosci
   cout << "zmiana typu FLOAT: " << zmienna2 << endl;
   cout << "zmiana typu CHAR: " << zmienna3 << endl;
   cout << "zmiana typu STRING: " << zmienna4 << endl;
   cout << endl;

   cout << "rozmiar zmiennej INT: " << sizeof(zmienna1) << endl; // sprawdzam rozmaiar zarezerwoany dla zmiennej
   cout << "rozmiar zmiennej FLOAT: " << sizeof(zmienna2) << endl;
   cout << "rozmiar zmiennej CHAR: " << sizeof(zmienna3) << endl;
   cout << "rozmiar zmiennej STRING: " << sizeof(zmienna4) << endl;
   cout << endl;

   cout << "adres zmiennej INT: " << &zmienna1 << endl; // sprawdzam adres zmiennej
   cout << "adres zmiennej FLOAT: " << &zmienna2 << endl;
   cout << "adres zmiennej CHAR: " << &zmienna3 << endl;
   cout << "adres zmiennej STRING: " << &zmienna4 << endl;
   cout << endl;

   zmienna1 = 4394555;  // dla liczb, np. 2, 6666, 333, -11111
   zmienna2 = 3.1415; //dla liczb rzeczywistch np. 3.1415, -33.22222
   zmienna3 = '#';
   zmienna4 = "deneruje mnie ten Covid";

   cout << "zmiana typu INT: " << zmienna1 << endl; // przez nazwê zmiennej odwouje siê do jej wartosci
   cout << "zmiana typu FLOAT: " << zmienna2 << endl;
   cout << "zmiana typu CHAR: " << zmienna3 << endl;
   cout << "zmiana typu STRING: " << zmienna4 << endl;
   cout << endl;

   cout << "rozmiar zmiennej INT: " << sizeof(zmienna1) << endl; // sprawdzam rozmaiar zarezerwoany dla zmiennej
   cout << "rozmiar zmiennej FLOAT: " << sizeof(zmienna2) << endl;
   cout << "rozmiar zmiennej CHAR: " << sizeof(zmienna3) << endl;
   cout << "rozmiar zmiennej STRING: " << sizeof(zmienna4) << endl;
   cout << endl;

   cout << "adres zmiennej INT: " << &zmienna1 << endl; // sprawdzam adres zmiennej
   cout << "adres zmiennej FLOAT: " << &zmienna2 << endl;
   cout << "adres zmiennej CHAR: " << &zmienna3 << endl;
   cout << "adres zmiennej STRING: " << &zmienna4 << endl;

    //_getch();
    return 0;
}
