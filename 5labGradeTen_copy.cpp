//@author:
//@date:
//@purpose:

/*
3. Design and write a program that uses a while-loop to prompt a user for 10 
grades(must be floating point values) and calculate the average and print the result to the 
console after all 10 grades have been entered
*/

#include <iostream>

using namespace std;

int main()
{
    float input = 9996;
    float grade1 = 0, grade2= 0, gr3= 0, gr4= 0, gr5= 0, gr6= 0, gr7= 0, gr8= 0, gr9= 0, gr10= 0;
    int num1 = 0;
    while(num1 < 2)
    {
        cin>>input;

        if(input != 9996) 
            {grade1 = input;
            cout<<"first is "<<grade1<<endl;}
        if(input != grade1)
            {grade2 = input;
            cout<<"second is "<<grade2<<endl;}

        ++num1;
    }
    float average = (grade1+grade2)/2.0;
    cout<<average<<endl;

}














/*
        cin>>grainde1>>gr2>>gr3>>gr4>>gr5>>gr6>>gr7>>gr8>>gr9>>gr10;
        ++num1;
    }
    float average = (grade1+gr2+gr3+gr4+gr5+gr6+gr7+gr8+gr9+gr10)/10.0;
    cout<<average;

    return 0;
}

*/