//@author: Gabe Silsby
//@date: 9/2/25
//@purpose: Design and write a program that calculates the Voltage, v given the following:


/*
Equation V = IR, where V is voltage, I is current in amps and R is resistance
I = 10 amps
R = 2 ohms 
*/

#include <iostream>

using namespace std;

int main()
{
    //I used integer data types because my values all consist of positive, whole numbers
    int CurrentInAmps = 10;
    int Resistance = 2;

    //this line calculates the voltage using the above variables
    int Voltage = CurrentInAmps * Resistance;

    //This prints the Voltage value and adds a unit "Volts"
    std::cout << Voltage << " Volts" << endl;

    return 0;

}