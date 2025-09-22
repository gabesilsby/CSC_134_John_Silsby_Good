//@author: Gabe Silsby
//@date: 09/21/25
//@purpose:
/*
5. Design and write a program that uses a while-loop that loops until the 100th iteration. You should set a
counter(accumulator) to track the number of iterations through the loop and exit when the counter reaches 100. Finally,
print the a message on the conolse that tells the user how many iterations were completed---this should be 100
*/


#include <iostream>


using namespace std;


//probably could have made this simpler
int main()
{
   //declare and initialize variables
   int iterator = 0;
  
   //whille iterator is less than or equal to 100 the function below will run
   while(iterator <= 100)
   {
       //if iterator value is equal to 100 then code is complete
       if (iterator == 100)
           {
               cout<<iterator<<" iterations were completed."<<endl;
               //adds int for each false boolean
               ++iterator;


           }
       else {
           cout<<iterator<<endl;
           ++iterator;
       }
   }
   return 0;
}
