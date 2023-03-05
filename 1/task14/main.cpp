#include<iostream>
using namespace std;

int main()
{
		double x, coefficient, result {0};
		
		cout << "Enter the value x: ";
		cin >> x;
		cout << "a4x4 + a3x3 + a2x2 + a1x + a0\n";
		for (int i = 4; i >= 0; i--) {
  			cout << "Enter the a"<< i<<" coefficient: ";
			cin >> coefficient;
			if (i<4) result = result*x+coefficient;
			else result += coefficient;
		}

		cout << "Result: " << result << "\n";
		return 0;
}
