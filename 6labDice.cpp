//@author:
//@date:
//@purpose:

/*
8. Design and write a program that asks the
user how many times they would like roll a 
single die(integer value). After the user 
enters the number of rolls, then randomly
choose a number between 1 and 6 and use a
for-loop to simulate rolling a die. Hint: 
use the rand() method/function 
*/

#include <iostream>

using namespace std;

int main()
{
    int numRolls;
    int run;

    int min = 1;
    int max = 6;

    cout<<"number of rolls: ";
    cin>>numRolls;

    for (int run = 0; run < numRolls; run++) 
    {
        //asked ChatGPT how to use rand() function
        int num = (rand() % (max - min + 1)) + min;
        cout<<num<<endl;
    }



    

   /* for(run = 0; run < numRolls; ++run)
    {
       int rand(0, 6);

       cout<<rand;
    }
    */
   return 0;
}