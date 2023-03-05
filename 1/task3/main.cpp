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
		angle = (angle*M_PI)/180;
		area = ((angle-sin(angle))*pow(radius,2))/2;
		cout << "------------------------------------\nThe area of the segment is: "<< area <<"\n";
		return 0;
}
