#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main ()
{
	double a, b;
	cout << "Mass in grams:" << endl; 
	cin>> a;
	cout << "Density in Grams/Cubic Centimeters:" << endl; 
	cin>> b;
	cout << "Volume: " << a*4*b << endl;
	_getch();
	return 0;
}
