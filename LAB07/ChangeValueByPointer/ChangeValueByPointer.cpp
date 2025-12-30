#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int* p = &a;
	*p = 100;
	
	cout << "Value of a: " << a << endl;
	return 0;
	

}