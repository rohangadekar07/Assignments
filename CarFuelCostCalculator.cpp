#include <iostream>
using namespace std;

int main()
{
    float distance, mileage, fuelPrice;
    float fuelRequired, totalCost;

    cout << "Enter distance travelled in km: ";
    cin >> distance;

    cout << "Enter car mileage in km/litre: ";
    cin >> mileage;

    cout << "Enter fuel price per litre: ";
    cin >> fuelPrice;

    fuelRequired = distance / mileage;
    totalCost = fuelRequired * fuelPrice;

    cout << "\nFuel Required = " << fuelRequired << " litres" << endl;
    cout << "Total Fuel Cost = Rs. " << totalCost << endl;

    re