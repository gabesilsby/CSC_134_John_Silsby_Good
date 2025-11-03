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
    //creates an output file stream and opens the file named "week9_lab2.txt"
    ofstream outputFile("week9_lab2.txt");

    //declaring variables
    int numOfDays;
    float daySales;
    //i initialized this one because of industry practice, I'm not actually sure what separates these from the others
    float totalSales = 0;
    cout<<"How many days: ";
    //recieve user input
    cin>>numOfDays;

    //initializes i as 0; when i is less than numOfDays, the condition is true and the code in the brackets 
    //{} will run; add 1 value to i each loop
    for (int i = 0; i < numOfDays; i++)
    {
        //outputs text in terminal
        cout<<"Sales for day "<<i+1<<": ";
        //recieves user input
        cin>>daySales;
        //write text onto the file through internal buffer; when endl is ran it flushes the buffer (apparently)
        outputFile<<"Day "<<i+1;
        //fixed tells fstream that the notation is standard decimal notation, and setprecion(#) tells 
        //fstream # many decimal points(must be float or double)
        outputFile<<fixed<<setprecision(2);
        outputFile<<" $"<<daySales<<endl;
        //totalSales is equal to totalSales plus daySales
        totalSales += daySales;
    }

    //writes the totalSales value to buffer and then the ouput text file once the for loop is satisfiedd
    //fixed tells fstream that the notation is standard decimal notation, and setprecion(#) 
    //tells fstream # many decimal points(must be float or double)
    outputFile<<fixed<<setprecision(2);
    outputFile<<"======================"<<endl;
    outputFile<<"Total Sales: $"<<totalSales<<endl;
    outputFile<<"======================"<<endl;
    
    //flushes buffer to disk, might be redundant because of the endl line above
    outputFile.close();
    //writes in terminal that the code has run
    cout<<"finished"<<endl;

    return 0;
    
}