/*
CSC-134
M2LAB1 - calculates volume of crate, cost, customer price, and profit
Isaiah McNeill
2/19/25
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variables
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double length, width, height, volume, cost, charge, profit;

    //input
    cout << "Enter the dimensions of the crate:" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    //calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    //output
    cout << setprecision(2) << fixed << endl;
    cout << "Volume: " << volume << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Customer Charge: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
}