#include <iostream>

using namespace std;

void draw (char *ttt);
void playTicTacToe(char *ttt);
bool gameComplete (char *ttt);
char tic_tac_toe[9] = {'1','2','3','4','5','6','7','8','9'};
char * ttt = tic_tac_toe;
int boardCount = 1;
int main() {
    
    // define an array of 9 elements to hold the characters
    // in your tic-tac-toe square; assume a default character
    // like '-' or something
    cout << "Welcome to Darrell's Tic-Tac_Toe Program" << endl;
    cout << "Starting game . . ." << endl;
    draw(ttt);
    
    playTicTacToe(ttt);
    
    return 0;
}

void playTicTacToe (char *ttt) {
    // this function contains  the game logic
    // assume a move by player A, followed by player B
    // after each move, you must check if the respective player
    // has won, in which case the game is complete; use a separate
    // function to accomplish this.
    
    // players will enter the position where they want to enter in
    // the tic-tac-toe square. Assume the numbering from 1 to 9
    // in row-major order
    
    // use cin and cout for input and output
    int playerMove = -100;
    int const playerA = 0;
    int const playerB = 1;
    bool gameOver = false;
    int turn = 0;
    while(gameOver == false){
        if(turn % 2 == playerA){
            cout << "Player A enter a move: " << endl;
            cin >> playerMove;
            
            ttt = &tic_tac_toe[playerMove-1]; *ttt = 'A';
        }
        else{
            cout << "Player B enter a move: " << endl;
            cin >> playerMove;
            
            ttt = &tic_tac_toe[playerMove-1]; *ttt = 'B';
        }
        ++turn;
        cout<<"TURN:"<<turn<<endl;
        //Update game board
        draw(ttt);
        //Check game status
        gameOver = gameComplete(ttt);
    }
}

// This function draws the tic-tac-toe square after each move
void draw(char *ttt) {
    for (int k = 0; k < 3; k++) {
        cout << "|" << tic_tac_toe[k] << "|" ;
    }
    cout << endl;
    for (int k = 3; k < 6; k++) {
        cout << "|" << tic_tac_toe[k] << "|" ;
    }
    cout << endl;
    for (int k = 6; k < 9; k++) {
        cout << "|" << tic_tac_toe[k] << "|" ;
    }
    cout << endl;
    
}


// This function determines if the game has ended - either a row, column or
// a diagonal should be filled with the same character for it to be complete.

bool gameComplete(char *pTicTacToe,char tic_tac_toe [], int count) {
    bool endGame = false;
    
    
    //Case for horizontal win
    if(tic_tac_toe[0] == 'A' && tic_tac_toe[1] == 'A' && tic_tac_toe[2] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[0] == 'B' && tic_tac_toe[1] == 'B' && tic_tac_toe[2] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    
    else if(tic_tac_toe[3] == 'A' && tic_tac_toe[4] == 'A' && tic_tac_toe[5] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[3] == 'B' && tic_tac_toe[4] == 'B' && tic_tac_toe[5] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    
    else if(tic_tac_toe[6] == 'A' && tic_tac_toe[7] == 'A' && tic_tac_toe[8] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[6] == 'B' && tic_tac_toe[7] == 'B' && tic_tac_toe[8] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    //Case for diagonal win
    else if(tic_tac_toe[0] == 'A' && tic_tac_toe[4] == 'A' && tic_tac_toe[8] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[0] == 'B' && tic_tac_toe[4] == 'B' && tic_tac_toe[8] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    
    else if(tic_tac_toe[2] == 'A' && tic_tac_toe[4] == 'A' && tic_tac_toe[6] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[2] == 'B' && tic_tac_toe[4] == 'B' && tic_tac_toe[6] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    
    else if(tic_tac_toe[2] == 'A' && tic_tac_toe[4] == 'A' && tic_tac_toe[6] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[2] == 'B' && tic_tac_toe[4] == 'B' && tic_tac_toe[6] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    
    //Case for vertical win
    else if(tic_tac_toe[0] == 'A' && tic_tac_toe[3] == 'A' && tic_tac_toe[6] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[0] == 'B' && tic_tac_toe[3] == 'B' && tic_tac_toe[6] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[1] == 'A' && tic_tac_toe[4] == 'A' && tic_tac_toe[7] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[1] == 'B' && tic_tac_toe[4] == 'B' && tic_tac_toe[7] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[2] == 'A' && tic_tac_toe[5] == 'A' && tic_tac_toe[8] == 'A'){
        cout << "Player A wins!!!" << endl;
        endGame = true;
    }
    else if(tic_tac_toe[2] == 'B' && tic_tac_toe[5] == 'B' && tic_tac_toe[8] == 'B'){
        cout << "Player B wins!!!" << endl;
        endGame = true;
    }
    else if(count++ == 9){
        cout << "TIE GAME!!!" << endl;
        endGame = true;
    }
    
    return endGame;
}
