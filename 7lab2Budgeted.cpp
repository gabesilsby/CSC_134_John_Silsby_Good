//@author: Gabe Silsby
//@date: 10/04/25
//@purpose: 
/*  
2. Write a program that asks the user 
to enter the amount that they have budgeted 
for a month. A loop should then prompt the
 user to enter each of their expenses for
  the month and keep a running total. When 
  the loop finishes, the program should 
  display the amount that the user is over 
  or under budget.
*/

#include <iostream>

using namespace std;

int main()
{
    int budget;
    string expense;
    float total = 0;
    int numExpense;

    cout<<"Your budget is: $";
    //user defines budget amount
    cin>>budget;

    //defines run as 0; i wrote the statment to always be true to give the user their best usability; adds 1 to variable after each loop
    //i didn't ask for the number of expenses the user might have in cases of 50+ expenses (no one wants to count that)
    for (int run = 0; true; run++)
    {
        //the user will be asked to either type the value of an expense or learn their budget variance 
        cout<<"Enter your value or type \"done\": ";
        //user enters an expense value each loop
        cin>>expense;

        //the original expense variable is defined as a string data type, so if the user types "done" the program knows 
        //to end/break the loop
        //I wasn't sure how else to avoid a "break"
        if(expense == "done")
        {
            //the user will be told their total expenses when they finish the program
            cout<<"Your total of expenses were: $"<<total<<endl;
            break;
        }

        //looked up how to change data types for this
        //numExpense is equal to the float value of the users expense input
        float numExpense = stof(expense);
        //the users total expenses is equal to their old total plus the string(now float) number they had input 
        total = total + numExpense;
        cout<<"Current total expenses is: $"<<total<<endl;
    }

    //if their expenses are over budget they are told by how much
    if(total > budget)
        {float over = total - budget;
        cout<<"You were over your budget by: $"<<over<<endl;
        }
    //if their expenses are on budget they are complimented
    if(total == budget)
        {
        cout<<"You budgeted well"<<endl;
        }
    //if their expenses were below budget they are told by how much
    if(total < budget)
        {
            float under = budget - total;
            cout<<"You were under by: $"<<under<<endl;
        }
    return 0;

    
}