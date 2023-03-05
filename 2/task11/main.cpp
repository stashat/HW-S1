#include<iostream>
using namespace std;
int main()
{
    double num;
    cout << "Geben Sie eine Zahl ein: ";
    cin >> num;
    if(num/(int)num!=1) cout << "Keine ganze Zahl.\n";
    else  cout << "Eine ganze Zahl.\n";

}