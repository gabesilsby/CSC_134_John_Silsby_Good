//@author: Gabe Silsby
//@date: 9/02/25
//@purpose: better grade

/*
8. Design and write a program that calculates the square footage of a new home. The length of the house is 50 feet and the width of the home 
    is 32 feet. Hint: use the equation A = Length x Width. Print the correct unit along with the result to the console.
*/

#include <iostream>

using namespace std;

int main()
{
    //using int data type because no decimal points are used
    int length = 50;
    int width = 32;

    //equation to calculate square footage
    int SquareFootage = length * width;

    //prints squareFootage value
    std::cout<<SquareFootage<< " Square feet" << endl;

    return 0;
}