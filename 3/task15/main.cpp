#include<iostream>
using namespace std;


int main()
{
    string num {""};
    int numLength {0}, kommaUsed{0};
    cout << "Enter a  number: ";
    cin >> num;
    numLength = num.length();


    for (int i = 0; i < numLength; i++)
    {
        if (static_cast<int> (num[i])- 48!=(0 || 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || -2))
        {
            throw runtime_error( "Not a valid number input." );
        }
        if((num[i])- 48==-2 && kommaUsed==0) kommaUsed++;
        else if (kommaUsed==1) throw runtime_error( "Not a valid number input." );
    }
    

    for (int i = 0; i < numLength; i++) 
    {
        switch (static_cast<int>(num[i])- 48)
        {
            case 0:
                cout<<"null";
                break;
            case 1:
                cout<<"eins";
                break;
            case 2:
                cout<<"zwei";
                break;
            case 3:
                cout<<"drei";
                break;
            case 4:
                cout<<"vier";
                break;
            case 5:
                cout<<"fuenf";
                break;
            case 6:
                cout<<"sechs";
                break;
            case 7:
                cout<<"sieben";
                break;
            case 8:
                cout<<"acht";
                break;
            case 9:
                cout<<"neun";
                break;
            case -2:
                if(kommaUsed==0) 
                {
                    kommaUsed++,
                    cout<<"komma";
                }
                else throw runtime_error( "Not a valid number input." );
                break;
            default:
                throw runtime_error( "Not a valid number input." );
        }
        if(i<numLength-1) cout << "-";
    }


    return 0;
}