#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int min = 0;
    int counter = 0;

    for (counter = 0; num != 0; counter++) {
        cout << "Enter number ";
        cin >> num;

        if (num == 0)   
            break;

        if (counter == 0)     
            min = num;
        else if (num < min)
            min = num;
    }

    cout << "You have Entered: " << counter << endl;
    cout << "Minimum value is: " << min << endl;

    return 0;
}
