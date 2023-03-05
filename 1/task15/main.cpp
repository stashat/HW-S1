#include<iostream>
using namespace std;

int main()
{
		double x, sum {0};
		
		for (int i = 1; i <= 5; i++) {
  	cout << "Enter the "<< i<<". number: ";
		cin >> x;
		sum += x;
		}
		
		cout << "The mean value is: " << sum/5 << "\n";
		return 0;
}
