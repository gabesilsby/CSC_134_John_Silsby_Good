//@author: Gabe Silsby
//@date: 09/25/25
//@purpose:

/*
8. Design and write a program that asks the
user how many times they would like roll a 
single die(integer value). After the user 
enters the number of rolls, then randomly
choose a number between 1 and 6 and use a
for-loop to simulate rolling a die. Hint: 
use the rand() method/function 
*/

#include <iostream>

using namespace std;

int main()
{
    //declare variables
    int numRolls;
    int run;

    int min = 1;
    int max = 6;

    cout<<"number of rolls: ";
    cin>>numRolls;

    //initialize run as 0; condition is that run must be less than numRolls to be true; every loop will add 1 to the int run value
    for (int run = 0; run < numRolls; run++) 
    {
        //asked ChatGPT how to use rand() function
        //"rand()" is a c++ function that gives a random integer between 0 and a random large number
        //"(max-min+1)" declares that the max value of the range will be: (max-min+1) == 6-1+1;so the max value is 6
        //"+min" declares that the minimum value of the range will be: +min == 1
        //the range will be 1-6, which "rand()" will choose randomly
        //depending on how many rolls the user chose, this will repeat accordingly ot make a new random integer 
        int num = (rand() % (max - min + 1)) + min;
        //this will print the random number
        cout<<num<<endl;
    }
    return 0;
}