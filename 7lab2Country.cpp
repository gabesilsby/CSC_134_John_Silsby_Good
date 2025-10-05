//@author: Gabe Silsby
//@date: 10/04/25
//@purpose:
/*
1. A country club(Pinehurst #2) which currently charges $250,000
 per year for Membership, has announced it will increase its membership 
 fee by 6% each year for the next 5 years. Write a program that use 
 a for-loop to display the projected sales for the next 5 years.
*/

#include <iostream>

using namespace std;

int main()
{
    float membershipFee = 250000;
    cout<<"After 5 years, the prices of a membership will be"<<endl;

    //this will do the math for the compounding price
    //defines run as 1; when run is less than or equal to 5, the statement is true; add 1 to the variable after each loop
    for(int run = 1; run <= 5; run++)
    {
        //membershipFee is equal to the prior year's membership fee multiplied by 1.06 (increased by 6%)
        membershipFee = membershipFee * 1.06;
        //prints the price of membership with each respective year
        cout<<"Year "<<run<<": $"<<membershipFee<<endl;
    }
    return 0;
}