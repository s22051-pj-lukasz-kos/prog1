#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string txt1 = "mamy zimê i to jak¹";
    string txt2(txt1, 4);

//    string txt3;
//    cout << "napisz cos " << endl;
//    cin >> txt3;

//    cout << txt3 << endl;

    cout << txt1 << endl << txt2 << endl;

    cout << "Inny tekst" << endl;
    string txt4;

    getline(cin, txt4);

    cout << txt4 << endl;

    cout << "£¹czenie: " << txt1 + " coœtam " + txt2 << endl;

    txt2.append("jeszcze inny tekst");
    cout << txt2 << endl;

    txt2.insert(4, txt2);
    cout << txt2 << endl;

    txt2.insert(4, txt1, 6, 4);
    cout << txt2 << endl;

    txt2.erase(7);
    cout << txt2 << endl;

    cout << "Pozycja literki k: " << txt1.find('k') << endl;

    for  (int i = 0; i<txt1.length(); i++) {
        cout << i << " " << txt1[i] << endl;
    }

    return 0;
}
