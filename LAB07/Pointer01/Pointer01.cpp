#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int* p = &x;

	cout << "Value of x: " << x << endl;
	cout << "(value pointed to by p): " << *p << endl;
	return 0;
}