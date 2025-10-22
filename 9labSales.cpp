//@author: Gabe Silsby
//@date: 10/21/25
//@purpose: 
/*
1. Design and write a C++ program that prompts the user for the 
number of days and loops over the days and prompts the user the 
enter sales for each day. After each day of sales is captured, 
you should write a new line with the amount for the day to a file 
named week9_lab1.txt.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile("week9_lab1.txt");

    int numOfDays;
    float daySales;
    float totalSales = 0;
    cout<<"How many days: ";
    cin>>numOfDays;

    for (int i = 0; i < numOfDays; i++)
    {
        cout<<"Sales for today: ";
        cin>>daySales;
        outputFile<<"$"<<daySales<<endl;
        totalSales += daySales;
    }
    outputFile<<"$"<<totalSales<<endl;
    
    outputFile.close();
    cout<<"finished"<<endl;

    return 0;
    
}