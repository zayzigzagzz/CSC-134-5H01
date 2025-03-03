// CSC 134
// M3 Bonus
// Isaiah McNeill
// 1-29-25
// This program is a D&D simulator

#include <iostream>
#include <cmath>    
#include <ctime>
using namespace std;

// Global variables for character stats
int strength, dexterity, constitution, intelligence, wisdom, charisma;
string name, char_class;
int level, hp;

// Function prototypes(declarations)
int rollDice();
int rollStat();
void inputStats();
void displayCharacter();
void savecharacter();


int main() {
    srand(time(0));
    cout << "Character Creation" << endl;
    inputStats();
    displayCharacter();

    cout << "Would you like to reroll? Type 'y' for yes and 'n' for no. " << endl;
    char choice;
    cin >> choice;

    while (choice == 'y')
    {
        inputStats();
        displayCharacter();
        cout << "Would you like to reroll? Type 'y' for yes and 'n' for no. " << endl;
        cin >> choice;
    }
    return 0;
}

//Function definition(the full version)
void inputStats() {
    strength = rollStat();
    dexterity = rollStat();
    constitution = rollStat();
    intelligence = rollStat();
    wisdom = rollStat();
    charisma = rollStat();
}

void displayCharacter() {
    cout << "\nCharacter Stats:\n";
    cout << "Strength: " << strength << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Constitution: " << constitution << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Charisma: " << charisma << endl;
}

void saveCharacter()
{

}

int rollDice()
{
    return rand() % 6 + 1;

    /*const int SIDES = 20; // yours will differ!
    //int seed = 69;
    int seed = time(0);
    //cout << "The seed is: " << seed << endl;
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll;
    // roll a few times
    roll = ( (rand() % SIDES)+1 );
    //cout << roll1 << endl;

    cout << "You rolled a " << roll << "." << endl;*/
}

int rollStat()
{
    // roll 3d6
    int stat;
    stat = rollDice() + rollDice() + rollDice();
    return stat;
}