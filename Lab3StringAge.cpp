//@author: Gabe Silsby
//@date: 
//@purpose: 

/*
2. Design and write a program that uses the C++ string class. The program should have three variables with the following names(verbiage, age 
    and verbiage_end). The verbiage variable should be assigned the string "Today I am " , the age variable should be assigned a string value 
    of 25 and the verbiage_end variable should be assigned the string " years old!".  Concatenate the three variables and print the result to 
    the console.
*/

#include <iostream>

using namespace std;

int main()
{
    //assigning age variable
    string verbiage = "Today I am ";
    string age = "25";
    string verbiage_end = " years old!";

    //concatenating the variables
    std::cout<< verbiage << age << verbiage_end << endl;

    return 0;
}
