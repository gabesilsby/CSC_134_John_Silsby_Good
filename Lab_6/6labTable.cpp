//@author: Gabe Silsby
//@date: 09/25/27
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
    cout<<"enter an integer to see multiplication table: ";
    cin>>userInput;
    cout<<"      Table"<<endl;
    cout<<"Integer  |Product"<<endl;
    cout<<"------------------"<<endl;

    //initialize the value as 0; whenever the number is less than or equal to 12, the condition is true; add 1 integer value for each loop
    for(int num = 0; num <= 12; ++num)
    {
        //product is equal to userInput multiplied by the value of num
        int product = userInput*num;
        cout<<num<<"   x "<<userInput<<" =       "<<product<<endl;

    }
    return 0;
}