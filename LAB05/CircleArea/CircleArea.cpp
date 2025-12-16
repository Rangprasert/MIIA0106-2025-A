#include <iostream>
#include <string>
using namespace std;


void Circle()
{	
	double radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	double area = 3.14159 * radius * radius;
	cout << "Circle area is = "<< area << endl;

}
int main()
{
	Circle();
}
