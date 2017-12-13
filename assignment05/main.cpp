#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//Game of life - This program was meant to fill a 2D array and randomly populate it with 1s and 0s.
//Based on the rules of life it would 
class GameOfLife {
    private: 
    int columns = 5;
    int rows = 5;
    int board[5][5];
    int next_board[5][5];
    
    
    public:
    GameOfLife();
    void Print_Board();
    void CellStateUpdate();
    void IterateGame(unsigned int iterations);
    void Cell_State();
    void Display();
    
};



GameOfLife::GameOfLife() {  //The constructor, randomly populates the board
    
    for(int i = 1; i < columns - 1; ++i) {//Randomly populates the game board I can add a manual input to customize the board
        for(int j = 1; j < rows - 1; ++j) {
            board[i][j] = rand() % 2;
        }
    }
}
void GameOfLife::CellStateUpdate() {
 int neighbors = 0;
 for(int x = 1; x < columns - 1; ++x) {  //The loop ensures all the edge cells are not affected.
        for(int y = 1; y < rows - 1; ++y) {
            
            for(int i = -1; i < 1; ++i) {
                for (int j = -1; j < 1; ++j) {
                    neighbors += board[x + i][y + j];
                }
            }  
            
            neighbors -= board[x][y];//Ensures the cell in question is not adding to the cell count to determine life
            
            //The rules for life!!!
            if(neighbors >= 4 && board[x][y] == 1) {
                next_board[x][y] = 0;
            }
            else if(neighbors <= 1 && board[x][y] == 1) {
                next_board[x][y] = 0;
            }
            else if(neighbors == 3 && board[x][y] == 0) {
                next_board[x][y] = 1;
            }
            else {
                next_board[x][y] = board[x][y];
            }
        }
    }
    for(int x = 1; x < columns - 1; ++x) {  //The loop ensures all the edge cells are not affected.
        for(int y = 1; y < rows - 1; ++y) {
            board[x][y] = next_board[x][y];
        }
    }
}

void GameOfLife::Print_Board() {
    for(int i = 0; i < columns; ++i) {
        for(int j = 0; j < rows; ++j) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

void GameOfLife::IterateGame(unsigned int iterations) {
    for (int i = 0; i < iterations; ++i) {
        Print_Board();
        CellStateUpdate();
    }
}

//I want to add a game class and have input to customize the board.
//Program helps in understanding matrices and how they store data and how to manipulate the data 
int main() {
    
    
    GameOfLife a;
    int user_input = 0;
    
  
  
  cout << "Welcome to Conway's Game of Life" << endl;
  cout << endl;
  cout << "How many times would you like to iterate the game?";
  
  
  cin >> user_input;
  a.IterateGame(user_input);
  
    
    
    
    
    
    
}