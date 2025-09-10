//@author:
//@date:
//@purpose: 

/*
. Design and write a program that uses the 1st program above and print the 
letter grade based on the following:

      - if number grade is between 90 and 100, 
      then print the letter grade of A

      - if the number grade is between 80 and 89, 
      then print the letter grade of B

     - if the number grade is between 70 and 79, 
     then print the letter grade of C

     - if the number grade is between 60 and 69, 
     then print the letter grade of D

     - if the number grade is less than 60, 
     then print the letter grade of F
     
*/

#include <iostream>


using namespace std;

int main()
{
    int intOne, intTwo, intThree;
    cout<<"What is your first integer? ";
    cin>>intOne;

    cout<<"What is your second integer? ";
    cin>>intTwo;

    cout<<"What is your third integer? ";
    cin>>intThree;

    float averageValue = (intOne+intTwo+intThree)/3.0;

    float numberGrade = averageValue;
    cout<<numberGrade<<endl;

    if (90.0 <= numberGrade && numberGrade <= 100.0)
    {cout<<"letter A";}

    if (numberGrade >= 80.0 && numberGrade <= 89.999)   //using lots of decimal points to ensure averages between 89 and 90 are accounted for
    {cout<<"letter B";}

    if (numberGrade >= 70.0 && numberGrade <= 79.999)   //using lots of decimal points to ensure averages between 79 and 80 are accounted for
    {cout<<"letter C";}

    if (numberGrade >= 60.0 && numberGrade <= 69.999)   //using lots of decimal points to ensure averages between 69 and 70 are accounted for
    {cout<<"letter D";}

    if (59.999 >= numberGrade)
    {cout<<"letter F";}

    


}