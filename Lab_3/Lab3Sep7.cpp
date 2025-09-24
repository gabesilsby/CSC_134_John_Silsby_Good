//@author: Gabe Silsby
//@date: 09/06/25
//@purpose: calculate new average high temperature values of cities

/*
1. Design and write a program that accomplishes the following: 
 The average July high temperature is 85 degrees Fahrenheit in New York City, 88 degrees Fahrenheit in Denver, 
 and 106 degrees Fahrenheit in Phoenix. Write a program that calculates and reports what the new average July high 
 temperature would be for each of these cities if temperatures rise by 2 percent.
*/

 #include <iostream>

 using namespace std;

 int main()
 {  
    double newyorkcity = 85.0;
    double denver = 88.0;
    double pHoenix = 106.0;

    double percent_change_input;  //setting value for percent_change so i can use cin function later

    cout<<"The original temperatures are: "<< endl;
    string deg = " degrees "; //setting random variable to make code pretty
    cout<<newyorkcity << deg << endl << denver << deg << endl << pHoenix<< deg <<endl; //prints original values of city temps

    cout << "What is the percent raise of average high temp?";
    cin >> percent_change_input; //asks for user input at terminal for what percent raise (can be 2% or 550505%)

    double percent_change = (1+(percent_change_input/100)); //calculates the value for what the average high temperature is 

    cout << "The new average high temperature values are" << endl;    
    //these next 3 lines prints the new temperature values
    cout<<newyorkcity*percent_change<< deg <<endl;
    cout<<denver*percent_change<<deg<<endl;
    cout<<pHoenix*percent_change<<deg<<endl;

    return 0;
 }
