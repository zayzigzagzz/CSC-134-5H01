/*
CSC-134-5H01
Isaiah McNeill
3/23/25
M5T1 - basic functions
*/
#include <iostream>
using namespace std;
//First Ver -- Just call a few functions

//Function Declarations(first line only)
void say_hi();
int add(int first, int second);
void print_number(int num);
int global_x = 999; //global variable


int main ()
{
    //example of local variables
    int my_num = 12;
    cout << "in main(), my_num = " << my_num << endl;
    cout << "in main(), global_x = " << global_x << endl;
    say_hi();
    cout << "2 + 2 = ";
    int num = add(2, 2);
    print_number(num);

    return 0; //optional, when not there assume there's one
}

//Function definitions (full thing)

//Void function -- just call it, no return
void say_hi() 
{
    cout << "Hi!\n";
    int my_num = 69; // also local
    cout << "in say_hi(), my_num = " << my_num << endl; 
    cout << "in say_hi(), global_x = " << global_x << endl;
}

//Value returning function
int add(int first, int second)
{
    int answer = first + second;
    return answer;
}

//Void function but takes a value(parameter)
void print_number(int num)
{
    cout << num << endl;
}