#include<iostream>
using namespace std;

int main()
{
    //Berechnen Sie die Fakultät von n (n!) mit Hilfe einer Schleife.
    int n;
    double fakultaet{1};
    cout<<"Enter a number: ";
    cin >> n;
    for (n; n > 1; n--)
    {
        fakultaet = fakultaet*n;
    }
    
    cout<<"Fakultät: "<<fakultaet<<"\n";

    return 0;
}
