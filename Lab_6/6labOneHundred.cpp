//@author: Gabe Silsby 
//@date: 09/24/25
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
    //initialize num as 0; when num is less than or equal to 100 the condition is true; add 1 value to the variable each loop
    for(num = 0; num <=100; ++num)
    {
        cout<<num<<endl;
        //once the num variable is equal to 100 the message below will be printed
        if(num==100)
            cout<<"the Accumulator value is: "<< num<<endl;
    }
}