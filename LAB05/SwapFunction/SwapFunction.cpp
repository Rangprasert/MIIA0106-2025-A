#include <iostream>
#include <cmath>
#include <string>
using namespace std;	
 
int a = 10,b = 20;
void BeforeSwap() {
	cout << "Before swapping a is " << a <<" b is "<< b << endl;
}
void AfterSwap() {
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "After swapping a is " << a << " b is "<< b << endl;
}
int main() {
	BeforeSwap();
	AfterSwap();
	
	return 0;
}