#include<iostream>
using namespace std;
// Schreiben Sie die Funktionen int mult(int m, int n) und int power(int m, unsigned int n), 
// die das Produkt m∗n bzw. die Exponentialfunktion m^n der ganzen Zahlen m und n berechnen. 
// Verwenden Sie dazu nicht den Operator * (Multiplikation) und auch keine Schleifen in der Funktion.
// Das Verwenden irgendwelcher externer Routinen (z. B. Mathematikbibliotheken) ist ebenfalls nicht erlaubt! 
// Beachten Sie, dass int-Werte auch negativ oder gleich 0 sein können.
// Hinweis: m∗n=m+m∗(n−1) für n>0 bzw. m^n=m∗m^(n−1)

int mult(int m, int n)
{
    if(n>0)
    {
        return m + mult(m, n-1);
    }
    else if(n==0) return 0;
    else
    {
        return -m + mult(m, n+1);
    }
}


int power(int m, unsigned int n)
{
    if(n > 0) return mult(m, power(m,n-1));
    else return 1;
}

int main()
{
    int input_m1 {0}, input_n1{0}, input_m2 {0}, input_n2{0};
    //Multiply
    cout << "Enter a number to multiply: " ;
    cin >> input_m1;
    cout << "Enter a number to multiply: " ;
    cin >>input_n1;
    cout <<input_m1 << "*" << input_n1 << " is: " <<mult(input_m1,input_n1) << "\n";
    //Power
    cout << "Enter a base: " ;
    cin >> input_m2;
    cout << "Enter the power: " ;
    cin >>input_n2;
    if(input_n2<0) throw runtime_error("Power has to be a positive number or 0!");
    cout <<input_m2 << "^" << input_n2 << " is: " <<power(input_m2,input_n2)<< "\n";
    return 0;
}