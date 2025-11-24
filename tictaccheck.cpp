#include <iostream>
#include <string>
using namespace std;

/*int main(){
    string a = "Darrow";
    string b = "Mustang";
    string c = "Sevro";

    string& ticTacToeBoard[2][3] = {
        {a, b, c},
        {a, "random", "check"}
    };

    for (int i = 0; i < 3; i++)
    {
        cout<<ticTacToeBoard[i][0]<<ticTacToeBoard[i][1]<<ticTacToeBoard[i][2]<<endl;
    }
    
}
*/
/*
int main(){
    string a = "one";
    string b = "two";
    string c = "three";
    string d = "four";
    string e = "five";
    string f = "six";

    string vari[2][3] = {
        {"1", "3", "5"}, 
        {"5", "99"}
    };

    string* arr[2][3] = {
        {&a, &vari[0][1], &c },
        {&d, &e, &f}
    };
    cout<< *arr[0][0] <<endl;
    cout<< *arr[0][1];

    a = "differnt";
    cout<< *arr[0][0] <<endl;

}
*/

int main(){
string a = " ";
string b = " ";
string c = " ";
string d = " ";
string e = " ";
string f = " ";
string g = " ";
string h = " ";
string i = " ";

    const string boardLayout[6][3] = {
        { "|", " |"},
        {"__|","__","|__"}, 
        { " |",  " |" },
        {"__|","__","|__"}, 
        { " |", " |"},
        {"  |","  ","|  "}

    };

    string* ticTacToeBoard; [6][5] ={
                                    { &a, &boardLayout[0][0], &b, &boardLayout[0][1], &c},
                                    { &boardLayout[1][0], &boardLayout[1][1],&boardLayout[1][2],}, 
                                    { &d, &boardLayout[2][0], &e, &boardLayout[2][1], &f},
                                    { &boardLayout[3][0],&boardLayout[3][1],&boardLayout[3][2]}, 
                                    { &g, &boardLayout[4][0], &h, &boardLayout[4][1], &i},
                                    { &boardLayout[5][0], &boardLayout[5][1], &boardLayout[5][2]}
    };
    for (int i = 0; i < 6; i++)
    {
        cout<< *ticTacToeBoard[i][0]<< *ticTacToeBoard[i][1]<< *ticTacToeBoard[i][2]<<*ticTacToeBoard[i][3]<<*ticTacToeBoard[i][4]<<endl;
    }

}