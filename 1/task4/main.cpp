#include<iostream>
#include <cmath>
using namespace std;
int main()
{
		double radius, angle, area;
		cout << "Enter the radius: ";
		cin >> radius;
		cout << "Enter the angle (in degrees): ";
		cin >> angle;
		area = (pow(radius,2)*M_PI*angle)/360;
		cout << "------------------------------------\nThe area of the sector is: "<< area <<"\n";
		return 0;
}
