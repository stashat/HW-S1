#include<iostream>
using namespace std;
int main()
{
    /*Lesen Sie zwei ganze Zahlen ein und ermitteln Sie, ob die zuletzt eingegebene 
    Zahl ein Teiler der zuerst eingegebenen Zahl ist. Z.B.: Eingabe: 7 3 Ausgabe: 
    3 teilt 7 nicht. Eingabe: 15 5 Ausgabe: 5 teilt 15.*/
    int num_1, num_2;
    cout << "Prüfen, ob eine Zahl durch eine andere Zahl teilbar ist.\nGeben Sie die erste Zahl ein: ";
    cin >> num_1;
    cout << "Geben Sie die zweite Zahl ein: ";
    cin >> num_2;
    if (num_1 % num_2 == 0) cout << num_2 << " teilt " << num_1 << "\n";
    else cout << num_2 << " teilt " << num_1 << " nicht\n";

    return 0;
}