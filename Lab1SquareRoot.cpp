//@author: Gabe Silsby
//@date: 8/28/25
//@purpose: Design & write a program that takes the square root of a real number and print the result to the console.

//import iostream library
#include <iostream>

//importing math library
#include <cmath>

//making namespace
using namespace std;

//defining function main()
//defines variables and mathematical function
int main()
    {
        //I used int data type because 63 is a positive whole number
        int base = 63;
        //A double data type would be overkill for the value of 0.5, so I used float because I still needed to input a decimal
        //value
        float power = 0.5;
        //I chose to do a double data type because of the length of decimals in the answer
        double answer = pow(base, power);

        //this line prints the answer
        std::cout << answer << std::endl;

        return 0;

    }