#include<iostream>
using namespace std;

int lastDigit(int var) {
  var = var % 10;
  return var;
}

int restDigits(int var) {
  var = var / 10;
  return var;
}

int main()
{
		int x, y, z;
		cout << "Enter the first number: ";
		cin >> x;
		cout << "Enter the second number: ";
		cin >> y;
		cout << "Enter the third number: ";
		cin >> z;
		
		lastDigit(x);
		cout << "The number is: " << lastDigit(z) << lastDigit(y) << lastDigit(x) << restDigits(x) << restDigits(y) << restDigits(z) << "\n";
		return 0;
}
