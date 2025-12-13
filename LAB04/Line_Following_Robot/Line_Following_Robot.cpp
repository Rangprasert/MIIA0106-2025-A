#include <iostream>
using namespace std;

void moveForward() {
    cout << "Robot moves forward" << endl;
}

void turnLeft() {
    cout << "Robot turns left" << endl;
}

void turnRight() {
    cout << "Robot turns right" << endl;
}

int main() {
    int sensor; 

    cout << "Enter line position (-1 = Left, 0 = Center, 1 = Right): ";
    cin >> sensor;

    if (sensor == 0) {
        moveForward();
    }
    else if (sensor == -1) {
        turnLeft();
    }
    else if (sensor == 1) {
        turnRight();
    }
    else {
        cout << "Invalid sensor value" << endl;
    }

    return 0;
}
