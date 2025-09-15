//@author: Gabe Silsby
//@date: 09/14/25
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
    int intOne, intTwo, intThree;   //declare int variables
    cout<<"What is your first integer? ";
    cin>>intOne;

    cout<<"What is your second integer? ";
    cin>>intTwo;

    cout<<"What is your third integer? ";
    cin>>intThree;

    float averageValue = (intOne+intTwo+intThree)/3.0;  //takes average of user inputs

    float numberGrade = averageValue;  //converts average to numberGrade variable
    cout<<numberGrade<<endl;

    if (90.0 <= numberGrade && numberGrade <= 100.0)    //comparing numberGrade to range of grade values for each letter grade
    {cout<<"letter A.\n";}

    if (numberGrade >= 80.0 && numberGrade <= 89.999)   //using lots of decimal points to ensure averages between 89 and 90 are accounted for
    {cout<<"letter B.\n";}

    if (numberGrade >= 70.0 && numberGrade <= 79.999)   //using lots of decimal points to ensure averages between 79 and 80 are accounted for
    {cout<<"letter C.\n";}

    if (numberGrade >= 60.0 && numberGrade <= 69.999)   //using lots of decimal points to ensure averages between 69 and 70 are accounted for
    {cout<<"letter D.\n";}

    if (59.999 >= numberGrade)  //if it isn't any of the above, it is an F
    {cout<<"letter F.\n";}

    


}