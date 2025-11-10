//@author: Gabe Silsby
//@date: 11/05/25
//@purpose:
/*
 Apply what you just learned concerning range based for-loops to write a C++ program that does the following:

    - Use the algebraic equation for a straight line y = mx + b to draw 
    

    a two quadrant graph for positive x and y values. 
    

    Your graph should be drawn with the y-axis having
     at least 15 values and your x-axis with 15 values. Let m = 2 and b = 3 and your x 
     values should be from 0 -4. Your program should plot the graph accordingly.

     - You should use at least one range based for-loop in your program and the program 
     should plot the straight line on the graph using an "X" to mark the point. An example of the graph is below:
     */
#include <iostream>
using namespace std;

int main()
{
    //initialize variables for line equation
    int m = 2;
    int b = 3;
    //implicitly size array
    int point[] = {1, 2, 3, 4, 5, 6, 7};


    //using nested (line 42) for loops to draw grid
    //initialize y as 15; if y is greater than or equal to 0, the statement is true and the loop will run; subtract 1 int from y value each loop
    for (int y = 15; y >= 0; y--)
    { 
        //wrote this in to include that the line passes through y = 3.
        //if y is equal to 3, then "3X" will print
        if(y==3)
            cout<<" 3X";
        else{
            //for single-digit numbers I added a space to make graph neater
            if(y <= 9)
                cout<<" ";
            //prints y values on left
            cout<< y << "|";
        }
        //range-based for loop to print a point 
        //for every value stored in point array it will plot a point on the graph by using lineY = mx+b
        //if the lineY (point on line) is equal to the y value at that level it will print an "X"

        //The range-based for loop is a loop that iterates once for each element in 
        //an array. Each time the loop iterates, it copies an element from the array
        //to a variable. 
        for(int x : point){
            int lineY = m * x + b;   
            if (y == lineY)
                cout << "X";        
            //for every point there is a y value that is not equal to lineY it will print a blank space
            else
                cout << " ";
        }
        cout<<endl;
    }
    cout<<"  |";

    //initialize x as 0; if x is less than or equal to 4, the statement is true and the loop will run; add 1 int to x each loop
    for (int x = 0; x <= 4; x++) 
    {
        cout<<x<<"|";
    }
    cout<<endl;
    
    
}