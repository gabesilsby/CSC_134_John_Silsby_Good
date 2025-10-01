//@author: Gabe Silsby
//@date: 09/22/25
//@purpose:

/*
2. 
Design and write a program that accepts user input using cin for an integer value. 
After the user enters their value, use a for-loop to iterate over the integer and print
 out the number of iterations that occur. So for example, if you enter 5, the program 
 should print 0 through 4 on the console.
*/

#include <iostream>

using namespace std;

int main()
{
    //declare userInput variable integer data type
    int userInput;
    cout<<"enter your value: ";
    //recieve value for userInput
    cin>>userInput;
    int num;
    //initialize num as 0; when userInput is greater than num the condition is true; add 1 value to the num variable each loop
    for(num = 0; userInput > num; ++num)
    {
        cout<<num<<endl;
    }
    return 0;
}