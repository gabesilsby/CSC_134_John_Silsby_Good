//@author: 
//@date:
//@purpose: 

/*
3. Design and write a program that adds two floating point values together and print the result to the console.
*/

#include <iostream> 

using namespace std;

int main()
{
    //assigning float values to include decimal points
    float num1 = 5.67;
    float num2 = 4.21;

    //equation to calculate answer
    float answer = num1 + num2;

    //prints answer 
    std::cout << answer << endl;

    return 0;
}