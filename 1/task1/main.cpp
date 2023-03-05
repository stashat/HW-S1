#include<iostream>
using namespace std;
int main()
{
		int width, length, area, perimeter;
		cout << "Enter the width of the rectangle: ";
		cin >> width;
		cout << "Enter the length of the rectangle: ";
		cin >> length;
		area = width*length;
		perimeter = 2*(width+length);
		cout << "------------------------------------\nThe area of the rectangle is: "<< area <<"\n";
		cout << "The perimeter of the rectangle is: "<< perimeter <<"\n";
		return 0;
}
