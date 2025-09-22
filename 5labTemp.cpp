//@author: Gabe Silsby
//@date: 09/21/25
//@purpose:


/*4. Design and write a program that uses a while-loop to prompt the user for a temperature and keep prompting
them until they enter a temperature of 212.34 degrees. Once the proper temperature has been entered, print the
following message to the console "The temperature has been successfully set, thank you."
*/
#include <iostream>


using namespace std;


int main ()
{
   //decalre variable
   double tempInput;
   //ask user for input
   cin>>tempInput;
   //if temptInput is equal to 212.34, then program is complete
   if(tempInput != 212.34 )
   {
       //every time tempInput isn't equal to 212.34, the program will reprompt the user to enter a temperature
       while(tempInput != 212.34)
       {
           cout<<"enter temp: ";
           cin>>tempInput;
           cout<<tempInput<<" is your last entered value"<<endl;
       }
   }  
   cout<<"the tempearture has been succesfully set, thank you";


   return 0;
}