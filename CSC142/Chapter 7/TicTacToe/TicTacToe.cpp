#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

//Prototypes
void game();
void tttdisplay();
void player1();
void player2();
void referee();

//Globals
//COLS & ROWS Can be changed to any integer, but they need to be the same number, odd, and 3 or greater.
const int COLS = 5;
const int ROWS = 5;
int TURNS = COLS * ROWS;
int spot[ROWS][COLS];
int winner;


//Opener to the program, shows a hello, and populates the game board. calls to game()
int main()
{
    int count;
    bool sizecheck;
    count = 1;
    cout << "Welcome to Abe's Tic-Tac Toe Game!" << endl
         << "Press the enter key to continue..." << endl;
         
    winner = 0;
    
    for(int x = 0; x < ROWS; x++)
    {
        for(int y = 0; y < COLS; y++)
        {
            spot[x][y] = count;
            count++;
        }
    }
    
    cin.get();
    game();
    
    
    
    return 0;
}

//calls on the game board display, and runs back and forth through player turns. does referee calls to check for winner
void game()
{
    
    int count;
    count = 0;
    
    while(TURNS > 0)
    {
        
        referee();
        
        tttdisplay();
        
        if(winner == 1)
        {
            cout << endl << endl << "Congratulations X, you won!";
            cin.get();
            TURNS = 0;
            break;
        }
        else if(winner == 2)
        {
            cout << endl << endl << "Congratulations O, you won!";
            cin.get();
            TURNS = 0;
            break;
        }
        else if(TURNS == 0)
        {
            cout << endl << endl << "Sorry, it's a Cat's Game.";
            cin.get();
            break;
        }
        
        if(count % 2 == 0)
            player1();
        if(count % 2 != 0)
            player2();
        
        count++;
        
        
    }
    
    cin.get();
    
}

//function to read the data and display the game board
void tttdisplay()
{
    int q;
    q = 0;
    
    system("cls");
    
    cout << "Game Board:";
         
    for(int x = 0; x < ROWS; x++)
    {
        
        cout << endl << endl;
        
        for(int y = 0; y < COLS; y++)
        {
            
            if(spot[x][y] == -1)
            {
                cout << setw(4) << "X" << " ";
            }
            else if(spot[x][y] == -2)
            {
                cout << setw(4) << "O" << " ";
            }
            else
            {
                cout << setw(4) << spot[x][y] << " ";
            }

            
            q++;
            
        }
        
    }

}

//Player 1's turn (X)
void player1()
{
    int choice;
    bool choose;
    
    choose = true;
    
    while(choose)
    {
        cout << endl << endl << "Player X, Choose your square:" << endl;
        cin >> choice;
        
        for(int x = 0; x < ROWS; x++)
        {
            for(int y = 0; y < COLS; y++)
            {
                if(choice == spot[x][y])
                {
                    if(spot[x][y] == -1)
                    {
                        continue;
                    }
                    else if(spot[x][y] == -2)
                    {
                        continue;
                    }
                    else
                    {
                        spot[x][y] = -1;
                        choose = false;
                    }
                }
            }
        }
    }
}

//Player 2's turn (O)
void player2()
{
    int choice;
    bool choose;
    
    choose = true;
    
    while(choose)
    {
        cout << endl << endl << "Player O, Choose your square:" << endl;
        cin >> choice;
        
        for(int x = 0; x < ROWS; x++)
        {
            for(int y = 0; y < COLS; y++)
            {
                if(choice == spot[x][y])
                {
                    if(spot[x][y] == -1)
                    {
                        continue;
                    }
                    else if(spot[x][y] == -2)
                    {
                        continue;
                    }
                    else
                    {
                        spot[x][y] = -2;
                        choose = false;
                    }
                }
            }
        }
    }
}

//Referee function to read the board data an check for a winner.
void referee()
{
    int count;
    int refud1, refud2;
    int reflr1, reflr2;
    int refdiag1, refdiag2, oppdiag;
        
    
    for(int y = 0; y < COLS; y++)
    {
        count = 0;
        refud1 = 0;
        refud2 = 0;
        
        while(count < ROWS)
        {
            if(spot[count][y] == -1)
            {
                refud1 += 1;
            }
            else if(spot[count][y] == -2)
            {
                refud2 += 1;
            }
            
            count++;
        }
        
        if(refud1 == ROWS)
        {
            winner = 1;
        }
        else if(refud2 == ROWS)
        {
            winner = 2;
        }
    }
    
    for(int x = 0; x < ROWS; x++)
    {
        count = 0;
        reflr1 = 0;
        reflr2 = 0;
        
        while(count < COLS)
        {
            if(spot[x][count] == -1)
            {
                reflr1 += 1;
            }
            else if(spot[x][count] == -2)
            {
                reflr2 += 1;
            }
            
            count++;
        }
        
        if(reflr1 == COLS)
        {
            winner = 1;
        }
        else if(reflr2 == COLS)
        {
            winner = 2;
        }
    }
    
    refdiag1 = 0;
    refdiag2 = 0;
    
    for(int z = 0; z < ROWS; z++)
    {
        if(spot[z][z] == -1)
        {
            refdiag1 += 1;
        }
        else if(spot[z][z] == -2)
        {
            refdiag2 += 1;
        }
        
        if(refdiag1 == ROWS)
        {
            winner = 1;
        }
        else if(reflr2 == ROWS)
        {
            winner = 2;
        }
    }
    
    refdiag1 = 0;
    refdiag2 = 0;
    oppdiag = ROWS - 1;
    
    for(int z = 0; z < ROWS; z++)
    {
        if(spot[z][oppdiag] == -1)
        {
            refdiag1 += 1;
        }
        else if(spot[z][oppdiag] == -2)
        {
            refdiag2 += 1;
        }
        
        if(refdiag1 == ROWS)
        {
            winner = 1;
        }
        else if(reflr2 == ROWS)
        {
            winner = 2;
        }
        oppdiag--;
    }
    
}
