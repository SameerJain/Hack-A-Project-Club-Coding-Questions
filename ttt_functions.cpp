using namespace std;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char reset_board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

int input;

char player_turn = 'X';

int row;
int column;

bool gameOver = false;
bool draw = false;

int p1_wins = 0;
int p2_wins = 0;
bool best_Of_5 = false;

void intro()
{

    cout << "Welcome to the TicTacToe Game!\n";
    cout << "Enter a number from 1-9 to use a spot in that space.\n";
}

void draw_board()
{
    cout << "\n";
    cout << "     |   | \n";
    cout << "   " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "_____|___|_____ \n";
    cout << "     |   | \n";
    cout << "   " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "_____|___|_____ \n";
    cout << "     |   | \n";
    cout << "   " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "     |   | \n";
    cout << "\n";
}

int wincheck()
{

    for (int i = 0; i < 3; i++)
    {

        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] || board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            gameOver = true;
            return 1;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        gameOver = true;
        return 1;
    }

    if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
    {
        draw = true;
        gameOver = true;
        return -1;
    }

    else
    {
        return 0;
    };
}

void game(int input)
{

    
    switch (input)
    {

    case 1:
        row = 0;
        column = 0;
        break;

    case 2:
        row = 0;
        column = 1;


        break;

    case 3:
        row = 0;
        column = 2;
        break;

    case 4:
        row = 1;
        column = 0;
        break;

    case 5:
        row = 1;
        column = 1;
        break;

    case 6:
        row = 1;
        column = 2;
        break;

    case 7:
        row = 2;
        column = 0;
        break;

    case 8:
        row = 2;
        column = 1;
        break;

    case 9:
        row = 2;
        column = 2;
        break;

    default:

        cout << "Invalid\n";
    }

    if (player_turn == 'X')
    {

        if (board[row][column] != 'X' && board[row][column] != 'O')
        {
            board[row][column] = player_turn;
        }

        player_turn = 'O';
    }

    else if (player_turn == 'O')
    {

        if (board[row][column] != 'X' && board[row][column] != 'O')
        {
            board[row][column] = player_turn;
        }

        player_turn = 'X';
    }
}

void turn()
{




    if (player_turn == 'X')
    {
        cout << "Player 1, Enter a move: ";
    }

    else if (player_turn == 'O')
    {
        cout << "Player 2, Enter a move: ";
    }

    cin >> input;

    }


void results()
{

    if (player_turn == 'O' && draw == false)
    {
        cout << "Player 1 wins!";
        p1_wins++;
    }

    else if (player_turn == 'X' && draw == false)
    {
        cout << "Player 2 wins!";
        p2_wins++;
    }

    else if (draw == true)
    {
        cout << "Draw Game!";
    }

    cout << "\nPlayer 1 win total:" << p1_wins << "   Player 2 win total:" << p2_wins << "\n\n\n\n\n\n\n";

}

void reset_game()
{
    // reset board

    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = reset_board[i][j];;

                }
    }

    gameOver = false;
    draw = false;

    if (p1_wins == 3 || p2_wins == 3) {

        best_Of_5= true;

    }


}

void finale() {

    if (p1_wins == 3) {
        cout << "Player 1 has won the Best of 5!\n";
    }

    else {
        cout << "Player 2 has won the Best of 5\n";
    }

}