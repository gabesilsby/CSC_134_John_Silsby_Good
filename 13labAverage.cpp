//@author: Gabe Silsby
//@date: 11/21/25
//@purpose: 
/*3. 
Write a C++ program named average.cpp that averages three integer values. 
The program should call a function named averageValues() that takes the
 three integer values and calculates their average. The function should 
 return the average values and print the result to console. Do not print 
 from the function---you should print the values from the main() function
*/

#include <iostream>

using namespace std;

float averageValues(int intOne, int intTwo, int intThree);

int main(){
    cout<<"Enter three integers for an average to be returned."<<endl;
    int intOne, intTwo, intThree;
    cin>>intOne>>intTwo>>intThree;
    float mainAverage = averageValues(intOne, intTwo, intThree);
    cout<<mainAverage;
    
}

float averageValues(int intOne, int intTwo, int intThree){
    int aVSum = intOne + intTwo + intThree;
    float aVAverage = aVSum/3.0;
    
    return aVAverage;
}