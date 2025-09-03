//@author:
//@date:
//@purpose:

/*
6. Design and write a program that calculates the area of a circle, 
given the formula : 𝐴=𝜋𝑟2 . Let pi = 3.1415 and let the radius r = 19
*/

#include <iostream>

//importing cmath library to use pow function
#include <cmath>
using namespace std;

int main()
{
    //float data type for 4 decimal points
    float pi = 3.1415;

    //later pow will require double data type
    double radius = 19;

    //pow requires double vairable
    //calculates half the equation (radius squared), first order of operations
    double rSqared = pow(radius, 2.0);

    //calculates second half of the equation, second order of operations
    double area = pi * rSqared; 

    //prints area
    std::cout<< area <<endl;

    return 0;

}