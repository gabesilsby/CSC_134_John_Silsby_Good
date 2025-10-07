//@author: Gabe Silsby
//@date: 10/03/25
//@purpose: 
/*
4. Write a program that prints a chessboard
 pattern of asterisks and spaces using nested
  for-loops. For white-spaces use a space and 
  for black-spaces use and asterisk. You should 
  prompt the user for the size of the chess 
  board with a single integer value. In the 
  example below the value entered was 7.  Your 
  pattern will look similar to this:
*/

//output depicts chess board when viewing it from the side, like how examplified in moodle
#include <iostream>

using namespace std;

int main()
{
    int userInput;
    cout<<"How big do you want your chessboard to be? ";
    //user enters integer value for userInput
    cin>>userInput;

    //defines length of chess board
    //defines run as 0; when run is less than or equal to userInput, the statement is true; add 1 to variable each loop
    for(int run = 0; run <= userInput; ++run)
    {
        //defines height of chess board
        //defines run2 as 0; when run2 is less than or equal to userInput, the statement is true; add 1 to variable each loop
        for(int run2 = 0; run2 <= userInput; ++run2)
        {
            //if (run + run2) is even, print "*"; if odd, print spaces
            //this alternates the squares to create the checkered pattern.
            if((run+run2) % 2 == 0)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}