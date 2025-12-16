#include <iostream>
#include <cmath>
#include <string>
using namespace std;	
 
//int Swap(int a, int b) เขียนแบบนี้ไม่ด้นะจ๊ะ
int Swap(int &a,int &b) {
	
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	return 0;

}

int main() {
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Before swapping a is " << a << " b is " << b << endl;
	Swap(a,b);
	cout << "After swapping a is " << a << " b is " << b << endl;
}