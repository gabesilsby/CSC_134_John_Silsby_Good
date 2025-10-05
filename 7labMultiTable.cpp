//@author: Gabe Silsby
//@date: 10/03/25
//@purpose:
/*
Create a program that prints a multiplication table for numbers 1 to 10 
using nested for loops. Your print out should follow the below format:
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    //first for loop accounts for the multiplier (height of the output) 
    //defines num as 1; when num is less than or equal to 10, the statement is true; add 1 value to the variable each loop
    for(int num = 1; num <= 10; ++num)
    {
        //second for loop accounts for the multiplicand (length of the output)
        //defines num2 as 1; when num2 is less than or equal to 10, the statement is true; add 1 value to the variable each loop
        for(int num2 = 1; num2 <= 10; ++num2)
        {
            //prints the product and spaces by \t 
            cout<<num*num2<<"\t";
        }
        //every time the second for loop finishes, a new line is made for the next multiplier
        cout<<endl;        
    }
 }
 