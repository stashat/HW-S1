#include<iostream>
#include<cmath>
using namespace std;


//Function to get the string according to the input/digit
//WORKS FOR NUMBERS FROM 0 TO 999999999.999999999 !!!!!
void printDigit(double num)

{
    int num_of_digits {0}, digit, num_ref;
    num_ref = num;
    while(num_ref!=0)
    {
        num_of_digits++;
        num_ref = num_ref/10;  
    }

    for (int i = num_of_digits-1; i >= 0; i--)
    {
        digit = num / pow(10,i);
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

        num = num - digit*pow(10,i);
        if(i>0) cout<<"-";
    }
}

int main()
{
    int  num_int;
    double num, decimal_part {0};
    bool has_decimal {false};
    //Input
    cout << "Enter a  number: ";
    cin >> num;
    //Check if the input has a decimal part
    num_int =  static_cast<int>(num);
    if(num_int!=num)
    {
        decimal_part = num - num_int;
        has_decimal = true;
    }
    //Rounding the decimal part
    decimal_part =  static_cast<int>(decimal_part * 1000000000 + .5);
    decimal_part =  static_cast<double>(decimal_part) / 1000000000;
    //Turn the decimal part into a whole number
    while (decimal_part!= static_cast<int>(decimal_part))
    {
        decimal_part = decimal_part*10;
    }
    //Call the function to get the output
    printDigit(static_cast<double>(num_int));
    if(has_decimal)
    {
        cout<<"-komma-";
        printDigit(decimal_part);
    }
    cout << "\n";

    return 0;
}