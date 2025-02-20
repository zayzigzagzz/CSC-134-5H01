/*
CSC-134
M2HW1 - Gold
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
    int accountNum;
    double balance, deposit, withdrawl;

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
    double finalBalance = balance + deposit - withdrawl;

    //output
    cout << name << endl;
    cout << "---------------------------------" << endl;
    cout << setw(20) << "Account Number:\t " << setw(6) << accountNum << endl;
    cout << setprecision(2) << fixed << endl;
    cout << setw(20) << "Current Balance:\t$" << setw(6) << balance << endl;
    cout << setw(20) << "Deposit Amount:\t$" << setw(6)<< deposit << endl;
    cout << setw(20) << "Withdrawl Amount:\t$" << setw(6) << withdrawl << endl;
    cout << setw(20) << "New Balance:\t$" << setw(6) << finalBalance << endl;

    return 0;
}