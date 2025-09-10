//@author: Gabe Silsby
//@date: 9/02/25
//@purpose: better grade

/*
1. Design and write a program using the character data type that prints this character string Hi!  to the console. Hint: this is NOT a 
    string representation of Hi! , but the character representation. Read chapter 2 in your text book for more details
*/

#include <iostream>

using namespace std; 


int main() {

    //declaring individual characters as char data type similar to string, but not exactly
    char ch1 = 'H';
    char ch2 = 'i';
    char ch3 = '!';

    //printing characters one by one
    std::cout << ch1 << ch2 << ch3 << endl;

    return 0;
}