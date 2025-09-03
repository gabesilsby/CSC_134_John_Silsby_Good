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
    float pi = 3.1415;
    double radius = 7.0;

    float x = (4.0/3.0);

    double RadiusCubed = pow(radius, 3.0);

    double volume = RadiusCubed * x * pi;

    std::cout<< volume << endl;

    return 0;

}