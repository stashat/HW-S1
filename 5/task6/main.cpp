#include<iostream>
using namespace std;

// Schreiben Sie eine Funktion int ggt(int a, int b), die den größten gemeinsamen Teiler der beiden natürlichen Zahlen a und b berechnet. 
// Verwenden Sie keine Schleifen in der Funktion und testen Sie Ihre Funktion in einem Hauptprogramm, 
// das jeweils den Zähler und den Nenner eines Bruches einliest und die gekürzte Version des Bruches ausgibt.

int ggt(int a, int b)
{
    if (b == 0)
       return a;
    else 
       return ggt(b, a % b);
}


int main()
{
    int input_a {0}, input_b {0};
    cout << "Enter the first number: ";
    cin >> input_a;
    cout << "Enter the second number: ";
    cin >> input_b;
    cout << "Greatest common divisor of " << input_a << " and " << input_b << " is: " << ggt(input_a, input_b);
    return 0;
}