#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum transport {SAMOCHOD, TRAMWAJ, AUTOBUS, ROWER, NOGI};

int main()
{
    srand(time(NULL));

    // rand()%5
    int losowanie = rand() % 5;
    transport sposob;
    sposob = (transport)losowanie;

    switch (sposob)
    {
        case SAMOCHOD:
                  cout << "Pojade samochodem!" << endl;
                  break;
        case AUTOBUS: case TRAMWAJ:
                  cout << "Skorzystam dzis z transportu publicznego!" << endl;
        break;
        case ROWER:
                  cout << "Pojade rowerem!" << endl;
                  break;
        default:
                  cout <<  "Pojde na piechote!" << endl;
                  break;
    }

    return 0;
}
