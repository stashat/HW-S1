#include<iostream>
using namespace std;
int main()
{
/*(*) Write an expression (i.e. no statement or similar) 
that rounds a positive number x correctly 
(i.e. round up from 0.5 and down below).
*/
    double num_to_round;
    cout<< "Enter a number to round: ";
    cin>> num_to_round;
    cout<< (int)(num_to_round + 0.5);
    
    return 0;
}