/*
CSC-134-5H01
Isaiah McNeill
4/10/25
M5HW1 - Gold
*/
#include <iostream>
#include <iomanip>
using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();

int main()
{
    int choice = 1;

    do
    {
        cout << "---------------------------------------\n";
        cout << "Choose a question numbered 1 - 5 or type 0 to quit:\n";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Question 1\n------------------------------\n";
            question1();
        }
        
        else if(choice == 2)
        {
            cout << "Question 2\n------------------------------\n";
            question2();
        }

        else if(choice == 3)
        {
            cout << "Question 3\n------------------------------\n";
        }

        else if(choice == 4)
        {
            cout << "Question 4\n------------------------------\n";
        }

        else if(choice == 5)
        {
            cout << "Question 5\n------------------------------\n";
        }

    }
    while(choice != 0);  

    cout << "----------------------\n";
    cout << "Program terminated!\n";
    
    return 0;
}

void question1()
{
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3, average;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall2;
    
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall3;

    cout << setprecision(2) << fixed << endl;
    average = (rainfall1 + rainfall2 + rainfall3) / 3;

    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches.\n";
}

void question2()
{
    double length, width, height;
    double volume;

    
}