/*
CSC-134
M2HW1 - Silver
Isaiah McNeill
2/19/25
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Question 2
int main()
{
    //variables
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
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

    //output(with more proper formatting, aka the only thing that really changed besides the constant variables)
    cout << setprecision(2) << fixed << endl;
    cout << setw(20) << "Volume:\t " << setw(6) << volume << endl;
    cout << setw(20) << "Cost:\t$" << setw(6) << cost << endl;
    cout << setw(20) << "Customer Charge:\t$" << setw(6) << charge << endl;
    cout << setw(20) << "Profit:\t$" << setw(6) << profit << endl;
}