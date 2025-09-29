//@author: 
//@date:
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

for(num=100; num >= 1; --num)
{
    cout<<num<<endl;
}
return 0;
}