//@author: Gabe Silsby
//@date: 10/9/25
//@purpose:

/*1. Using the attached friends.txt file. Design and write a C++
 program that reads the data from the file and prints it to the console
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;     //declares outputFile to read data from file ".txt"
    inputFile.open("friends.txt"); //selects the file and opens it

    string line;    //declare line as string because the friends.txt file is written in string

    //initialize run as 1; when run is less than or equal to 10, the statement is true; add 1 value to variable
    for(int run = 1; run <= 10; run++)
    {
        //getline function reads entire line of text from selected file and sends data to variable "line"
        getline(inputFile, line);
        //prints: Name #: __text from file__
        cout<<"Name "<< run <<": "<<line<<endl;
    }
    
    //flushes the buffer and writes the data to the disk
    inputFile.close();

    return 0;
}