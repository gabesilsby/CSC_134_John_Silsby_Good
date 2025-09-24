//@author:
//@date:
//@purpose:

/*
3. Design and write a program that uses an accumulator to count the number
 of iterations in a for-loop. You should initialize your accumulator to zero then 
 set up a for-loop to loop a maximum of 100 times and add 1 to the accumulator each 
 iteration through the loop. When the loop is complete you should print our the following 
 using cout -> "The accumulator value is: xxx"
*/

#include <iostream>

using namespace std;

int main()
{
    int num;

    for(num = 0; num <=100; ++num)
    {
        cout<<num<<endl;
        if(num==100)
            cout<<"the Accumulator value is: "<< num<<endl;
    }
}