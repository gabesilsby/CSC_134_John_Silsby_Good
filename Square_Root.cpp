//@author:
//@date:
//@purpose:

//import iostream library
#include <iostream>

//importing math library
#include <cmath>

//making namespace
using namespace std;

//defining function main()
//defines variables and mathematical function
int main()
    {
        double base = 63;
        double power = 0.5;
        double answer = pow(base, power);

        std::cout << answer << std::endl;

        return 0;

    }