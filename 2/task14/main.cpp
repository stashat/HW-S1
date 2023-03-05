#include<iostream>
using namespace std;
int main()
{
    /*(*) Evaluate the expression 2147483647+1 using the data types int, unsigned, long and double respectively. 
    Compare and interpret the results. Note: The current settings on the environment provided by us cause the 
    undefined behavior of int-overflow to be recognized at runtime and lead to the program aborting. 
    In order to achieve the desired behavior, the corresponding test programs (sanitizer) must not be included. 
    This can be achieved by prefixing the compile command with a backslash (i.e. \clang++ ...).*/
    cout << "int: "<< (int)2147483647+(int)1 << "\n";
    cout << "unsigned: "<< (unsigned)2147483647+(unsigned)1 << "\n";
    cout << "long: "<< (long)2147483647+(long)1 << "\n";
    cout << "double: "<< (double)2147483647+(double)1 << "\n";

    return 0;
}