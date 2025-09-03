//@author: 
//@date:
//@purpose: 

/*
Design and write a program that calculates the Voltage, v given the following:
Equation V = IR, where V is voltage, I is current in amps and R is resistance
I = 10 amps
R = 2 ohms 
*/

#include <iostream>

using namespace std;

int main()
{
    int CurrentInAmps = 10;
    int Resistance = 2;
    int Voltage = CurrentInAmps * Resistance;

    std::cout << Voltage << endl;

    return 0;

}