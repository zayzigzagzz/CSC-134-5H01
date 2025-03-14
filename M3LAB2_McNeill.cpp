/*
CSC-134-5H01
Isaiah McNeill
3-13-25
M3LAB2 - number grade to letter grade conversion
*/

#include <iostream>
using namespace std;

int main ()
{
    int num_grade;
    char choice = 'y';

    do
    {
        cout << "Enter a number grade:\n";
        cin >> num_grade;

        if(num_grade >= 0 && num_grade <= 100)
        {
            if(num_grade >= 90 && num_grade <= 100)
            {
                cout << "------------------------------\n";
                cout << "Your letter grade is: A\n";
            }
            if(num_grade >= 80 && num_grade <= 89)
            {
                cout << "------------------------------\n";
                cout << "Your letter grade is: B\n";
            }
            if(num_grade >= 70 && num_grade <= 79)
            {
                cout << "------------------------------\n";
                cout << "Your letter grade is: C\n";
            }
            if(num_grade >= 60 && num_grade <= 69)
            {
                cout << "------------------------------\n";
                cout << "Your letter grade is: D\n";
            }
            if(num_grade <= 59)
            {
                cout << "------------------------------\n";
                cout << "Your letter grade is: F\n";
            }
            
        }
        else
        {
            cout << "------------------------------\n";
            cout << "Invalid input: Number must be inbetween 0 and 100\n";
        }
        cout << "" << endl;
        cout << "Would you like to run the program again? Enter 'y' or 'n':\n";
        cin >> choice;
    }
    while(choice == 'y');

    cout << "Program has ended!\n";

    return 0;
}