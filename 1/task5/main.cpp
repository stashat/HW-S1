#include<iostream>
using namespace std;
int main()
{
		double celsius, fahrenheit;
		cout << "Enter the celsius value: ";
		cin >> celsius;
		fahrenheit = celsius*1.8+32;
		cout << "------------------------------------\nThe value in fahrenheit is: "<< fahrenheit <<"\n";
		return 0;
}
