#include <iostream>
using namespace std;

int main() {
	int score = 50;
	int* ptr = &score;
	cout << "Value of score: " << score << endl;
	cout << "Address of score: " << &score << endl;
	cout << "Value pointed to by ptr: " << *ptr << endl;
	return 0;

}