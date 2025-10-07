//@author: Gabe Silsby
//@date: 10/07/25
//@purpose:
/*
5. Design and write a program that prompts the user
to enter the name of three friends. You should capture 
the names of each friend and write them to a new
file named lab5.txt on separate lines of the file
using the ofstream object. Make sure you use the 
close() method to ensure the file object handle is
properly closed.
*/

#include <iostream>
#include <fstream>  //calling for library to perform file input and output

using namespace std;

int main()
{
    //declare variables
    string userInput1, userInput2, userInput3;


    ofstream outputFile("lab5.txt");    //declares outputFile to open, name, and write data on file "lab5.txt"
    //ask user for value on lines 28, 30, 32
    cout<<"Friend 1: ";
    cin>>userInput1;
    cout<<"Friend 2: ";
    cin>>userInput2;
    cout<<"Friend 3: ";
    cin>>userInput3;
    
    //writes the data of each input on a new line on lab5.txt
    outputFile<<userInput1<<endl<<userInput2<<endl<<userInput3;

    outputFile.close(); //flushes the buffer and writes the data to the disk


    return 0;


}