//@author: Gabe Silsby
//@date: 10/6/25
//@purpose:
/*1. Design and write a program that uses the ofstream object to create a new file
 named lab1.txt and write the following values to the file:
Bourne Identity
Star Wars Episode IV
The Hunger Games
Dead Pool
X-Men First Class
Star Wars Espisode V
Get Out
*/

#include <iostream>
#include <fstream> //calling for library to perform file input and output

using namespace std;

int main()
{
    ofstream outputFile;  //declares outputFile to write data on file "lab1.txt"
    outputFile.open("lab1.txt"); //opens and names the file

    //everything within the << and the ; after ouputFile is written onto the lab1.txt file
    outputFile<<"Bourne Identity\n"
    "Star Wars Episode IV\n"
    "The Hunger Games\n"
    "Dead Pool\n"
    "X-Men First Class\n"
    "Star Wars Espisode V\n"
    "Get Out";    

    //flushes the buffer and writes the data to the disk
    outputFile.close();

    return 0;
}