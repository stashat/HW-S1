#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int four_digit_num, digit, power;

    cout << "Enter a 4 digit number: ";
    cin >> four_digit_num;
    if(four_digit_num<1000 || four_digit_num>9999)
    {
        cout << "The number must have 4 digits!";
        return 0;
    }
    for (int i = 3; i >= 0; i--)
    {
        power = pow(10,i);
        digit = four_digit_num / power;
        switch (digit)
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
        }
        four_digit_num = four_digit_num - digit*power;
        if(i>0) cout<<"-";
    }
        
    return 0;
}