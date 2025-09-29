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

    for(num = 0; num<50;++num)
    {
        sumOp = num + adder;
        cout<<sumOp<<endl;
    }

}