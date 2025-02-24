/* 
CSC 134
M3T1 - Choices(based off Mr. Norris' code)
Isaiah McNeill
2-24-25
*/

#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  // declare the variable we need
  int choice; 
  const int FIGHT = 1;
  const int FLEE = 2;
  const int ITEM = 3;

  // ask the question
  cout << "You're in a pokemon battle! Pikachu vs. Snorlax." << endl;
  cout << "1. Fight" << endl;
  cout << "2. Flee"   << endl;
  cout << "3. Use Item" << endl;
  cout << "Type 1, 2, or 3: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (FIGHT == choice) {
  	cout << "You chose to fight" << endl;
    cout << "Sadly, you lose. " << endl;
  }
  else if (FLEE == choice) {
  	cout << "You chose to flee" << endl;
    cout << "You live to fight another day." << endl;
  }
  else if (ITEM == choice) {
    cout << "You use a potion." << endl;
    cout << "It boosts your attack power!" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error
} // end of the main() method