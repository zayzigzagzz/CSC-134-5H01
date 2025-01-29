// CSC 134
// M2T1
// Isaiah McNeill
// 1-27-25
// Today we're selling coconuts but we allow input from the user
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variables
    string name = "Isaiah's";
    string customer_name;
    int num_coconuts = 127;
    double price_each = 1.25;

    //calculations
    double total = num_coconuts * price_each;


    // welcome
    cout << "Hello! What's your name?" << endl;

   //takes input from user
    cin >> customer_name; 

    cout << "Nice to meet you, " << customer_name << "!" << endl;
    cout <<"Welcome to 🥥" << name << " Coconut Farm🥥!" << endl;
    cout << "We have " <<num_coconuts<<" coconuts in stock." << endl;
    cout << "Price per coconut is: $" << price_each << endl;
    cout << endl;
   

    //Print answer
    cout << "The total number of coconuts is " << num_coconuts<<" and costs " << total << endl;
    
    //make a deal
    //variables
    int customer_amount;
    cout << "How many coconuts would you like?" << endl;
    cin >> customer_amount;

    //calculationss
    double customer_total = customer_amount * price_each;
    
    cout << "You bought " << customer_amount << " coconuts. Your total is $" << customer_total << endl;

    return 0;
}