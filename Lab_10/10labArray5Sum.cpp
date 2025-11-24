//@author: Gabe Silsby
//@date: 10/28/25
//@purpose:

/*
2. continue using what you have learned about arrays and write a C++ 
program to initialize a 1-D array with 5 integer values and sum those
 values and print the total to the console.
*/

#include <iostream>
using namespace std;

int main()
{
    //declare array values (hardcoded) and sum initial value
    int array[5] = {1, 2, 3, 4, 5};
    float sum = 0;

    //declare i as 0; when i is less than 5, the number of values array holds, the statement is true and the code will run; adds 1 value to i after each loop
    for (int i = 0; i < 5; i++)
    {
        //if the value of i is 4 then it will print array[i] = to the terminal, otherwise it will do the same but with a +
        if(i == 4)
            cout<<array[i]<< " = ";
        else
            cout<<array[i]<< " + ";
        //sums the values in the array
        sum += array[i];

    }
cout<<sum<<endl;
    
}