//@author: Gabe Silsby
//@date: 08/27/25
//@purpose: Design & write a program to calculate the product of two numbers and print the result to the console.



//including iostream directive
//acts as a library
#include <iostream>

//standard namespace
using namespace std;

//defines and makes a function with main()
//this function will calculate the product of the two variables

int main ()
{
    //I assign my variables to integer data types because I used positive, whole numbers
    int num1 = 98;
    int num2 = 99;

    //This line calculates my product
    int product = num1 * num2;

    //This line prints the value of my product
    std::cout << product << std::endl;
    
    return 0;

}
