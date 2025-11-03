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
    float array[5] = {1, 2, 3, 4, 5};
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }
cout<<sum;
    
}