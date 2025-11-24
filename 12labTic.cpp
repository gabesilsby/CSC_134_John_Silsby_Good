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

//print board function to keep code a little more organized and clear
void print_board(string &a, string &b, string &c,
                 string &d, string &e, string &f,
                 string &g, string &h, string &i,
                 string boardLayout[6][5]) {
    //2D array of pointer strings so that I can change values of the array by changing the variables taht the array used
    //I couldn't use a typical array because it only stores the values of variables when assigned (variables would not update in array)
    string* ticTacToeBoard[6][5] = {
        { &a, &boardLayout[0][1], &b, &boardLayout[0][3], &c },
        { &boardLayout[1][0], &boardLayout[1][1], &boardLayout[1][2], &boardLayout[1][3], &boardLayout[1][4] },
        { &d, &boardLayout[2][1], &e, &boardLayout[2][3], &f },
        { &boardLayout[3][0], &boardLayout[3][1], &boardLayout[3][2], &boardLayout[3][3], &boardLayout[3][4] },
        { &g, &boardLayout[4][1], &h, &boardLayout[4][3], &i },
        { &boardLayout[5][0], &boardLayout[5][1], &boardLayout[5][2], &boardLayout[5][3], &boardLayout[5][4] }
    };

    //for loop to print 2d array
    //initialize row as 0; if row is less than 6, the statement is true; add 1 value to row
    for (int row = 0; row < 6; row++) {
        //initialize col as 9; if column is less than 5, the statement is true; add 1 value to coloumn
        for (int column = 0; column < 5; column++) {
            cout << *ticTacToeBoard[row][column];
        }
        cout << endl;
    }
}

//win condition function using true or false values
//watched youtube videos to make this section
bool check_win(string a, string b, string c,
               string d, string e, string f,
               string g, string h, string i, string player) {
    //checks horizontal rows
    if ((a == player && b == player && c == player) ||
        (d == player && e == player && f == player) ||
        (g == player && h == player && i == player))
        return true;
    //chekcs vertical columns 
    if ((a == player && d == player && g == player) ||
        (b == player && e == player && h == player) ||
        (c == player && f == player && i == player))
        return true;
    //checks the two diagonals 
    if ((a == player && e == player && i == player) ||
        (c == player && e == player && g == player))
        return true;

    return false;
}

int main() {
    //initialize the values of where "X" and "O" will go with space placeholders
    string a=" ", b=" ", c=" ";
    string d=" ", e=" ", f=" ";
    string g=" ", h=" ", i=" ";

    //boardLayout array remains constant
    //because boardLayout is used in pointer array, I couldn't make this array const
    string boardLayout[6][5] = {
        {" ",  " |", " ", " |", " "},
        {"__", "|", "__", "|", "__"},
        {" ",  " |", " ", " |", " "},
        {"__", "|", "__", "|", "__"},
        {" ",  " |", " ", " |", " "},
        {" ",  " |", " ", " |", " "}
    };

    //calls the print_board function with the updated (none yet) arguments for the a - i variables. 
    print_board(a, b, c, d, e, f, g, h, i, boardLayout);

    //initialize/declare variables for player move condition
    int turn = 1;
    string player;
    string choice;
    int moves = 0;

    //maximum number of moves allowed in a tictactoe game is 9, if the counter reaches 8, then the loop will break because and if 
    // no win condition is met, the game results in a tie
    while (moves < 9) {
        //modulus functin to determine whose turn it is
        //X's turn is odd numbers, O's turn is even numbersss
        if (turn % 2 == 1) {
            player = "X";
        } else {
            player = "O";
        }        cout << "Player " << player << ", enter your move (a-i): ";
        //player choice is input after current player value is assigned
        cin >> choice;

        //weeds out invalid inputs
        if (choice != "a" && choice != "b" && choice != "c" &&
            choice != "d" && choice != "e" && choice != "f" &&
            choice != "g" && choice != "h" && choice != "i") {
            cout << "Invalid input. Try again." << endl;
            //ask for input again
            continue;
        }

        //if spot isn't taken,its original value will still be " " 
        if ((choice == "a" && a != " ") ||
            (choice == "b" && b != " ") ||
            (choice == "c" && c != " ") ||
            (choice == "d" && d != " ") ||
            (choice == "e" && e != " ") ||
            (choice == "f" && f != " ") ||
            (choice == "g" && g != " ") ||
            (choice == "h" && h != " ") ||
            (choice == "i" && i != " ")) {
            cout << "Spot taken. Try again." << endl;
            //ask for input again
            continue;
        }

        //enters values for a - i if user enters valid inputs
        //player variable is letter on board
        if (choice == "a") a = player;
        if (choice == "b") b = player;
        if (choice == "c") c = player;
        if (choice == "d") d = player;
        if (choice == "e") e = player;
        if (choice == "f") f = player;
        if (choice == "g") g = player;
        if (choice == "h") h = player;
        if (choice == "i") i = player;

        //valid inputs allow moves and turn variable to increase 
        //if put earlier before valid move statements, then ties could occur from invalid inputs
        moves++;
        turn++;

        //calls print_board function to update board positioning
        print_board(a, b, c, d, e, f, g, h, i, boardLayout);
        
        //calls check_win for win conditions to see if the last move satisfied a win condition
        if (check_win(a, b, c, d, e, f, g, h, i, player)) {
            cout << "Player " << player << " wins!" << endl;
            return 0;
        }
    }

    //if 9 valid inputs are entered, then the game is a tie
    cout << "It's a tie!" << endl;
    return 0;
}
