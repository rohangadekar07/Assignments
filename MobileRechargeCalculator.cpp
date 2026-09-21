#include <iostream>
using namespace std;

int main()
{
    float rechargeAmount, gstPercentage;
    float gstAmount, finalAmount;

    cout << "Enter recharge amount: ";
    cin >> rechargeAmount;

    cout << "Enter GST percentage: ";
    cin >> gstPercentage;

    gstAmount = (rechargeAmount * gstPercentage) / 100;
    finalAmount = rechargeAmount + gstAmount;

    cout << "GST Amount = Rs. " << gstAmount << endl;
    cout << "Final Recharge Amount = Rs. " << finalAmount << endl;

    return 0;
}