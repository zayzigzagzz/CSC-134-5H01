/*
CSC-134-5H01
Isaiah McNeill
3/23/25
M5T2 - table of squares with functions
*/

#include <iostream>
#include <iomanip>
using namespace std;

int find_squares(int number);
void print_line(int number, int square);

int main ()
{
    for (int num = 1; num <= 10; num++)
    {
        int square = find_squares(num); //call find_squares
        print_line(num, square);
    }

}

int find_squares(int number)
{
    int product = number * number;
    return product; // fix
}

void print_line(int number, int square)
{
    cout << number << " \t" << square << endl; 
    //will look like:
    // 3 9 
    // 4 16
    // 5 25
}