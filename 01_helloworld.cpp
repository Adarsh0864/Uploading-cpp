#include <iostream>
using namespace std;

class Multiplayer
{
    char currentPlayer;
    char board[3][3];

public:

    Multiplayer()
    {
        currentPlayer = 'X';
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = ' ';
            }
        }
    }

    void dispBoard()
    {
        cout << "\x1B[2J\x1B[H" << endl;
        cout << "Current Player is " << currentPlayer << endl << endl;

        cout << "----+---+----";
        for (int i = 0; i < 3; i++)
        {
            cout << endl << "| " << board[i][0] << " | " 
            << board[i][1] << " | " << board[i][2] << " |" << endl;
            cout << "----+---+----";
        }
    }

    void playerSwap(int a)
    {
        if (a % 2 == 0)
        {
            currentPlayer = 'O';
        }
        else
        {
            currentPlayer = 'X';
        }
    }

    int movement(int m1, int m2)
    {
        if (board[m1][m2] == ' ')
        {
            board[m1][m2] = currentPlayer;
        }
        else
        {
            return 1;
        }
        return 0;
    }

    bool winChecker()
    {
        if ((board[0][0] != ' ' && board[0][0] == board[0][1] && board[0][0] == board[0][2]) ||
            (board[1][0] != ' ' && board[1][0] == board[1][1] && board[1][0] == board[1][2]) ||
            (board[2][0] != ' ' && board[2][0] == board[2][1] && board[2][0] == board[2][2]) ||
            (board[0][0] != ' ' && board[0][0] == board[1][0] && board[0][0] == board[2][0]) ||
            (board[0][1] != ' ' && board[0][1] == board[1][1] && board[0][1] == board[2][1]) ||
            (board[0][2] != ' ' && board[0][2] == board[1][2] && board[0][2] == board[2][2]) ||
            (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
            (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]))
            return true;

        return false;
    }

    void winner()
    {
        cout << "\n\nwinner is " << currentPlayer;
    }    
};

void mPlayer()
{
    int p1, p2, count = 1, flag = 0;
    
    bool gameOver = false;
    Multiplayer m1;

    while (true)
    {
        m1.dispBoard();
    

        if (flag == 0)
        {
            cout << "\n\nEnter Your Move " << endl;
        }
        else
        {
            cout << "\n\nInvalid move\nEnter Your Move again" << endl;
        }

        cin >> p1 >> p2;
        flag = m1.movement(p1, p2);
        gameOver = m1.winChecker();

        if (flag != 1)
        {
            count++;
        }

        if (gameOver || count > 9)
            break;

        m1.playerSwap(count);
    }
    if (gameOver && count <= 9)
    {
        m1.dispBoard();
        m1.winner();
    }
    else
    {
        cout << "\n\nMatch Draw ";
    }
}

int main()
{
    char op;
    Multiplayer m1;

    cout << "\x1B[2J\x1B[H";
    cout << "\t\t\t TICTACTOE Game \n\n" << endl;
    cout << "\t\t\t Choose" << endl;
    cout << "\t\t\t 1. Single Player" << endl;
    cout << "\t\t\t 2. Multi Player" << endl;

    cin >> op;

    switch (op)
    {
    case '1':
        break;

    case '2':
        mPlayer();
        break;
    }

    return 0;
}