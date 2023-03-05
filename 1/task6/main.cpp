#include<iostream>
using namespace std;
int main()
{
		int n, sum;
		cout << "Enter the number n: ";
		cin >> n;
		for (int i = 0; i <= n; i++) {
            sum = sum + i;
        };
		cout << "------------------------------------\nThe sum is : "<< sum <<"\n";
		return 0;
}
    
