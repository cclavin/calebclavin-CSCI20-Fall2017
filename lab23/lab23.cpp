//Created by: Caleb Clavin
//Created on: 09/26/2017

//This program takes 2 numbers, swaps them and then generates a random number between them

#include <iostream>
#include <ctime>
using namespace std;

void SwapFunction(int& low_num, int& high_num) //This function swaps the given parameters and their values
{
    
    int x = 0;
    x = high_num;
    high_num = low_num;
    low_num = x;
    
}

int RandomNumberGenerator(int num_A, int num_B) //This function generates a random number that is between the two numbers input
{
    
    
    SwapFunction(num_A, num_B);
    
    //The calculation finds the difference in order to know what numbers it can randomly select from
    
    srand(time(0));
    int random_number = rand() % (num_B - num_A) + num_B + 1;
    
   
    cout << "A random number between " << num_B << " and " << num_A << " is ";
    cout << random_number << ".";
    
}

// The main calls the function and gets the input from the user to be used in the functions
int main()
{
   int low_num = 0;
   int high_num = 0;
   
   cout << "Please enter the number lower in value: ";
   cin >> low_num;
    
   cout << "Please enter the number higher in value: ";
   cin >> high_num;
   
   RandomNumberGenerator(low_num, high_num);
}

/* Output:
Please enter the number lower in value: 1
Please enter the number higher in value: 10
A random number between 1 and 10 is 2.

Please enter the number lower in value: 5
Please enter the number higher in value: 82
A random number between 5 and 82 is 10.

Please enter the number lower in value: 22
Please enter the number higher in value: 73
A random number between 22 and 73 is 67.


*/