/*
CSC 134
m4lab1 - grid with loops
3/17/25
Isaiah McNeill
*/
#include <iostream>
using namespace std;

int main()
{
    string pattern = "👽👅";
    const int WIDTH = 8;
    const int HEIGHT = 5;
    
    //print row
    cout << "column\n";
    for (int i = 0; i < WIDTH; i++)
    {
        cout << pattern;
    }

    //print height
    cout << "row\n";
    for (int i = 0; i < HEIGHT; i++)
    {
        cout << pattern << endl;
    }

    //print square
    //TODO: ask the suer
    int width, height;

    cout << "Whats the width(coulmn)?\n";
    cin >> width;

    cout << "And the height(row)?\n";
    cin >> height;

    if(width >= 1 && height >= 1)
    {
        cout << "Square of " << width << " by " << height << endl;
        for(int v = 0; v < height; ++v)
        {
            //print one row
            for(int h = 0; h < width; ++h)
            {
                cout << pattern;
            }
            cout << endl; //go to next row
        }

    }
    else if(width < 1 || height < 1)
    {
        cout << "Invalid input. Must be numbers greater than or equal to 1\n";
    }

    return 0;
}