#include<iostream>
using namespace std;

int main()
{
    int num, invers_digit, invers_count {0}, num_of_digits {0}, num_ref1, num_ref2;
    cout<<"Input a number: ";
    cin >>num;

    num_ref1 = num;
    num_ref2 = num;
    while(num_ref1!=0)
    {
        num_of_digits++;
        num_ref1 = num_ref1/10;
    }

    for (int i = 0; i <= num_of_digits; i++)
    {
        num = num_ref2;
        invers_digit = num % 10;

        for (int i = 0; i < num_of_digits; i++)
        {   
            num = num/10;

            if(!(num % 10>num / 10 && num / 10>0) && invers_digit<num % 10)
            {
                invers_count++;
            }
            else break;
        }
        num_ref2 = num_ref2/10;
    }
    
    cout<<"Number of inversions: "<<invers_count<<"\n";
    
    return 0;
}