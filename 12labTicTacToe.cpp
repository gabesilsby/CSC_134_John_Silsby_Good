//@author: Gabe Silsby
//@date: 11/13/25
//@purpose:
/*
Take what you have learned on 2-D arrays and build a tic-tac-toe game.
 The game should follow the basic tic-tac-toe rules of win-lose-draw. 
 Your program should take these into account during game-play.

Your program should draw the tic-tac-toe board and prompt each player 
for their turn. After the player chooses their position, you should 
draw the board on the console showing where each X and each O has been placed.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int r; 
    int ca;
    char user_input_game;
    cout<<"Would you like to play a game?? (Y/N)";
    cin>>user_input_game;
    if (user_input_game != 'Y' && user_input_game != 'y') {
        cout<<"try again"<<endl;
    }
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
        {" |", " |"},
        {"__|","__","|__"}, 
        { " |",  " |" },
        {"__|","__","|__"}, 
        { " |", " |"},
        {"  |","  ","|  "}

    };

    string *ticTacToeBoard [6][5] ={
        { &a, &boardLayout[0][0], &b, &boardLayout[0][1], &c},
        { &boardLayout[1][0], &boardLayout[1][1],&boardLayout[1][2],}, 
        { &d, &boardLayout[2][0], &e, &boardLayout[2][1], &f},
        { &boardLayout[3][0],&boardLayout[3][1],&boardLayout[3][2]}, 
        { &g, &boardLayout[4][0], &h, &boardLayout[4][1], &i},
        { &boardLayout[5][0], &boardLayout[5][1], &boardLayout[5][2]}
    };

    int loop = 0;
    int whoseTurn = 1;
    
    while(loop <=9)
    {
        //printing board
        for(int r = 0; r < 6; r++){
            for(int c = 0; c < 5; c++){
                if(ticTacToeBoard[r][c]) 
                    cout << *ticTacToeBoard[r][c];
            }
            cout << endl;
        }


        string turnIf;
        string letterTurn;
        loop++;

        if (whoseTurn % 2 == 1)
        {
            cout<<"X turn ";
            letterTurn = 'X';
            whoseTurn++;
            while(true){
                cin>>turnIf;
                if(turnIf != "a" && turnIf != "b" && turnIf != "c" && turnIf != "d" && turnIf != "e" && turnIf != "f" && turnIf != "g" && turnIf != "h" && turnIf != "i"){
                    cout<<"Invalid input, try again";
                }
                string checkTile = turnIf;
                int r = -1;
                int c = -1;

                ticTacToeBoard[r][c] = &checkTile;
                else if(ticTacToeBoard[r][c] != " "){
                    cout<<"taken";}
                else{
                    break;
                }
                r = -1;
                ca = -1; 
                cin.clear();
                cin.ignore();

            }

            turnIf = ticTacToeBoard[r][ca];
            if (turnIf == " ")
            {
                if (turnIf == "a")
                {
                    a = letterTurn;
                }
                if (turnIf == "b")
                {
                    b = letterTurn;
                } if (turnIf == "c")
                {
                    c = letterTurn;
                } if (turnIf == "d")
                {
                    d = letterTurn;
                } if (turnIf == "e")
                {
                    e = letterTurn;
                } if (turnIf == "f")
                {
                    f = letterTurn;
                }
                if (turnIf == "g")
                {
                    g = letterTurn;
                }
                if (turnIf == "h")
                {
                    h = letterTurn;
                }
                if (turnIf == "i")
                {
                    i = letterTurn;
                }
            }

            cout<<endl<<endl;
            }
        else if(whoseTurn % 2 == 0){
            cout<<"O turn";
            letterTurn = 'O';
            whoseTurn++;
            cin>>turnIf;
            if (turnIf == "a")
            {
                a = letterTurn;
            }
             if (turnIf == "b")
            {
                b = letterTurn;
            } if (turnIf == "c")
            {
                c = letterTurn;
            } if (turnIf == "d")
            {
                d = letterTurn;
            } if (turnIf == "e")
            {
                e = letterTurn;
            } if (turnIf == "f")
            {
                f = letterTurn;
            }
             if (turnIf == "g")
            {
                g = letterTurn;
            }
             if (turnIf == "h")
            {
                h = letterTurn;
            }
             if (turnIf == "i")
            {
                i = letterTurn;
            }
            cout<<endl<<endl;
        }
    }
    }
      
