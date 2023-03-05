#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, ziffer_num;
    cout << "Geben Sie eine Zahl ein: ";
    cin >> num;
    cout << "Geben Sie die Nummer der Ziffer ein: ";
    cin >> ziffer_num;
    cout << "Die Ziffer Nummer "<< ziffer_num << " ist: "<< (int)(num/pow(10,ziffer_num-1))%(10) << "\n";

}