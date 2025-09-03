//@author: 
//@date: 
//@purpose: Using the same equation x = v * t calculate the velocity, v,  given the following: Time t = 4 hours Distance x = 400 miles

#include <iostream>

using namespace std; 

int main()
{
    int timeInHours = 4;
    int distanceInMiles = 400; 
    int velocityInMPH = distanceInMiles * 1/timeInHours;

    std::cout << velocityInMPH << " MPH" << std::endl;

    return 0;

}
