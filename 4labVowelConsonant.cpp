//@author: Gabe Silsby
//@date: 09/12/25
//@purpose: 

/*
4. Design and write a program that accepts a single character and determine if the character is a vowel 
or consonant. You must account for upper and lower case characters and do not allow numeric values.
*/

#include <iostream>

using namespace std;

int main()
{
    char input;     //define input as char data type to store variable as single variable
    std::cout<<"enter a character to see if it is a consonant or a vowel."; 
    cin>>input;     //takes input from user

    //lines 21 - 30 check and proudce messages about if the character is a consonant
    if (input == 'a')
        cout<<"this is vowel"<<endl;
    else if (input == 'e')
        cout<<"this is vowel"<<endl;
    else if (input == 'i')
        cout<<"this is vowel"<<endl;
    else if (input == 'o')
        cout<<"this is vowel"<<endl;
    else if (input == 'u')
        cout<<"this is vowel"<<endl;

    else if (input >= '0' && input <= '9') //this parameter rejects numerical values
        cout<<"does NOT ACCEPT numberical values!!!!!!"<<endl;

    else        //if the character is not a vowel nor a number, then it it will be defined as a cononsant.
        cout<<"this is consonant"<<endl; 

    return 0;
}