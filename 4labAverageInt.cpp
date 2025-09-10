//@author:
//@date:
//@purpose:

/*
1. Design and write a program that allows a user to enter 3 integer values 
and calculate the average of the values entered. You should print the resulting 
value as "The average of your three numbers is: YOUR_RESULT_HERE"
*/

#include <iostream>

using namespace std;

int main()
{
    int intOne, intTwo, intThree;
    cout<<"What is your first integer? ";
    cin>>intOne;
    cout<<"What is your second integer? ";

    cin>>intTwo;
    cout<<"What is your third integer? ";

    cin>>intThree;

    float averageValue = (intOne+intTwo+intThree)/3.0;

    std::cout <<"The average of your three numbers is " << averageValue << endl;
    return 0;
}