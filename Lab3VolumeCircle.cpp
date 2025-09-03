//@author:
//@date:
//@purpose:

/*
7. Design and write a program that calculates the volume of a sphere, given the formula:𝑉=43𝜋𝑟3 Let 𝜋 = 3.1415, and radius r=7
*/

#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    //float data type because pi uses decimal places
    float pi = 3.1415;
    double radius = 7.0;

    //assinging temporary float variable for 4/3 value.
    float x = (4.0/3.0);

    //pow requires double vairable
    //calculates half the equation (radius squared), first order of operations
    double RadiusCubed = pow(radius, 3.0);

    //calculates second half of the equation, second order of operations
    double volume = RadiusCubed * x * pi;

    //prints volume
    std::cout<< volume << " cubic units" << endl;

    return 0;

}