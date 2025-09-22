//@author: Gabe Silsby
//@date: 09/21/25
//@purpose:
/*
Design and write a program that calculates the angle(theta) of a right triangle given the following:
length of triangle x is 3 units
height of triangle y is 4 units
The angle theta is adjacent to leg x
use the equation 𝑥2+𝑦2=𝑐2 , let c equal the hypotenuse
Note: use the atan2() function, to convert from radians to degrees use 180/𝜋. Use 
ChatGPT to research the atan2() function and how it can be used in your program.
If the angle(theta) is equals 53.13° then print "This is a 3-4-5 triangle", otherwise 
print "This is NOT a 3-4-5 triangle".
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    //declare and initialize variables
    int lengthTriangle = 3;
    int heightTriangle = 4;

    //use atan2 function to calculate theta in radians
    double thetaRad = atan2(heightTriangle, lengthTriangle);

    //converting theta to degrees
    double thetaDeg = thetaRad*(180/3.1415926536);

<<<<<<< HEAD
    float cSquared = (lengthTriangle*lengthTriangle)+(heightTriangle*heightTriangle);
    float c = pow(cSquared, 0.5);

    cout<<c<<endl;
=======
    //print thetaDeg
>>>>>>> 73e28d0 (commit for submission 09/21/25(comments))
    cout<<thetaDeg<<endl;

    //if statement to decide if thetaDeg is within range of 3-4-5 triangle
    //chose to do range instead of "==" because float data types hold extra decimals points
    if (thetaDeg >= 53.13 && thetaDeg <= 53.139)
        {cout<<"good stuff\nthese dimensions are a 3-4-5 triangle";}
    else
        {cout<<"bad stuff\nthis is NOT a 3-4-5 triangle";}

    

    return 0;

}