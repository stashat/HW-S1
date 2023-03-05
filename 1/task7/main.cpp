#include<iostream>
using namespace std;
int main()
{
		double euro, dollar;
		cout << "Enter euros: ";
		cin >> euro;
		dollar = 0.9722186*euro;
		cout << "------------------------------------\nDollars : "<< dollar <<" USD\n";
		return 0;
}
