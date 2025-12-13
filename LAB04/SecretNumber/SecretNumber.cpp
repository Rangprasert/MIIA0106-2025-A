#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    for (int i = 1; i <= 10; i++) {
        cout << "round " << i << " Enter your number: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too much! Try reducing\n";
        }
        else if (guess < secret) {
            cout << "Not enough! Try increasing\n";
        }
        else {
            cout << "Correct! ";
            return 0;   
        }
    }

    cout << "\n--- Your turn is off ---\n";
    cout << "Correct number is: " << secret << endl;

    return 0;
}
