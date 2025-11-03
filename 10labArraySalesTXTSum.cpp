//@author: Gabe Silsby
//@date: 10/28/25
//@purpose: 

/*
3. Using the attached sales.txt file, use what you have
learned with arrays and file processing to read each sale 
line-by-line and add each sale to an array. After all 
sales have been added to your array, you should loop
over the array and sum the sales and print the total to 
the console
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    float numbers[5];
    inputFile.open("sales.txt");
    int count = 0;
    int sum = 0;
    
    while(inputFile >> numbers[count]){
        count++;
        
    }
    /*for (int i = 0; i < 5; i++)
    {
        inputFile >> numbers[i];
    }
    */
    for (int i = 0; i < count; i++)
    {
        cout<<numbers[i];
        cout<<endl;
        sum += numbers[i];
    }

    inputFile.close();

    cout<<"Total: "<<sum<<endl;
}