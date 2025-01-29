// CSC 134
// M1Lab1
// Isaiah McNeill
// 1-27-25
// Today we're selling coconuts
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variables
    string name = "Isaiah's";
    int num_coconuts = 127;
    double price_each = 0.25;

    //calculations
    double total = num_coconuts * price_each;


    // welcome
    cout <<"Welcome to " << name << " coconut farm!" << endl;
    cout << "We have " <<num_coconuts<<" coconuts in stock." << endl;
    cout << "Price per coconut is: $" << price_each << endl;
    cout << endl;
   

    //Print answer
    cout << "The total number of coconuts is " << num_coconuts<<" and costs " << total << endl;
    cout << endl;
    return 0;
}