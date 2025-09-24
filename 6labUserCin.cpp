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
    int userInput;
    cout<<"enter your value: ";
    cin>>userInput;
    int num;

    for(num = 0; userInput > num; ++num)
    {
        cout<<num<<endl;
    }
    return 0;
}