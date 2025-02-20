/*
CSC-134
M2HW1 - Gold
Isaiah McNeill
2/19/25
*/

#include <iostream>
using namespace std;

//Question 3
int main()
{
    //variables
    int pizzaNum, slices, partyPeople;

    //input
    cout << "How many pizzas do you want?" << endl;
    cin >> pizzaNum;

    cout << "How many slices per pizza?" << endl;
    cin >> slices;

    cout << "How many visitors will you have including yourself?" << endl;
    cin >> partyPeople;

    //calculations
    int totalPizza = pizzaNum * slices;
    int leftovers = totalPizza - (partyPeople * 3);

    //output
    cout << "You've ordered " << totalPizza << " slices. If everyone eats 3 slices of pizza, you will have " << leftovers << " slice/s left!" << endl;

}