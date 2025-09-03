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
    int dividend = 5;
    int divisor = 0;
    int answer = dividend / divisor; 
    
    //only uses if statement because code is intended to divide by 0
    if (divisor == 0) {
        cout << "CANNOT DIVIDE BY 0" << endl;
    }

    return 0;

}
