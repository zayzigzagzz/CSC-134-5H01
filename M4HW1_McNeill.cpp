/*
CSC-134-5H01
Isaiah McNeill
3/24/25
M4HW1 - multiplication table
Gold
*/

#include <iostream>
using namespace std;

int main()
{
    int val;

    do 
    {
        cout << "Enter a value from 1 to 12:\n";
        cin >> val;

        if (val < 1 || val > 12) 
        {
            cout << "Error. Must be a number from 1 to 12. Try again.\n";
        }
    } while (val < 1 || val > 12);

    // Print multiplication table
    for (int num = 1; num <= 12; num++) {
        cout << val << " times " << num << " is " << val * num << ".\n";
    }

    return 0;
}
