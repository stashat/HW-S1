#include<iostream>
using namespace std;

int main()
{
// Erstellen Sie die Additionstabelle und die Multiplikationstabelle modulo n. 
//Die Ausgabe für n=4 könnte zum Beispiel so aussehen:

// Addition
// 0	 	1	 	2	 	3
// 1		2		3		0
// 2		3		0		1
// 3		0		1		2

// Multiplikation
// 0	 	0	 	0	 	0
// 0		1		2		3
// 0		2		0		2
// 0		3		2		1
    int n;
    cout<<"Enter a number: ";
    cin >> n;

   cout<<"Additionstabelle:\n";
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            cout << " "<<(x+y)%n<<" ";
        }
        cout<<"\n";
    }

    cout<<"Multiplikationstabelle:\n";
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            cout << " "<<(x*y)%n<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}
