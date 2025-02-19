/*
CSC-134
M2HW1 - Silver
Isaiah McNeill
2/19/25
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Question 1
int main()
{
    //variables
    string name;
    int accountNum, balance, deposit, withdrawl;

    //input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your account number: ";
    cin >> accountNum;

    cout << "Enter your starting balance: ";
    cin >> balance;

    cout << "How much will you be depositing?" << endl;
    cin >> deposit;

    cout << "How much will you be withdrawing?" << endl;
    cin >> withdrawl;

    //calculations
    int finalBalance = balance + deposit - withdrawl;

    //output
    cout << setprecision(2) << fixed << endl;
    cout << name << endl;
    cout << "Account Number: " << accountNum << endl;
    cout << "New Balance: $" << finalBalance << endl;
    

}