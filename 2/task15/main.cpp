#include<iostream>
using namespace std;
int main()
{
    /*(*) Ein Bierversand verkauft Fässer mit jeweils n Liter Fassungsvermögen. 
    Die Kunden können beliebige Mengen in ganzen Litern bestellen. Schreiben Sie 
    ein Programm, das n und eine Bestellmenge einliest und die Anzahl der benötigten 
    Fässer mit einem Ausdruck berechnet. Verwendung einer anderen Anweisung (if, switch, Schleife) 
    oder einer bedingten Auswertung ist nicht erlaubt.*/
    int n, order_liters, rest;
    cout << "Enter the amount of liters in a keg: ";
    cin >> n;
    cout << "Enter the amount of liters for order: ";
    cin >> order_liters;
    cout << "The amount of kegs needed is: "<<((order_liters+n-1)/n)<<"\n";
    return 0;
}