//@author: Gabe Silsby
//@date: 10/22/25
//@purpose: 

/*
2. Modify your lab 1 program to write to a new file named week9_lab2.txt and
 after all sales are entered, on the last line, you should write out the sum 
 of all the entered daily sales. An example format should be as follows:

10
20
30
40

====================
Total Sales: $100.00
====================

Notice we need two digits implied on the total. You should implement the <iomanip> library and the <sstream> library to help you
format the number properly.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream outputFile("week9_lab2.txt");

    int numOfDays;
    float daySales;
    float totalSales = 0;
    cout<<"How many days: ";
    cin>>numOfDays;

    for (int i = 0; i < numOfDays; i++)
    {
        cout<<"Sales for day "<<i+1<<": ";
        cin>>daySales;
        outputFile<<"Day "<<i+1;
        outputFile<<fixed<<setprecision(2);
        outputFile<<" $"<<daySales<<endl;
        totalSales += daySales;
    }

    outputFile<<fixed<<setprecision(2);
    outputFile<<"======================"<<endl;
    outputFile<<"Total Sales: $"<<totalSales<<endl;
    outputFile<<"======================"<<endl;
    
    outputFile.close();
    cout<<"finished"<<endl;

    return 0;
    
}