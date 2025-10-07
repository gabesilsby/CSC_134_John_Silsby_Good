//@author: Gabe Silsby
//@date: 10/03/25
//@purpose: 
/*
3. Create a program that prints a square pattern of asterisks
 using nested for-loops. The side length of the square should 
 be specified by the user. Your results should be similar to:
*/

#include <iostream>

using namespace std;

int main()
{
    int userInput;
    cout<<"what are the lengths of sides of your square? ";
    //user enters value for integer variable 
    cin>>userInput;

    //defines length of square
    //defines run as 1; when run is less than or equal to userInput, the statement is true; adds 1 to variable each loop
    for(int run = 1; run <= userInput; ++run)
    {
        //defines height
        //defines run2 as 1; when run2 is less than or equal to userInput(square has same-length sides), the statment is true; adds 1 to variable each loop
        for(int run2 = 1; run2 <= userInput; ++run2)
        {
            cout<<"* ";
        }
        //after every row, it will output on a new line
        cout<<endl;
    }

    return 0;
}