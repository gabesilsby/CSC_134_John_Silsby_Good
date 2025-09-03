//@author: Gabe Silsby
//@date: 9/2/25
//@purpose: Design and write a program that calculates the Force, F

/*
F = ma, where F is Force, m is mass and a is acceleration
m = 10kg
a = 9.81m/s^2 (read 9.81 meters per second squared)
*/

//importing library
#include <iostream>


using namespace std;

int main()
{
    //setting integer variable for mass because it is a positive, whole number 
    int massInKg = 10;

    //setting float variable for acceleration because it is not a whole number and uses decimal places. I could use
    //variable
    float accelerationInMetersPerSecondSquared = 9.81;
    float force = massInKg * accelerationInMetersPerSecondSquared;

    //this line prints the value
    std::cout << force << " Newtons" << endl;

    return 0;

}