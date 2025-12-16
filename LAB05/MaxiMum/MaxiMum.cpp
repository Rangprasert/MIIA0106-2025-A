#include <iostream>
#include <string>
using namespace std;
int a, b, c;
void MaxOfTree() {
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter third number: ";
	cin >> c;

	int max;
	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= a && b >= c) {
		max = b;
	}
	else {
		max = c;
	}
	cout << "Maximum is = " << max << endl;
}
int main() {
	MaxOfTree();
	return 0;

}
