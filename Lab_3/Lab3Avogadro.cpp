//@author: Gabe Silsby
//@date: 9/02/25
//@purpose: better grade

/*
4. Design and write a program to print Avogadro's number using E notation. You should create a variable to hold the number and print the result
     to the console. Hint: Avogadro's Number is : 6.02214076 × 1023
*/

#include <iostream>

using namespace std;

int main()
{
    //assigning Avogadro's number to variable with E notation
    string AvocadoMole = "6.022E23";

    //prints the variable value as string data type
    std::cout<< AvocadoMole << endl;

    return 0;
}