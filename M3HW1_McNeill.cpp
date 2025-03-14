/*
CSC-134-5H01
M3HW1 - Gold
Isaiah McNeill
3-14-25
*/

#include <iostream>
#include <iomanip>
using namespace std;

//questions as functions
void question1();
int question2();
void question3();
void question4();

int main()
{
    int choice;
    char start_over;

    do
    {
        cout << "Which question would you like to view? Enter 1, 2, 3, or 4:\n";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Question 1:\n--------------------------------------------------\n";
            question1();
        }
        else if (choice == 2)
        {
            cout << "Question 2:\n--------------------------------------------------\n";
            question2();
        }
        else if (choice == 3)
        {
            cout << "Question 3:\n--------------------------------------------------\n";
            question3();
        }
        else if (choice == 4)
        {
            cout << "Question 4:\n--------------------------------------------------\n";
            question4();
        }
        else
        {
            cout << "Invalid question choice. Try again\n";
        }

        cout << "Would you like to run the ENTIRE program again? Enter 'y' or 'n':\n";
        cin >> start_over;
    } 
    while (start_over == 'y');

    cout << "Program ended!\n";

    return 0;
}

void question1()
{
    string user_input;
    char choice;

    do 
    {
        cout << "Hi there! My name is Speaks and I'll be your chat bot for today!\nAre you having a great day? Enter yes or no:\n";
        cin >> user_input;

        if (user_input == "yes")
        {
            cout << "Thats great! I hope your day continues to go great!\n";
        }
        else if (user_input == "no")
        {
            cout << "Aw I'm sorry to hear that, let me know if there's anything I can do to help!\n";
        }
        else
        {
            cout << "Huh? I...I don't understand..?\n";
        }

        cout << "Would you like to rerun Queston 1? Enter 'y' or 'n':\n";
        cin >> choice;
    }
    while(choice == 'y');
}

int question2()
{
    char choice;
    string store_name = "Isaiah's Chicken Collosseum";
    string food_name = "chicken";
    double food_price;
    int dining_option;

    //receipt variables
    double tip, subtotal, total;
    double tax_percent, tax_cost;

    do
    {
        cout << "Welcome to " << store_name << "!" << endl;
        cout << "We sell "  << food_name << "! What's the price of your meal?" << endl;
        cin >> food_price;

        if(food_price > 0)
        {

            cout << "Will you be dining in or to go?\nEnter 1 if your dining in and 2 if you're ordering to go:\n";
            cin >> dining_option;

            if (dining_option == 1)
            {
                tip = 0.15;
            }
            else
            {
                tip = 0;
            }

            tax_percent = 0.08;
            subtotal = food_price;
            tax_cost = subtotal * tax_percent;
            total = subtotal + tax_cost + tip;

            //the receipt
            cout << setw(12) << setprecision(2) << fixed << endl;
            cout << "------------------------------------" << endl;
            cout << setw(12) << "Subtotal:\t$" << setw(8) << subtotal << endl;
            cout << setw(12) << "Tip:\t$" << setw(8) << tip << endl;
            cout << setw(12) << "Tax (8%):\t$" << setw(8) << tax_cost << endl;
            cout << "------------------------------------" << endl;
            cout << setw(12) << "Total:\t$" << setw(8) << total << endl;
            cout << "------------------------------------" << endl;
            
            cout << "Thank you! Have a nice day!" << endl;
        }
        else
        {
            cout << "Invalid food price. Must be a number greater than 0.\n";
        }

        cout << "Would you like to rerun Queston 2? Enter 'y' or 'n':\n";
        cin >> choice;
            
    }
    while(choice == 'y');


    return 0;
}

void question3()
{
    char play;
    char choice;
    int game_choice, game_choice2;

    do
    {
        cout << "Welcome to choose to my game! If you would like to play type 'y or 'n':\n";
        cin >> play;

        if(play == 'y')
        {
            cout << "Great! Here we go:\n";
            cout << "------------------------------------------\n";
            cout << "You and you're friends, being curious and defiant teens, decide to go investigate a haunted house...\n";
            cout << "Having second thoughts, you tell your two friends accompanying you that everyone should go back home.\n";
            cout << "Do you listen to your gut, or do you let curiosity get the better of you?\n";
            cout << "------------------------------------------\n";

            cout << "Enter 1 to listen to your gut or 2 to go into the haunted house:\n";
            cin >> game_choice;

                if (game_choice == 1)
                {
                    cout << "------------------------------------------\n";
                    cout << "You know you're pretty smart!\n";
                    cout << "Your friends don't want to chicken out, so they go on without you...\n";
                    cout << "Now alone...you decide to leave...\n";
                    cout << "Right when you reach the courtyard, you hear the screams of your friends and you see hands start to emerge from the ground behind you!\n";
                    cout << "You  start to run but the path is split in two...\n";
                    cout << "Do you run into the graveyard or do you run to the tall black gate parallel to the graveyard?\n";
                    cout << "------------------------------------------\n";

                    cout << "Enter 1 to enter the graveyard and 2 to run to the gate:\n";
                    cin >> game_choice2;

                        if(game_choice2 == 1)
                        {

                        }
                        else if(game_choice2 == 2)
                        {

                        }
                        else
                        {
                            cout << "Soooo you must've fat fingered it cause I clearly said 1 or 2...\n";
                        }
                        
                }
                else if (game_choice == 2)
                {
                    cout << "------------------------------------------\n";
                    cout << "Despite the literal whispers of the wind telling you to go away...you all enter the house\n";
                    cout << "The door violently slams shut behind you...\n";
                    cout << "You and your friends immediately start panicking...but it's too late...\n";
                    cout << "The floor starts to creakily and eerily split open, ravenously consuming you and your friends...\n";
                    cout << "------------------------------------------\n";
                    cout << "You lost! Better luck next time!\n";
                }
                else
                {
                    cout << "Soooo you must've fat fingered it cause I clearly said 1 or 2...\n";
                }

        }
        else if (play == 'n')
        {
            cout << "Aw...if you say so..\n";
        }
        else
        {
            cout << "Soooo you must've fat fingered it cause I clearly said 'y' and 'n'...\n";
        }
        
        cout << "Would you like to rerun Queston 3? Enter 'y' or 'n':\n";
        cin >> choice;
    } 
    while (choice == 'y');
    
}

void question4()
{

}