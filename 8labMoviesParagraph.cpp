//@author: Gabe Silsby
//@date: 10/7/25
//@purpose:

/*
3. Now, use lab #1 above and remove the \n character from 
the end of each line and review the file for the differences 
in behavior. You should use a file named lab3.txt.
*/

#include <iostream>
#include <fstream> //calling for library to perform file input and output

using namespace std;

int main()
{
    ofstream outputFile;  //declares outputFile to write data on file "lab3.txt"
    outputFile.open("lab3.txt"); //opens and names the file

    //everything within the << and the ; after ouputFile is written onto the lab3.txt file
    outputFile<<"Bourne Identity"
    "Star Wars Episode IV"
    "The Hunger Games"
    "Dead Pool"
    "X-Men First Class"
    "Star Wars Espisode V"
    "Get Out";    

    //flushes the buffer and writes the data to the disk
    outputFile.close();

    return 0;
}