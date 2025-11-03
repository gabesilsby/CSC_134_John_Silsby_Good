//@author: Gabe Silsby
//@date: 10/28/25
//@purpose: 
/*
1. Using what you learned during the lecture with 
arrays, write a C++ program that has an array of 10 
integer elements. You should create an array variable 
that takes the integer value of 10 and initializes 
the array to this value. For example, if array is 
supposed to be 10 grades, then the array should be 
initialized with 10 array elements. Next, for each 
grade, you should prompt the user to enter the grade 
value as an integer. When all grades have been entered, 
then you should calculate the average for the grades 
and print the result to the console.
*/

#include <iostream>
using namespace std;

int main()
{
    //initializes the grades array and sets the number of values to 10
    int grades[10];
    float total = 0;

    cout<<"Enter 10 grades: "<<endl;
    //declare i as 0; if i is less than 10 the statement is true and the loop wil run; add 1 value to i
    for (int i = 0; i < 10; i++)
    {
        //ask user to enter grade #. also included index number that the grade is stored in
        cout<<"grade "<< i+1 <<endl<< "(index number " << i<< "):";
        cin>>grades[i];
        //adds grade[i]'s value to total
        total += grades[i];
    }
    //declare average is total divided by 10
    float average = total/10;
    cout<<endl<<"AVERAGE: "<< average;

    return 0;
}