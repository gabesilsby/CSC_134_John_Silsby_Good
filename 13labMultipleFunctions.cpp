//@author: Gabe Silsby
//@date: 11/23
//@purpose:
/*
5. Write a C++ program named multipleFunctions.cpp that
 use the squareNumber() and averageValues() functions.
The program should have a new function named multipleFuncs() 
that does not take any arguments. The function(when called) 
should in-turn call both the squareNumber() and averageValues()
functions respectively and should pass in the required 
arguments for these two funcitons. You should store the 
return values from each function into local variables and 
print the variable values to the console.

*/
#include <iostream>
using namespace std;

//declare functions at start so they can be feferenced, regardless of where main() is
int squareNumber(int);
float averageValues(int, int, int);
void multipleFuncs();

int main(){
    //first function call, calls multipleFuncs function with no arguments
    multipleFuncs();
}

int squareNumber(int user_inputSq)
{
    //calculates the squared value of an input
    int user_input_squared = user_inputSq * user_inputSq;
    //sends the calculated value to whichever function (multipleFuncs) calls it
    return user_input_squared;
}

float averageValues(int intOne, int intTwo, int intThree){
    //calculates the average value of the three inputs
    int aVSum = intOne + intTwo + intThree;
    float aVAverage = aVSum/3.0;
    //sends the calculated value to whichever function (multipleFunds) calls it
    return aVAverage;
}

void multipleFuncs(){
    //declare integer variables so they are local
    int user_inputSq;
    int intOne, intTwo, intThree;
    cout<<"Enter number to square: ";
    cin>>user_inputSq;
    //assign local variable to the returned value from squareNumber
    int squaredMF = squareNumber(user_inputSq);
    cout<<squaredMF;

    cout<<endl<<endl;


    cout<<"Enter three integers to return an average: ";
    cin>>intOne>>intTwo>>intThree;
    //assign local variable to the returned value from averageValues
    float average = averageValues(intOne, intTwo, intThree);
    cout<< average<<endl;

}