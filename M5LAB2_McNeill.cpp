/*
CSC-134-5H01
Isaiah McNeill
4-2-25
M5LAB2 - area of rectangle using functions
*/

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength, getWidth, getArea, and displayData
double getLength(double length);
double getWidth(double width);
double getHeight(double height);
double getVolume(double length, double width, double height);
double getCost(double volume, const double COST_PER_CUBIC_FT);
double getCharge(double volume, const double CHARGE_PER_CUBIC_FT);
double getProfit(double charge, double cost);
void displayData(double length, double width, double height, double volume, double cost, double charge, double profit);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

   double length, width, height, volume, cost, charge, profit;
   const double COST_PER_CUBIC_FT = 0.23;
   const double CHARGE_PER_CUBIC_FT = 0.5;

   // Get the rectangle's length.
   length = getLength(length);

   // Get the rectangle's width.
   width = getWidth(width);

   //Get the rectangle's height.
   height = getHeight(height);

   // Get the rectangle's volume.
   volume = getVolume(length, width, height);

   //Get the cost.
   cost = getCost(volume, COST_PER_CUBIC_FT);

   //Get the charge.
   charge = getCharge(volume, CHARGE_PER_CUBIC_FT);

   //Get the profit.
   profit = getProfit(charge, cost);

   // Display the rectangle's data.
   displayData(length, width, height, volume, cost, charge, profit);

   //Calculate cost of shape

   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength( double length)
{
    cout << "Enter the length of the box:\n";
    cin >> length;

    return length;
}

double getWidth(double width)
{
    cout << "Enter the width of the box:\n";
    cin >> width;

    return width;
}

double getHeight(double height)
{
    cout << "Enter the height of the box:\n";
    cin >> height;

    return height;
}

double getVolume(double length, double width, double height)
{
    double volume = length * width * height;

    return volume;
}

double getCost(double volume, const double COST_PER_CUBIC_FT)
{
    double cost = volume * COST_PER_CUBIC_FT;

    return cost;
}

double getCharge(double volume, const double CHARGE_PER_CUBIC_FT)
{
    double charge = volume * CHARGE_PER_CUBIC_FT;

    return charge;
}

double getProfit(double charge, double cost)
{
    double profit = charge - cost;

    return profit;
}

void displayData(double length, double width, double height, double volume, double cost, double charge, double profit)
{
    cout << "Length: " << length << "\nWidth: " << width << "\nHeight: " << height << "\nVolume: " << volume << "\n----------------------------------------------\nCost : $" << cost << "\nCharge: $" << charge << "\nProfit: $" << profit << endl;
}
