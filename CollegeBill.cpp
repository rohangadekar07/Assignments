#include <iostream>
using namespace std;

int main()
{
    int teaQty, coffeeQty, sandwichQty, vadapavQty;
    float teaPrice, coffeePrice, sandwichPrice, vadapavPrice;
    float total;

    cout << "Enter quantity of Tea: ";
    cin >> teaQty;
    cout << "Enter price of one Tea: ";
    cin >> teaPrice;

    cout << "Enter quantity of Coffee: ";
    cin >> coffeeQty;
    cout << "Enter price of one Coffee: ";
    cin >> coffeePrice;

    cout << "Enter quantity of Sandwich: ";
    cin >> sandwichQty;
    cout << "Enter price of one Sandwich: ";
    cin >> sandwichPrice;

    cout << "Enter quantity of Vadapav: ";
    cin >> vadapavQty;
    cout << "Enter price of one Vadapav: ";
    cin >> vadapavPrice;

    total = (teaQty * teaPrice) +
            (coffeeQty * coffeePrice) +
            (sandwichQty * sandwichPrice) +
            (vadapavQty * vadapavPrice);

    cout << "\nTotal Canteen Bill = Rs. " << total << endl;

    return 0;
}