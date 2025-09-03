//@author:
//@date:
//@purpose:

/*
5. Design and write a program that converts the temperature in degrees Fahrenheit to degrees Celsius. Also ensure you use floating point data
    types for your variables. Hint: use the formula C = (Fº -32) * 5/9 . Print the result to the console using cout.
*/

#include <iostream>

using namespace std;

int main()
{
    //integer data type becuse F does not often use decimal places
    int FahrenheitTemp = 75;

    //float data type because Celsius often uses decimals and equation likely to result in non-whole number
    //use 0.55556 as decimal instead of (5/9) for float value
    float CelsiusTemp = (FahrenheitTemp - 32) * (0.55556);

    std::cout << CelsiusTemp <<endl;

    return 0;

}