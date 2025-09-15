//@author: Gabe Silsby
//@date: 09/14/25
//@purpose:
/*
3. Design and write a program that accepts an integer value from a user.
 Use the modulo operator to determine if the number entered is even or odd
*/

#include <iostream>

using namespace std;

int main ()
{
    int input;  //declare variable

    cin>>input;
    if (input % 2==0)   //if is evenly divisble by 2, then it is even
        cout<<input<<" is even"<<endl;
    else            // if it not evenly divisble by 2, then it is odd
        cout<<input<<" is odd"<<endl;
    return 0;
}   