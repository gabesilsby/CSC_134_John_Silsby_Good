//@author:
//@date: 
//@purpose:

/*
Design and write a program that calculates the distance travelled (x) given the following:
Equation -> x = v * t , where x is the distance travelled
Velocity v = 80 mph
Time t = 2 hours
*/

#include <iostream>

using namespace std;

int main()
{   
    double velocityInMPH = 80;
    double timeInHours = 2; 
    double distance = velocityInMPH * timeInHours;

    std::cout << distance << " Miles" << std::endl;

    return 0;
}