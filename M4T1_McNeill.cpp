// CSC 134
// M4T1
// Isaiah McNeill
// 3-10-25

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    //part 1 - count five times
    int count = 1;

    while(count <= 5)
    {
        cout << "Hello #" << count << endl;
        ++count;
        //count = count +1 same as ++count and count += 1
    }

    //part 2 - table of squares
    //write to a file
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;
    int num = MIN_NUM;
    int sq;
    string filename = "squares.txt";

    //open file
    ofstream outfile("squares.txt");
    if(!outfile.is_open())
    {
        cout << "Error: could not open!" << filename << endl;

        return -1; //error
    }

    //write table to file
    //when printing out file use outfile instead of cout
    outfile << "Table of squares\n----------------" << endl;
    while(num <= MAX_NUM)
    {
        sq = num * num;
        outfile << num << "\t" << sq << endl;
        ++num;
    }
    //close file
    outfile.close();

    return 0;

}
