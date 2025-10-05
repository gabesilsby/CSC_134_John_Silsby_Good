//@author: Gabe Silsby
//@date: 09/29/25
//@purpose: 

/*
4. Design and write a program that loops backward from 100 to 1 using a for-loop 
and print each iteration of the loop to the console using cout
*/

#include <iostream>

using namespace std;

int main()
{

int num;
//initialize num as 100; then when num is less than or equal to 1 the condition is true; each loop subtract 1 from the int num value
for(num=100; num >= 1; --num)
{
    cout<<num<<endl;
}
return 0;
}