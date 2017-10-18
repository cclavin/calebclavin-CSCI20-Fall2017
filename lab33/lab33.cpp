//Created by: Caleb Clavin
//Created on: 10/17/2017

//This program generates a random number between 1-50 and asks the user to guess until the correct number is guessed.

#include <iostream>
#include <ctime> //ctime necessary because I use it for the random number function.
using namespace std;

int main () 
{
    int user_guess;
    int num;
    int i;
    
    srand(time(0)); //This seeds the random number generator so it can be used on the line below.
    num = rand() % 50 + 1;
    
    cout << "Welcome to a random number guessing game." << endl;
    
          //Condition statement
    while (user_guess != num) {  //The while loop continues to loop until the guessed number is equivalent to the random number.
        
        cout << "Guess the number between 1-50: ";
        cin >> user_guess;
        
        //The 2 if statements below ensure the user enters a number between 1-50
        if (user_guess < 1) {
            cout << "Please enter a value between 1-50." << endl;
        }
        else if (user_guess > 50) {
            cout << "Please enter a value between 1-50." << endl;
        }
        
        //If the number guessed is too low or too high, the user is notified because of these if statements.
        if ((user_guess > num)&&(user_guess <= 50)) {
            cout << "Too high, guess lower..." << endl;
        }
        else if ((user_guess < num)&&(user_guess >= 1)) {
            cout << "Too low, guess higher..." << endl;
        }
        else if (user_guess == num) {  //Finally, if the number guessed is correct, the countdown loop is initialized and the user is congratulated.
            for (i = 5; i > 0; --i) {
                cout << i << " ";
            }
            cout << "Congratulations, you guessed the number!" << endl;
        }
    
    }        
    
}
/*
Example Output:
Welcome to a random number guessing game.
Guess the number between 1-50: 6
Too low, guess higher...
Guess the number between 1-50: 84
Please enter a value between 1-50.
Guess the number between 1-50: 25
Too high, guess lower...
Guess the number between 1-50: 20
Too high, guess lower...
Guess the number between 1-50: 15
Too high, guess lower...
Guess the number between 1-50: 10
Too low, guess higher...
Guess the number between 1-50: 12
Too low, guess higher...
5 4 3 2 1 Congratulations, you guessed the number!
*/