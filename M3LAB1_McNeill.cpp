/*
CSC-134
Isaiah McNeill
3-8-25
M3LAB1 - choices with the f statement
*/

# include<iostream>
using namespace std;

void redPotion();
void bluePotion();
void greenPotion();
void noPotion();

int main()
{
    int choice;
    char letter_choice = 'y';


        cout << "A fairy flys into your room at night and offers you three potions:" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "1. Red Potion: It looks like it's brimming with vitality!" 
        << "\n2. Blue Potion: It pulsates with a dark purple lightning!" 
        << "\n3. Ominous Green Potion: It looks cloudy and its vapor cloud forms a skull with crossbones..." << endl;
        cout << "----------------------------------------------------------" << endl;

        cout << "Enter a number to pick your poison..." << endl;
        cin >> choice;

        if(choice == 1)
        {
            redPotion();
        }

        else if(choice == 2)
        {
            bluePotion(); 
        }

        else if(choice == 3)
        {
            greenPotion();
        }

        else
        {
            noPotion();
        }

        cout << "Would you like to play again? Enter 'y' or 'n'" << endl;
        cin >> letter_choice;
        if(letter_choice == 'y')
        {
            main();
        }
        else
        {
            cout << "The fairy goes out the way it came in, leaving with an enormous grin..." << endl;
        }

    return 0;
}

void redPotion()
{
    cout << "----------------------------------------------------------" << endl;
    cout << "You chose the Red Potion!\nUnfortunately...it's an acid that melts your insides...better luck next time!" << endl;
    cout << "----------------------------------------------------------" << endl;
}

void bluePotion()
{
    cout << "----------------------------------------------------------" << endl;
    cout << "You chose the Blue Potion!\nIt feels tingly and...it tastes just like your favorite drink!" << endl;
    cout << "----------------------------------------------------------" << endl;
}

void greenPotion()
{
    cout << "----------------------------------------------------------" << endl;
    cout << "You chose the Green Potion!\nOut of pure curiosity you take a sip...and it turns out to be an elixir of life that blesses you with riches and good luck!" << endl;
    cout << "----------------------------------------------------------" << endl;
}

void noPotion()
{
    cout << "----------------------------------------------------------" << endl;
    cout << "Oh...the fairy didn't like that option...\nShe grotesquely shifts from a cute, innocent fairy to an eldritch horror looking creature...\nSay your prayers." << endl;
    cout << "----------------------------------------------------------" << endl;
}