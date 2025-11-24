#include <iostream>
#include <string>

using namespace std;

void print_board(
    string &a, string &b, string &c,
    string &d, string &e, string &f,
    string &g, string &h, string &i,
    string boardLayout[6][5]){
    string* ticTacToeBoard[6][5] = {
        { &a, &boardLayout[0][1], &b, &boardLayout[0][3], &c },
        { &boardLayout[1][0], &boardLayout[1][1], &boardLayout[1][2], &boardLayout[1][3], &boardLayout[1][4] },
        { &d, &boardLayout[2][1], &e, &boardLayout[2][3], &f },
        { &boardLayout[3][0], &boardLayout[3][1], &boardLayout[3][2], &boardLayout[3][3], &boardLayout[3][4] },
        { &g, &boardLayout[4][1], &h, &boardLayout[4][3], &i },
        { &boardLayout[5][0], &boardLayout[5][1], &boardLayout[5][2], &boardLayout[5][3], &boardLayout[5][4] }
    };
    // print board
    for(int row = 0; row < 6; row++){
        for(int col = 0; col < 5; col++){
            cout << *ticTacToeBoard[row][col];
        }
        cout << endl;
    }
}
int main()
{
    //assigning 9 string variables, this is where the X's and O's will go
    string a = " ";
    string b = " ";
    string c = " ";
    string d = " ";
    string e = " ";
    string f = " ";
    string g = " ";
    string h = " ";
    string i = " ";

    //this is my first 2d array. these values will not change
    string boardLayout[6][5] = {
        {" ",  " |", " ", " |", " "},
        {"__", "|", "__", "|", "__"},
        {" ",  " |", " ", " |", " "},
        {"__", "|", "__", "|", "__"},
        {" ",  " |", " ", " |", " "},
        {" ",  " |", " ", " |", " "}
    };

    //this is my second 2d array, this will be output onto the terminal, this will change
    //I chose to make a pointer array so I could change variables

    /*string* ticTacToeBoard[6][5] = {
        { &a, &boardLayout[0][1], &b, &boardLayout[0][3], &c },
        { &boardLayout[1][0], &boardLayout[1][1], &boardLayout[1][2], &boardLayout[1][3], &boardLayout[1][4] },
        { &d, &boardLayout[2][1], &e, &boardLayout[2][3], &f },
        { &boardLayout[3][0], &boardLayout[3][1], &boardLayout[3][2], &boardLayout[3][3], &boardLayout[3][4] },
        { &g, &boardLayout[4][1], &h, &boardLayout[4][3], &i },
        { &boardLayout[5][0], &boardLayout[5][1], &boardLayout[5][2], &boardLayout[5][3], &boardLayout[5][4] }
    };  
    */
    
    

    //this block prints the board onto the terminal

    /*for (int r = 0; r < 6; r++) {
        for (int c = 0; c < 5; c++) {
            cout << *ticTacToeBoard[r][c];
    }
        cout << endl;
    }
    */
    
    print_board(a, b, c, d, e, f, g, h, i, boardLayout);


    int whoseTurn = 1;
    string letterTurn;
    cout<<"Player X"<<endl;
    for (int iterator = 0; iterator <= 9; iterator++)
    {
        string playerPlacement;
        while(true){
            cout<<"enter the location for your move: ";
            cin>>playerPlacement;

            if(iterator == 8){
                break;
            }
            //checking to see if they entered valid data
            if(playerPlacement != "a" && playerPlacement != "b" && playerPlacement != "c" && playerPlacement
            != "d" && playerPlacement != "e" && playerPlacement != "f" && playerPlacement != "g" && playerPlacement
            != "h" && playerPlacement != "i")
            {
                cout<<"Invalid input, try again"<<endl;
            
            }
            else if((playerPlacement == "a" && a != " ") ||
                (playerPlacement == "b" && b != " ") ||
                (playerPlacement == "c" && c != " ") ||
                (playerPlacement == "d" && d != " ") ||
                (playerPlacement == "e" && e != " ") ||
                (playerPlacement == "f" && f != " ") ||
                (playerPlacement == "g" && g != " ") ||
                (playerPlacement == "h" && h != " ") ||
                (playerPlacement == "i" && i != " ")){
                    cout<<"spot taken, try again"<<endl;
                }
            else{
                break;
            }

        cin.clear();
        cin.ignore(100, '\n');

        }
        if(whoseTurn % 2 == 1){
            letterTurn = "X";
            whoseTurn++;
            if (playerPlacement == "a")
            {
                a = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);
            }
            if (playerPlacement == "b")
            {
                b = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            } 
            if (playerPlacement == "c")
            {
                c = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            } 
            if (playerPlacement == "d")
            {
                d = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);
               
            } 
            if (playerPlacement == "e")
            {
                e = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            } 
            if (playerPlacement == "f")
            {
                f = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            }
            if (playerPlacement == "g")
            {
                g = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            }
            if (playerPlacement == "h")
            {
                h = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            }
            if (playerPlacement == "i")
            {
                i = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            }
            cout<<"Player O:"<<endl;
        }
        else if(whoseTurn % 2 == 0){
            letterTurn = "O";
            whoseTurn++;
            if (playerPlacement == "a")
            {
                a = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);
            }
            if (playerPlacement == "b")
            {
                b = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            } 
            if (playerPlacement == "c")
            {
                c = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            } 
            if (playerPlacement == "d")
            {
                d = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);
               
            } 
            if (playerPlacement == "e")
            {
                e = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            } 
            if (playerPlacement == "f")
            {
                f = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            }
            if (playerPlacement == "g")
            {
                g = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            }
            if (playerPlacement == "h")
            {
                h = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            }
            if (playerPlacement == "i")
            {
                i = letterTurn;
                print_board(a, b, c, d, e, f, g, h, i, boardLayout);

            }
            cout<<"Player X:"<<endl;
        void print_board(string* ticTacToeBoard[6][5]);

        string mainTicTacToeBoard = print_board(a, b, c, d, e, f, g, h, i, boardLayout);
        string* ticTacToeBoard[6][5] = {
            { &a, &boardLayout[0][1], &b, &boardLayout[0][3], &c },
            { &boardLayout[1][0], &boardLayout[1][1], &boardLayout[1][2], &boardLayout[1][3], &boardLayout[1][4] },
            { &d, &boardLayout[2][1], &e, &boardLayout[2][3], &f },
            { &boardLayout[3][0], &boardLayout[3][1], &boardLayout[3][2], &boardLayout[3][3], &boardLayout[3][4] },
            { &g, &boardLayout[4][1], &h, &boardLayout[4][3], &i },
            { &boardLayout[5][0], &boardLayout[5][1], &boardLayout[5][2], &boardLayout[5][3], &boardLayout[5][4] }
        };

        for (int iterator = 0; iterator < 3; iterator++)
        {
            if(mainTicTacToeBoard[iterator][0] != " " && mainTicTacToeBoard[iterator][1] != " " && mainTicTacToeBoard[iterator][2] != " " )
                string winner = letterTurn;
                break;
        }
        
        }
    }
    




    





}