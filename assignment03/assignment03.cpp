//Created by: Caleb Clavin
//Created on: 10/26/2017

//Pig Dice Game- In this game, one human player plays against a computer. During each turn, the player can roll a die or pass. If they roll a one, their score that turn is 0. 
//If they pass without rolling a 1, their score is and it becomes the computer's turn.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


class ComputerPlayer { //This class handles the computer's turn and can add more computer objects if more players are wanted.
    private: 
    int com_total_score_;
    
    public:
    ComputerPlayer() {//The two constructors ensure a value is set for the score
        com_total_score_ = 0;
    }
    ComputerPlayer(int score) {//A score can be added if the player wants a handicap
        com_total_score_ = score;
    }
    int Dice() {//This seeds the random number generator and "rolls" the dice
        srand(time(0));
        int roll;
        roll = rand() % 6 + 1;
        return roll;
    }
    int SetComputerScore(int &total_score) { //The Set function is used to set the score and perform one turn
        int turn_score = 0;
        int last_roll;
        bool turn = true;
        
        
    
        while ((turn_score <= 21)&&(turn)) { //If the computer's score becomes higher than 21 or if turn becomes false(it rolls a 1)
            
            last_roll = Dice();
            
            if (last_roll == 1) { //The turn is ended if a 1 is rolled
                cout << "The computer rolled a 1, it is now your turn.";
                turn = false;
            }
            else {
                turn_score += last_roll;
                
            }
        }
            if (turn_score >= 25) {
                com_total_score_ += turn_score;
                cout << "Computer score this turn is " << turn_score << endl;
                
                
            }
        return com_total_score_;    
        
    }
    
    
    
    
};


 
   


int Dice() { //I use a seperate dice function for the human player
    int roll;
    roll = rand() % 6 + 1;
    return roll;
}
int human_turn(int& hum_total_score) { //This function performs the turn for the player and stores the past stored total score
    int turn_score = 0;
    bool turn = true;
    int last_roll = 0;
    char player_choice;
    
    while(turn == true) {//The loop ensures the player can roll several times until turn becomes false(if they roll a one or pass)
            cout << "Press [r] to roll or [p] to pass and save your points:";
            cin >> player_choice;
            
            while (player_choice == 'r') {
                last_roll = Dice();
                if (last_roll == 1) {
                   
                    turn_score = 0;
                    cout << "You rolled a 1, your turn is over and your score this turn is 0." << endl;
                    turn = false;
                }
                else {
                    cout << "You rolled a " << last_roll << endl;
                    turn_score += last_roll;
                    cout << "Your current score this turn is " << turn_score << endl;
                    cout << "Press [r] to roll or [p] to pass and save your points:" << endl;
                    cin >> player_choice;
                }
            }
            if (player_choice == 'p') { //This statement adds the points to the players total and ends the loop
                hum_total_score += turn_score;
                turn = false;
            }
     }        
}



int main () 
{
    const int MAX_SCORE = 100;
    int human_tot_score = 0;
    int com_tot_score = 0;
     
    ComputerPlayer com_1;
     
    cout << "Welcome to the Pig Dice Game." << endl;
    
    while (human_tot_score < MAX_SCORE && com_tot_score < MAX_SCORE) { //The loop breaks when either the player or computer score is 100 and the winner is determined below
        human_turn(human_tot_score);
        com_tot_score = com_1.SetComputerScore(com_tot_score);
        
        cout << "You have " << human_tot_score << " points and the computer has ";
        cout << com_tot_score << " points." << endl;
        
    }
    if (human_tot_score >= MAX_SCORE) {
        cout << "Congratulations...You win!!!" << endl;
    }
    else {
        cout << "You have been beaten by the computer..." << endl;
    }
    
    
   
}


/*
Output of player losing:

Welcome to the Pig Dice Game.
Press [r] to roll or [p] to pass and save your points:p
Computer score this turn is 30
You have 0 points and the computer has 30 points.
Press [r] to roll or [p] to pass and save your points:p
Computer score this turn is 27
You have 0 points and the computer has 57 points.
Press [r] to roll or [p] to pass and save your points:p
Computer score this turn is 27
You have 0 points and the computer has 84 points.
Press [r] to roll or [p] to pass and save your points:p
Computer score this turn is 27
You have 0 points and the computer has 111 points.
You have been beaten by the computer...

Output of player winning:
Welcome to the Pig Dice Game.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 2
Your current score this turn is 2
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 5
Your current score this turn is 7
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 4
Your current score this turn is 11
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 2
Your current score this turn is 13
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 6
Your current score this turn is 19
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 2
Your current score this turn is 21
Press [r] to roll or [p] to pass and save your points:
p
Computer score this turn is 25
You have 21 points and the computer has 25 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 5
Your current score this turn is 5
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 3
Your current score this turn is 8
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 2
Your current score this turn is 10
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 2
Your current score this turn is 12
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 1, your turn is over and your score this turn is 0.
The computer rolled a 1, it is now your turn.You have 21 points and the computer has 25 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 2
Your current score this turn is 2
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 5
Your current score this turn is 7
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 2
Your current score this turn is 9
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 5
Your current score this turn is 14
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 4
Your current score this turn is 18
Press [r] to roll or [p] to pass and save your points:
p
You have 39 points and the computer has 25 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 1, your turn is over and your score this turn is 0.
The computer rolled a 1, it is now your turn.You have 39 points and the computer has 25 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 4
Your current score this turn is 4
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 5
Your current score this turn is 9
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 5
Your current score this turn is 14
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 6
Your current score this turn is 20
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 6
Your current score this turn is 26
Press [r] to roll or [p] to pass and save your points:
p
You have 65 points and the computer has 25 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 6
Your current score this turn is 6
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 3
Your current score this turn is 9
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 4
Your current score this turn is 13
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 2
Your current score this turn is 15
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 3
Your current score this turn is 18
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 4
Your current score this turn is 22
Press [r] to roll or [p] to pass and save your points:
p
You have 87 points and the computer has 25 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 1, your turn is over and your score this turn is 0.
Computer score this turn is 25
You have 87 points and the computer has 50 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 4
Your current score this turn is 4
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 1, your turn is over and your score this turn is 0.
You have 87 points and the computer has 50 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 1, your turn is over and your score this turn is 0.
You have 87 points and the computer has 50 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 3
Your current score this turn is 3
Press [r] to roll or [p] to pass and save your points:
p
You have 90 points and the computer has 50 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 1, your turn is over and your score this turn is 0.
You have 90 points and the computer has 50 points.
Press [r] to roll or [p] to pass and save your points:r
You rolled a 4
Your current score this turn is 4
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 4
Your current score this turn is 8
Press [r] to roll or [p] to pass and save your points:
r
You rolled a 3
Your current score this turn is 11
Press [r] to roll or [p] to pass and save your points:
p
You have 101 points and the computer has 50 points.
You have been beaten by the computer...











*/