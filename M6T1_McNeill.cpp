/*
CSC-134-5H01
Isaiah McNeill
4/7/25
M6T1 - Arrays
*/

#include <iostream>
using namespace std;

int main()
{
    const int NUM_STATS = 6;
    const int STR = 0;
    const int DEX = 0;
    const int CON = 0;
    const int INT = 0;
    const int WIS = 0;
    const int CHA = 0;
    
    int stats[NUM_STATS];
    string stat_names[] = {"STR", "DEX", "CON", "INT", "WIS", "CHA"};
    int current_stat;
    double total_stats = 0;
    double average_stats = 0;
    int i;

    //user input
    cout << "Enter your character's stats:\n";
    for (i = 0; i < NUM_STATS; i++)
    {
        cout << "Stat (" << stat_names[i] << "): ";
        cin >> current_stat;
        stats[i] = current_stat;
    }
    
    //calculate total
    for(i = 0; i < NUM_STATS; i++)
    {
        total_stats += stats[i];
    }
    cout <<"--------------------------------\n";
    cout << "Total Stat Points: " << total_stats << endl;

    //calculate average
    average_stats = total_stats / NUM_STATS;
    cout << "Average Stat: " << average_stats << endl;

    //output of user input(WITH LOOP)
    cout << "Character Sheet:\n";
    for(i = 0; i < NUM_STATS; i++)
    {
        cout << stat_names[i] << ": " << stats[i] << endl;
    }

    //output of user input(WITHOUT LOOP)
    /*cout <<"--------------------------------\n";
    cout << "STR: " << stats[0] << endl;
    cout << "DEX: " << stats[1] << endl;
    cout << "CON: " << stats[2] << endl;
    cout << "INT: " << stats[3] << endl;
    cout << "WIS: " << stats[4] << endl;
    cout << "CHA: " << stats[5] << endl;
    */

    return 0;
}