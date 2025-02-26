/*
CSC 134
M3T3 - Game of CRAPS based off of M3T2 random dice code
Only tells you you win if you get a 7 or 11
Isaiah McNeill
2-26-25
*/

#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    // rand() is a large number, so we take the remainder which is %
    int roll1, roll2, total;
    string choice;

    do
    {
        const int SIDES = 6; // yours will differ!
        //int seed = 19;
        int seed = time(0);
        // seed the random number generator
        srand(seed);
        

        // roll a few times
        roll1 = ( (rand() % SIDES)+1 );
        roll2 = ( (rand() % SIDES)+1 );
        total = roll1 + roll2;

        cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;
        //7, 11 is win
        //if doesnt work then swap places of total and number
    
            if(7 == total || 11 == total)
        {
            cout << "You win!" << endl;
        }
        //2, 3, 12 is a loss
        else if(2 == total || 3 == total || 12 == total)
        {
            cout << "You lose :(" << endl;
        }
        //anything else is "point" (do later) aka 4, 5, 6, 8, 9, 10
        else
        {
            cout << "Your point is " << total << endl;
        }

        cout << "Would you like to roll again? Enter yes or no!" << endl;
        cin >> choice;
    } 
    while (choice == "yes");

    cout << "Thanks for using the program!" << endl;
    
    
    
}
