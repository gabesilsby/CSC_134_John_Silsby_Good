//@author: Gabe Silsby
//@date: 11/23/25
//@purpose: 
/*
4. Write a C++ program named loop.cpp that implements a function
 named loop(). The loop() function should take an integer argument 
 less than 1000. The function should use either a classic for-loop
  or a range-based for-loop to iterate until the integer value 
  is reached(e.g. if you pass in 100, you should loop 100 times).  
*/

#include <iostream>
using namespace std;
//initialize the loop functin so main can reference it
void loop(int loop_count);

int main(){
    int i;
    cout << "Enter an integer less than 1000: ";
    cin >> i;

    //check that user enters integer less than 1000, if not repeateddly prompts user to fix mistake
    while(i >= 1000) {
        cout << "Error: integer must be less than 1000: ";
        cin>> i;
    }

    //calls loop() fucntion with i argument
    loop(i);

    return 0;
}

void loop(int loop_count){
    //initialize iterator as 0; when iterator is less than loop_count (i), the statement is true; add 1 to the iterator value
    for (int iterator = 0; iterator <= loop_count; iterator++)
    {
        cout<<iterator<<endl;
    }
    
}