//@author: Gabe Silsby
//@date: 09/22/25
//@purpose:

/*
1. Design and write a program the implements a simple for-loop starting at 0 and terminating at 10. 
Print the loop counter(index) using cout each iteration through the loop.
*/

//TenFor... get it?

#include <iostream>

using namespace std;

int main()
{
    int num;

    for(num = 0; num <= 10; ++num)
    {
        cout<<num<<endl;
    }

    return 0;
}
