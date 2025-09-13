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
#include <iostream>

using namespace std;

int main()
{
    int year;

    cout<<"Enter a year: ";
    cin>>year;

    if (year%4==0)
    {
        if (year%100==0)
            {
                if (year%400==0)
                    cout<<"The year you entered: " << year <<" is a leap year"<<endl;
                else 
                    cout<<"The year you entered: " << year <<" is NOT a leap year"<<endl;

            }
        else
            cout<<"The year you entered: " << year << " is a leap year"<<endl;

    }
    else
        cout<<"The year you entered: " << year <<" is NOT a leap year"<<endl;

    return 0;
}