//@author: Gabe Silsby
//@date: 10/28/25
//@purpose: 
/*4. Design and write a C++ program that uses the 
Luhn algorithm to check the validity of a credit card. Your
credit card should be a string value and you should
use the following header libraries to assist you in 
the program: <iostream>, <sstream>, <algorithm> and <string>

Note: Test credit card numbers you can use are: 
4012888888881881 
5500000000000004
340000000000009
*/


#include <iostream> 
#include <sstream>  //didn't end up using 
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    //initialze the user input as a string
    string userInputString;
    int sum = 0;
    cout << "Enter credit card number: ";
    cin >> userInputString;

    //stores the number of characters in userInputString into the variable userInputSize
    int userInputSize = userInputString.size();

    int creditArray[20]; // larger than most credit cards to ensure array size is large enough
    //declare i as 0; if i is less than userInputSize, the statement is true; add 1 to the i value
    for (int i = 0; i < userInputSize; i++) {
        creditArray[i] = userInputString[i] - '0'; //convert each char to int and subtract the excessive zeros
    }

    //writes the card values backwards by iterating from the first to the last element 
    reverse(creditArray, creditArray + userInputSize);

    //luhn algorithm
    for (int i = 0; i < userInputSize; i++)
    {
        //store creditArray value at i in creditDigit each loop
        int creditDigit = creditArray[i];

        //modulus 2 and checks if i is an odd number, if it is multiply creditDigit by 2
        if(i % 2 ==1){
            creditDigit = creditDigit * 2;
            //if the new value of creditDigit is equal to or greater than 10, subtract creditDigit by 9
            if(creditDigit >=10)
                creditDigit = creditDigit - 9;
        }
        //sum is equal to previous sum plus new creditDigit value
        sum += creditDigit;
    }
    cout<<userInputString;

    //if sum is evenly divisible by 10, then the credit card is valid
    if(sum % 10 == 0)
        cout<<" is valid"<<endl;
    else
        cout<<" is not valid"<<endl;

}