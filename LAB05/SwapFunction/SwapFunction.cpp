#include <iostream>
#include <cmath>
#include <string>
using namespace std;	
 
int a,b ;
void Swap() {
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Before swapping a is " << a <<" b is "<< b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "After swapping a is " << a << " b is " << b << endl;

}

int main() {
	Swap();
	return 0;
}