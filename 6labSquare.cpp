//@author:
//@date:
//@purpose:

/*
5. Design and write a program that sets an integer variable named minNum 
to the value of 0 and a variable named maxNum to 100. Implement a for-loop to 
print each number and its square to a simple table on the console. An example of
the table format should look like the following, but with all 100 numbers and 
squares populated in the table:

Number | Number Squared 
---------------------------
2                      4
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int minNum = 0;
    int maxNum = 100;
    cout<<"Number | Number Squared"<<endl;
    cout<<"                       "<<endl;

    for(minNum = 0; minNum<=maxNum;++minNum) //should it be to 99 or 100? ASKED QUESTION HERE
    {
        cout<<minNum<<"             "<<pow(minNum, 2)<<endl;
    }
    
    return 0;
}