//Lab4-6.cpp - displays the area of a triangle
//Created/revised by <Hannah Rhode> on <02/06/2025>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int base = 11;
	int height = 13;
	double area = 0.0;

	//calculate and display area
	area = base * height / 2.0;
	cout << "Area: " << area << endl;

	return 0;
}	//end of main function