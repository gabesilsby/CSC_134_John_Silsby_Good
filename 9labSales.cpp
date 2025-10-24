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
    //creates an output file stream and opens the file named "week9_lab1.txt"
    ofstream outputFile("week9_lab1.txt");

    //declares variables and initializes totalSales as 0
    int numOfDays;
    float daySales;
    float totalSales = 0;

    cout<<"How many days: ";
    //recieves user input
    cin>>numOfDays;

    //initializes i as 0; when i is less than numOfDays, the condition is true and 
    //the code in the brackets {} will run; add 1 value to i each loop
    for (int i = 0; i < numOfDays; i++)
    {
        //writes to terminal to prompt user to enter daySales
        cout<<"Sales for today: ";
        cin>>daySales;
        //writes the dollar amount of what the user entered 
        outputFile<<"$"<<daySales<<endl;
        //totalSales is equal to totalSales + daySales
        totalSales += daySales;
    }
    //(I wrote the totalSales feature before reading what lab 2 wanted)
    //writes the totalSales value to buffer and then the ouput text file once the for loop is satisfied
    outputFile<<"$"<<totalSales<<endl;
    
    //flushes buffer's data to disk
    outputFile.close();
    //lets terminal know that the program is run
    cout<<"finished"<<endl;

    return 0;
    
}