//@author: Gabe Silsby
//@date: 11/02/25
//@purpose: 
/*
Input:

The program must prompt the user to enter a fixed number of integers (e.g., 5).
Input must be validated to ensure that only integers are accepted.
Processing:

The program must store the integers in an array.
It must iterate through the array to reverse the order of the integers.
Output:

The program must display the integers in reverse order.
*/

#include <iostream> 

using namespace std;

int main()
{
    const int arraySize = 5;
    int array[arraySize]; //sets length of array 


    //creates for loop for user input to enter values into each index of array
    for (int i = 0; i < arraySize; i++) 
    {
        cout << "Enter integer: " << i + 1 << ": ";
         while (!(cin >> array[i])) 
        {  //input will fail if integr is not entered 
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();                //clears error flag
            cin.ignore(1000, '\n');     //discards invalid inputs, watched lots of videos on this
         }
    }

    //works backwards from max index number (arraySize -1) to print each value in index
    for (int i = arraySize; i >= 1; i--) {
        cout<<array[i-1]<< " ";
    }
    cout<<endl;

    return 0;
}