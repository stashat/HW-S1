#include<iostream>
using namespace std;

int main()
{
    //Sortieren Sie 3 eingelesene double Zahlen ohne Verwendung von logischen Operatoren.
    double first_num, second_num, third_num;
    cout<<"Enter the first number: ";
    cin >> first_num;
    cout<<"Enter the second number: ";
    cin >> second_num;
    cout<<"Enter the third number: ";
    cin >> third_num;

    if(first_num > third_num)
    {
        int temp = first_num;
        first_num = third_num;
        third_num = temp;
    }

    if(second_num > third_num)
    {
        int temp = second_num;
        second_num = third_num;
        third_num = temp;
    }

    if(first_num > second_num)
    {
        int temp = first_num;
        first_num = second_num;
        second_num = temp;
    }
    
    cout << first_num << "   " << second_num << "   " << third_num<<"\n";

    return 0;
}