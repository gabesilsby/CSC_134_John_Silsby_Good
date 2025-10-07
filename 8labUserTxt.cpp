//@author: Gabe Silsby
//@date: 10/7/25
//@purpose:
/*4. Design and write a program that accepts an integer 
input from the user and use the ofstream object to create
 a new file named lab4.txt. Take the integer value entered 
 by the user and implement a for-loop to loop over n-number
of times, where n is the value entered by the user and 
write each iteration of the loop to the file. For example,
if the user enters 4, then you should write 0 1 2 3 to 
the file with each value on a new line without any spaces
between each line. Make sure you use the close() method 
to close the file and then print "Done Writing...." to 
the console when the program is complete.
*/

#include <iostream>
#include <fstream>  //calling for library to perform file input and output

using namespace std;

int main()
{
    ofstream outputFile;    //declares outputFile to write data on file "lab4.txt"
    outputFile.open("lab4.txt");    //opens and names the file

    int userInput;
    cout<<"What number: ";

     //user enters value
    cin>>userInput;

    //initialize run as 0; when run is less than userInput, the statement is true; add 1 value to variable
    for(int run = 0; run < userInput; run++)
    {
        //prints the run value to lab4.tt
        outputFile<<run<<endl;
    }

    //flushes the buffer and writes the data to the disk
    outputFile.close();

    cout<<"Done Writing....";

    return 0;

}