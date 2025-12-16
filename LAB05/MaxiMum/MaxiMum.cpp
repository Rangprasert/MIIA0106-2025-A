#include <iostream>
#include <string>
using namespace std;

int MaxOfThree(int x, int y, int z) {
    int max;
    if (x >= y && x >= z) {
        max = x;
    }
    else if (y >= x && y >= z) {
        max = y;
    }
    else {
        max = z;
    }
    return max;
}

int main() {
    int a, b, c;
    int result;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    result = MaxOfThree(a, b, c);
    cout << "Maximum is = " << result << endl;
    return 0;
}