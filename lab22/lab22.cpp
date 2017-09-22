//Created by: Caleb Clavin
//Created on: 09/21/2017

//This program uses a function to generate a random number between 1-100

#include <iostream>
#include <ctime>
using namespace std;

int NumberGenerator();

//main is used only to call the function in order to appear neater

int main()
{
   NumberGenerator();
}

//The function below generates a random number using time in order to 
//generate a new number each run

int NumberGenerator()
{
    srand(time(0));
    int random_number = rand() % 100 + 1;
    cout << "Your random number is: " << random_number << endl;
    
}    
   
//Output: Your random number is: 42




