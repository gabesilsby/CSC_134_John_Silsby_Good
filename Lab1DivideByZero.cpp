//@author: Gabe Silsby
//@date: 08/27/25
//@purpose: Design & write a program that divides a number by 0 and review the error.

//import library iostream
#include <iostream>

//standard namespace
using namespace std;

//defines function
int main()
{
    //I assigned my values here as integer data types 
    int dividend = 5;
    int divisor = 0;

    //This equation calculates the answer (quotient)
    int answer = dividend / divisor; 
    
    //only uses if statement because code is intended to divide by 0
    //Could apply an else statement so that if the divisor was any other value not equal to zero
    //it would print a valid answer, but I don't think that was in chapter 1-2. 
    if (divisor == 0) {
        //if the statement above (divisor is equivalent to the value of 0), then the line below will be printed in the terminal
        cout << "CANNOT DIVIDE BY 0" << endl;
    }

    return 0;

}
