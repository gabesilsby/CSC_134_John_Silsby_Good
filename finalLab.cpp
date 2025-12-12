//@author:
//@date: 12/05/25
//@purpose:
/* Using the equation below, determine the distance the
human cannonball will travel when he hits the ground. 
Assume all distances are in meters. The quadratic equation
generates two results, one of the results will be negative 
and you have to throw this away, as it is not meaningful. You 
should keep the positive result and use your choice of Generative 
AI to graph and confirm your findings*/

/*x space equals space minus b space plus-or-minus space square
root of b squared space minus space 4 a c space end root space divided by space 2 a


Default Values:

let a = −0.01568

let b = 1.00000

let c = 1.5*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a = -0.01568;
    float b = 1.00000; 
    float c = 1.5;

    float discriminant = b * b - 4 * a * c; //calculates discriminant value within square root

    float minusQuad = (-b - sqrt(discriminant)) / (2 * a);    //calculates negative solution
    float plusQuad = (-b + sqrt(discriminant)) / (2 * a);   //calculates positive solution

    //if statements will choose which x-intercept to print
    if (minusQuad > 0) {
        cout << "The distance the human cannonball will travel is: " << minusQuad << " meters." << endl;
    } 

    if (plusQuad > 0) {
        cout << "The distance the human cannonball will travel is: " << plusQuad << " meters." << endl;
    }
}