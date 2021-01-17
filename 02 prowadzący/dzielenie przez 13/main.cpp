#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int licznik = 0;
    for (int i = 100; i < 1000; i++){

        if(i%13 == 0){
            cout << "dzieli siê przez 13 " << i << endl;
            licznik++;
        }
    }
    cout << "liczb, ktore dziel¹ siê przez 13 w zakresie od 100 do 1000 jest: " << licznik << endl;

    cout << "Pêtla while" << endl;

    licznik = 0;
    int i = 100;

    while (i < 1000){

        if(i%13 == 0){
            cout << "dzieli siê przez 13 " << i << endl;
            licznik++;
        }
        i++;
    }
    cout << "liczb, ktore dziel¹ siê przez 13 w zakresie od 100 do 1000 jest: " << licznik << endl;


    cout << "Pêtla do while" << endl;

    licznik = 0;
     i =100;

    do {

        if(i%13 == 0){
            cout << "dzieli siê przez 13 " << i << endl;
            licznik++;
        }
        i++;
    }while (i<1000);

    cout << "liczb, ktore dziel¹ siê przez 13 w zakresie od 100 do 1000 jest: " << licznik << endl;



    return 0;
}
