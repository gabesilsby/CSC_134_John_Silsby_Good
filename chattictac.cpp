#include <iostream> 
#include <string>

using namespace std;
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

    string boardLayout[6][3] = {
        {" |", " |", " |"},
        {"__|","__","|__"}, 
        {" |",  " |", " |"},
        {"__|","__","|__"}, 
        {" |", " |", " |"},
        {"  |","  ","|"}
    };

    string* board[6][5] = {
        { &a, &boardLayout[0][0], &b, &boardLayout[0][1], &c },
        { &boardLayout[1][0], &boardLayout[1][1], &boardLayout[1][2]},
        { &d, &boardLayout[2][0], &e, &boardLayout[2][1], &f },
        { &boardLayout[3][0], &boardLayout[3][1], &boardLayout[3][2]},
        { &g, &boardLayout[4][0], &h, &boardLayout[4][1], &i },
        { &boardLayout[5][0], &boardLayout[5][1], &boardLayout[5][2]}
    };

    
    for(int r = 0; r < 6; r++){
        for(int c = 0; c < 5; c++){
            if(board[r][c]) cout << *board[r][c];
        }
        cout << endl;

    a = " 77";

    }
    for(int r = 0; r < 6; r++){
        for(int c = 0; c < 5; c++){
            if(board[r][c]) cout << *board[r][c];
        }
        cout << endl;
    }
    
}