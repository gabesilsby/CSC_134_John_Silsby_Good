//@author:
//@date:
//@purpose:

/*
7. Design and write a program that accepts an integer input 
from a user and display the multiplication table for the 
entered integer. The multiplication table should display the 
results from 0 -12. For example, if the entered integer is 2, 
then you should show the table and it values between 0 and 12.
*/

#include <iostream> 

using namespace std;

int main()
{
    int userInput;
    int num;
    cout<<"enter an integer to see multiplication table: ";
    cin>>userInput;
    cout<<"Integer  |Table"<<endl;
    cout<<"------------------"<<endl;

    for(num = 0; num <= 12; ++num)
    {
        float product = userInput*num;
        cout<<num<<"          "<<product<<endl;

    }
    return 0;
}