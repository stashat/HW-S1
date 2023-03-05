// Schreiben Sie eine Funktion int binomial(int n, int k),
// die den Binomialkoeffizienten n über k berechnet.

#include<iostream>
#include<string>
using namespace std;

int Fakultaet(int var);

int Binomial(int n, int k);

int main()
{   
    cout << Binomial(10,6);
    return 0;
}

int Fakultaet(int var)
{
    int fakultaet {1};
    for(int i= 1; i<=var; i++)
    {
        fakultaet *= i;
    }
    return fakultaet;

}

int Binomial(int n, int k)
{
    return Fakultaet(n)/(Fakultaet(k)*Fakultaet(n-k));
}