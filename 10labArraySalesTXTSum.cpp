//@author: Gabe Silsby
//@date: 10/28/25
//@purpose: 

/*
3. Using the attached sales.txt file, use what you have
learned with arrays and file processing to read each sale 
line-by-line and add each sale to an array. After all 
sales have been added to your array, you should loop
over the array and sum the sales and print the total to 
the console
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //import object to read data from other file
    ifstream inputFile;
    inputFile.open("sales.txt");
    //declaring variables
    int numOfValues = 0;
    int arraySize = 0;
    int sum = 0;

    //while the while condition is true, it will add 1 integer value to the arraySize (starting at zero)
    //once the arraySize index number does not exist on sales.txt, the program will head to the next line making array and setting number of values
    while(inputFile>>numOfValues)
        arraySize++;
    
    //making a constant variable for the arraySize for the array
    const int arraySizeConst = arraySize;
    float numbers[arraySizeConst];
    //the while loop on line 29 reads through the whole file and leaves off at the end
    //i closed and reopened the file to read through it again
    inputFile.close();
    inputFile.open("sales.txt");
    
    //declare i as zero; if i is less than arraySize the statement is true and the loop will run; add 1 value after each loop
    for (int i = 0; i < arraySize; i++)
    {
        //retrieves the data of a new value from the txt file and stores it in numbers[i]
        inputFile>>numbers[i];
        //prints the value retrieved to the terminal
        cout<<numbers[i];
        cout<<endl;
        //sums the values in the txt file
        sum += numbers[i];
    }

    //closes the file and flushes the buffer
    inputFile.close();

    cout<<"Total: "<<sum<<endl;
}