//@author: Gabe Silsby
//@date: 09/26/25
//@purpose:

/*
6. Design and write a program that initializes two variables named sumOp 
and adder, let sumOp equal 0 and adder equal 10. Create a for-loop that 
loops 50 times and sums the loop counter(index) and the adder variable. 
Each iteration through the loop, you should print the sumOp variable that 
holds the value your summed up.
*/

#include <iostream>

using namespace std;

int main()
{
    int sumOp = 0;
    int adder = 10;
    int num;
    //intialize num as 0; when num is less than 50 the condition is true; add 1 value to the variable each loop
    for(num = 0; num<50;++num)
    {
        //sum variable will be equal to the sum of num and 10 each loop
        int sum = num + adder;
        //each iteration the sumOp will increase by the prior sum value
        sumOp = sumOp + sum;

        cout<<sumOp<<endl;
    }

}