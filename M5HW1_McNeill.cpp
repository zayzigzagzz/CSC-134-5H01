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
            question3();
        }

        else if(choice == 4)
        {
            cout << "Question 4\n------------------------------\n";
            question4();
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
    bool zero_or_less = true;
    
    while(zero_or_less)
    {
        cout << "Enter the length of the hyperrectangle:\n";
        cin >> length;
        
        cout << "Enter the width of the hyperrectangle:\n";
        cin >> width;

        cout << "Enter the height of the hyperrectangle:\n";
        cin >> height;

        if(length > 0 && width > 0 && height > 0)
        {
            volume = length * width * height;
            cout << "The volume of the hyperrectangle is " << volume << endl;
            break;
        }
        else
        {
            zero_or_less = false;
        }
    }

    if(!zero_or_less)
    {
        cout << "A side cannot equal 0 or less! Try again!\n";
        cout << "---------------------------------\n";
        question2();
    }

}

void question3()
{
    int num;

    cout << "Enter a number (1 - 10):\n";
    cin >> num;

    switch (num)
    {
        case 1:
            cout << "The Roaman Numeral verison of " << num << " is I.\n"; 
            break;
        
        case 2:
            cout << "The Roaman Numeral verison of " << num << " is II.\n"; 
            break;

        case 3:
            cout << "The Roaman Numeral verison of " << num << " is III.\n"; 
            break;
        
        case 4:
            cout << "The Roaman Numeral verison of " << num << " is IV.\n"; 
            break;

        case 5:
            cout << "The Roaman Numeral verison of " << num << " is V.\n"; 
            break;

        case 6:
            cout << "The Roaman Numeral verison of " << num << " is VI.\n"; 
            break;

        case 7:
            cout << "The Roaman Numeral verison of " << num << " is VII.\n"; 
            break;

        case 8:
            cout << "The Roaman Numeral verison of " << num << " is VIII.\n"; 
            break;

        case 9:
            cout << "The Roaman Numeral verison of " << num << " is IX.\n"; 
            break;

        case 10:
            cout << "The Roaman Numeral verison of " << num << " is X.\n"; 
            break;
        
        default:
            cout << "You must enter a number between 1 and 10! Try again!\n";
            cout << "------------------------------------------\n";
            question3();
    } 

}

void question4()
{
    int choice;
    double length, width, height, base, radius;

    cout << "Geometry Calculator\n1.Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle\n4. Quit\n";
    cout << "Enter your choice (1 - 4):\n";
    cin >> choice;

    do
    {
        if(choice == 1)
        {
            cout << "Enter the circle's radius:\n";
            cin >> radius;
        }

        if(choice == 2)
        {
            cout << "Enter the rectangle's length:\n";
            cin >> length;
            cout << "Enter the rectangle's width:\n";
            cin >> width;
        }

        if(choice == 3)
        {
            cout << "Enter the triangle's base:\n";
            cin >> base;
            cout << "Enter the triangle's height:\n";
            cin >> height;
        }
    }
    while(choice != 4);

}