#include <iostream>
using namespace std;

int main() {
    float price;   
    int qty;      
    float total;   
    cout << "Enter price per item: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> qty;
    total = price * qty;
    cout << "Price per item: " << price << endl;
    cout << "Quantity     : " << qty << endl;
    cout << "-------------------\n";
    cout << "Total price  : " << total << endl;

    return 0;
}
