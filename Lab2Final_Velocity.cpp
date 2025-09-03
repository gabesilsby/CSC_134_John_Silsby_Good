//@author: Gabe Silsby
//@date: 09/2/25
//@purpose: Using the same equation x = v * t calculate the velocity, v,  given the following: Time t = 4 hours Distance x = 400 miles

#include <iostream>

using namespace std; 

int main()
{
    //I assigned my variables the data type int because they are positive, whole numbers
    int timeInHours = 4;
    int distanceInMiles = 400; 

    //this equation calculates the velocity. I tried using the equation format provided as closely as I could while still solving for velocity
    //Im not sure if "using the same equation" meant use a multiplication function, or use that equation to derive a new equation. 
    int velocityInMPH = distanceInMiles * 1/timeInHours;

    //this line prints my velocity and adds the unit "MPH"
    std::cout << velocityInMPH << " MPH" << std::endl;

    return 0;

}
