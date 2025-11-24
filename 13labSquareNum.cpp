//@author: Gabe Silsby
//@date: 11/21/25
//@purpose:
/*
2. Write a C++ program named squareNum.cpp that prompts the 
user for an integer value. You should pass the integer value 
into a function name squareNumber(). After the number is
 squared, you should return the squared value and print it 
 to the console from the main() function of the program.

*/

#include <iostream>
#include <cmath>
using namespace std;

int squareNumber(int, int);

int main(){
    int user_input;
    cout<<"enter a value for its squared value: ";
    cin>>user_input;
    int powers = 2;
    int answer = squareNumber(user_input, powers);
    cout<<answer<<" is your squared value";
    return 0;
}

int squareNumber(int user_input,int power)
{
    //i did pow function at first because I thought it was supposed to be sqaure root
    float user_input_squared = pow(user_input, power);
    return user_input_squared;
}

