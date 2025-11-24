//@author: Gabe Silsby  
//@date: 11/17/25
//@purpose: write a c++ function that uses a function named displayWelcome() that does not take any arguments and returns void.

#include <iostream>
using namespace std;

//write displayWelcome function before main function so that it caan be referenced more easiily
void displayWelcome(){
    cout<<"===================================="<<endl;
    cout<<" C++ Function Demonstration"<<endl;
    cout<<"===================================="<<endl;
}
int main(){
    //call for the displayWelcome function, no arguments needed
    displayWelcome();
    return 0;
}