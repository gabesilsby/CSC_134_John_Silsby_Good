//@author: Gabe Silsby
//@date: 9/2/25
//@purpose:Design and write a program that calculates the distance travelled (x) given the following:

/*
Equation -> x = v * t , where x is the distance travelled
Velocity v = 80 mph
Time t = 2 hours
*/


#include <iostream>

using namespace std;

int main()
{   
    //I used the double variable to experiment with the different data types
    //These next two lines set values to my variables by hardcoding
    double velocityInMPH = 80;
    double timeInHours = 2; 

    //This is the equation used to calculate distance
    double distance = velocityInMPH * timeInHours;

    //this line prints my distance value and adds the unit "Miles" to it
    std::cout << distance << " Miles" << std::endl;

    return 0;
}