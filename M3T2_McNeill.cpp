/*
CSC 134
M3T2 - For random(based off Mr. Norris' code)
Isaiah McNeill
2-24-25
*/

#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    const int SIDES = 12; // yours will differ!
    const int TO_HIT = 15;
    //int seed = 69;
    int seed = time(0);
    //cout << "The seed is: " << seed << endl;
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll1, roll2, total;
    // roll a few times
    roll1 = ( (rand() % SIDES)+1 );
    //cout << roll1 << endl;

    roll2 = ( (rand() % SIDES)+1 );
    //cout << roll2 << endl;

    total = roll1 + roll2;
    cout << "You rolled a " << roll1 << " and a " << roll2 << ". Combined they equal " << total << "." << endl << endl;

    if(total >= TO_HIT)
    {
        cout << "It's a hit!" << endl;
    }
    else{
        cout << "You missed :,(" << endl;
    }
}