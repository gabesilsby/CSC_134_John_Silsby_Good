//@author: Gabe Silsby
//@date: 09/21/25
//@purpose:


/*
3. Design and write a program that uses a while-loop to prompt a user for 10
grades(must be floating point values) and calculate the average and print the result to the
console after all 10 grades have been entered
*/


#include <iostream>


using namespace std;


int main()
{
   //declaring variables
   int maxGrades = 0;
   float gradeInput;
   float totalGrade;
   float avg;


   //whenever maxGrades is less than 10, prompt user to input grade, add input value to total grade value, then reprompt user
   while(maxGrades < 10){
       ++maxGrades;
       cout<<"enter grade("<<maxGrades <<"): "<<endl;
       cin>> gradeInput;
      
       totalGrade = totalGrade + gradeInput;


   }
   //average value of 10 grades
   avg = totalGrade/10.0;
   cout<<"average grade is: " <<avg<<endl;
   return 0;
}
