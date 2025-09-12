//@author: Gabe Silsby
//@date: 09/12/25
//@purpose: 

/*
5. Design and write a program that accepts a year from a user and determines if the year is a leap year. If it's a leap year, 
then print "The year you entered xxxx is a leap year". If the year is NOT a leap year, 
then print "The year you entered xxxx is NOT leap year"
*/

/*
1. The year is a multiple of 400.
2. The year is a multiple of 4 but not a multiple of 100.
*/

/*
Determine whether the year is divisible by 100. If it is, then it is a leap year if and
only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.
2. If the year is not divisible by 100, then it is a leap year if and if only it is divisible by
4. For example, 2008 is a leap year but 2009 is not.
*/
#include <iostream>

using namespace std;

int main()
{
    int year;

    cout<<"Enter a year: ";
    cin>>year;

    if (year % 100 ==0)
        cout<<"is leapy";
        if (year % 400 == 0)
        {
            cout<<"is leapy";
                }
        else 
            cout<<"notleapy";
    else if (year % 100 != 0)
        if (year % 4==0)
        {
            cout<<"leapy";
        }
    else 
        cout<<"not elly";
        

    return 0;

}