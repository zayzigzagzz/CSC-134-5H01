 //CSC-134
//M2T2
//Isaiah McNeill
//2-3-25

# include <iostream>
# include <iomanip> //set precision() << fixed keeps it for all print statments
using namespace std;

int main()
{
    string store_name = "Isaiah's Pizza Palace";
    string food_name = "pizza";
    double food_price = 11.99;
    int food_number;

    //receipt variables
    double subtotal, total;
    double tax_percent, tax_cost;

    cout << "Welcome to " << store_name << "!" << endl;
    cout << "We sell "  << food_name << " and one costs " << food_price << endl;
    cout << "How many do you want?" << endl;
    cin >> food_number;
    cout << food_name << " x " << food_number << endl;

    //calculate subtotal, tax, and total
    tax_percent = 0.08;
    subtotal = food_price * food_number;
    tax_cost = subtotal * tax_percent;
    total = subtotal + tax_cost;

    //the receipt
    cout << setw(12) << setprecision(2) << fixed << endl;
    cout << "------------------------------------" << endl;
    cout << setw(12) << "Subtotal:\t$" << setw(8) << subtotal << endl;
    cout << setw(12) << "Tax (8%):\t$" << setw(8) << tax_cost << endl;
     cout << "------------------------------------" << endl;
    cout << setw(12) << "Total:\t$" << setw(8) << total << endl;
     cout << "------------------------------------" << endl;
    
    cout << "Thank you! Have a nice day!" << endl;
    return 0;
}