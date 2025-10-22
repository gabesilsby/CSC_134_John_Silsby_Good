//@author: Gabe Silsby
//@date: 10/9/25
//@purpose: 
/*
2. Using the attached numbers.txt file, Design and write a C++ 
program that reads the data from the file and sums the values
 and prints the results to the console
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //declares outputFile to write data on file "lab1.txt"
    ifstream inputFile;
    //selects the file and opens it
    inputFile.open("numbers.txt");

    //declare number as a string to use getline() function *will later convert to int 
    string number;
    //define total as an integer equal to 0
    int total = 0;

    for(int run = 1; run <= 10; run++)
    {
        //getline function reads entire line of text from selected file and sends data to variable "line"
        getline(inputFile, number);
        //stores previous total value in a int variable to type calculation on line 36
        int totalTemp = total;
        
        //learned to use stoi from previous lab
        //total is equal to the new number value plus the old total value
        total = stoi(number) + total;
        cout<<number<<" + "<<totalTemp<< " = " << total<<endl;
    }

    inputFile.close();

    return 0;
}