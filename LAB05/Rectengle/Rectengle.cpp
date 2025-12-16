#include <iostream>
#include <string>
using namespace std;

double width;
double length;
int main()
{
	cout << "Enter width"<<endl;
	cin >> width;
	cout << "Enter length" << endl;
	cin >> length;
	double sum = width * length;
	cout << "Rectangle area is  =" << sum  << endl;
}