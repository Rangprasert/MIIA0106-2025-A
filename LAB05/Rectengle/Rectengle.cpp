#include <iostream>
#include <string>
using namespace std;

void Rectangle()
{
	double width;
	double length;
	cout << "Enter width"<<endl;
	cin >> width;
	cout << "Enter length" << endl;
	cin >> length;
	double sum = width * length;
	cout << "Rectangle area is  =" << sum  << endl;
}
int main()
{
	Rectangle();
}


