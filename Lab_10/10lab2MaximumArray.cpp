//@author: Gabe Silsby
//@date: 11/02/25
//@purpose:

/*
Program 1: Find the Maximum Value in an Array
Purpose
To enable users to input a list of integers and find the maximum value from that list.

Requirements
Input:

The program must prompt the user to enter a fixed number of integers (e.g., 5).
Input must be validated to ensure that only integers are accepted.
Processing:

The program must store the integers in an array.
It must iterate through the array to determine the maximum value.
Output:

The program must display the maximum integer found in the array.
*/

#include <iostream>
using namespace std;

int main() 
{
    const int arraySize = 5;     //number of integers to input in array
    int numbers[arraySize];      //array to store integers
    int maxInt;           

    cout << "Enter " << arraySize << " integers:" << endl;

    //for loop for user input to add value to each array index value
    for (int i = 0; i < arraySize; i++) 
    {
        cout << "Enter integer: " << i + 1 << ": ";
         while (!(cin >> numbers[i])) //while the user enters a console input the loop will run, if the input is valid it is false (because of the !) and the loop below will not run. If the input is not valid, the loop is true and the loop below will run. 
        {  //input will fail if integr is not entered 
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();                //clears error flag
            cin.ignore(1000, '\n');     //discards invalid inputs, watched lots of videos on this
         }
    }

    maxInt = numbers[0];
    //runs through each value of the array 
    for (int i = 0; i < arraySize; i++)
    {
        if(numbers[i] > maxInt)
            maxInt = numbers[i];//sets new max integer value if the value at i is greater than the previous max integer value 
    }
    cout<<"Max value in array is: "<<maxInt<<endl;
    return 0;

}