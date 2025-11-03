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
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string userInputString;
    int sum = 0;
    cout << "Enter credit card number: ";
    cin >> userInputString;

    int userInputSize = userInputString.size();

    int creditArray[20]; // large enough for any normal card
    for (int i = 0; i < userInputSize; i++) {
        creditArray[i] = userInputString[i] - '0'; // convert each char to int
    }

    // --- Step 4: Reverse the array for Luhn processing ---
    reverse(creditArray, creditArray + userInputSize);

    //luhn algorithm
    for (int i = 0; i < userInputSize; i++)
    {
        int creditDigit = creditArray[i];

        if(i % 2 ==1){
            creditDigit = creditDigit * 2;
            if(creditDigit >=10)
                creditDigit = creditDigit - 9;
        }
        sum += creditDigit;
    }

    cout<<sum;

    if(sum % 10 == 0)
        cout<<"valid";
    else
        cout<<"not valid";

}