//@author: Gabe Silsby
//@date: 10/03/25
//@purpose: 
/*2. Write a program that prints a right triangle of stars using 
nested-for loops. The number of rows should be specified by the user. 
Your output would be similar to the following:
*/

#include <iostream>

using namespace std;

int main()
{
    int userInput;
    cout<<"How many rows should your triangle of stars have? ";
    //user enters int value
    cin>>userInput;

    //defines the number of rows (horizontal)
    //define run as 1; when run is less than or equal to userInput, the statement is true; add 1 value after each loop
    for(int run = 1; run <= userInput; run++)
    {
        //defines the number of columns (vertical)
        //define run2 as 1; when run2 is less than or equal to run, the statement is true; add 1 value after each loop
        for(int run2=1;run2 <= run; run2++)
        {
            cout<<"*";
        }
        //after the row is finished it will start outputting on a new line
        cout<<endl;
    }
    return 0;
}