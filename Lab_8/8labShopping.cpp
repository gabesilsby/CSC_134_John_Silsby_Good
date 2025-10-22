//@author: Gabe Silsby
//@date: 10/7/25
//@purpose:
/*2. Design and write a program that uses the ofstream 
object to create a new file named lab2.txt and write 
the following values NEATLY to the file. Hint: Use \n 
or new lines.
*/

#include <iostream>
#include <fstream>  //calling for library to perform file input and output

using namespace std;

int main()
{
    ofstream outputFile;    //declares outputFile to write data on file "lab1.txt"
    outputFile.open("lab2.txt");     //opens and names the file

    //everything within the << and the ; after ouputFile is written onto the lab1.txt file
    outputFile<<
    "***************************************\n"
    "               Shopping Cart      \n"
    "***************************************\n"
    "product code        qty           price\n"
    "     789             7           $12.00\n\n"
    "                          Total: $84.00";
    
    //flushes the buffer and writes the data to the disk
    outputFile.close();

    return 0;
}