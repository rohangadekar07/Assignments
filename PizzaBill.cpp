#include <iostream>
using namespace std;

int main()
{
    float price, total;
    int quantity;

    cout << "Enter the price of pizza: ";
    cin >> price;

    cout << "Enter the quantity: ";
    cin >> quantity;

    total = price * quantity;

    cout << "Total Pizza Bill = Rs. " << total << endl;

    return 0;
}