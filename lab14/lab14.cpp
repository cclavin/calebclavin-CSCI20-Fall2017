//Created by: Caleb Clavin
//Date Created: 09/05/2017

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables.
    
    int total_quarters = 0;   
    int total_dimes = 0;
    int total_nickels = 0;
    int total_pennies = 0;
    int total_cents = 0;
    float total_currency = 0.0;
    float total_recieved = 0.0;
    
    //Getting user input.
    
    cout << "Please enter total amount of coins in cents: ";  
    cin >> total_cents;
    
    
    cout << "You have entered " << total_cents << " cents." << endl;
    
    //Calculating each coin amount by finding quarters then other coins 
    //from remainder.
    
    total_quarters = total_cents / 25;         
    total_dimes = (total_cents % 25) / 10;
    total_nickels = ((total_cents % 25) % 10) / 5;
    total_pennies = (((total_cents % 25) % 10) % 5);
    
    cout << "That was " << total_quarters << " quarter(s), ";
    cout << total_dimes << " dime(s), " << total_nickels << " nickel(s) and ";
    cout << total_pennies << " penny(-ies)." << endl;
    
    //Determining the amount dispensed after the fee is taken.
   
    total_currency = static_cast<float>(total_cents / static_cast<float>(100));
    total_recieved = total_currency - (total_currency * .109);
    
    //This section rounds the total_recieved to the hundreths place for practicality.
    
    double scale = 0.01;
    total_recieved = (int)(total_recieved / scale) * scale;
   
   cout << "Your total is $" << total_currency;
   cout << ". After the fee you recieve $" << total_recieved << ".";
   
   /*
    Input:  105
    Output: Please enter total amount of coins in cents: 105
            You have entered 105 cents.
            That was 4 quarter(s), 0 dime(s), 1 nickel(s) and 0 penny(-ies).
            Your total is $1.05. After the fee you recieve $0.93.
    
    Input: 3459
    Output: Please enter total amount of coins in cents: 3459
            You have entered 3459 cents.
            That was 138 quarter(s), 0 dime(s), 1 nickel(s) and 4 penny(-ies).
            Your total is $34.59. After the fee you recieve $30.81.
    
    Input: 987654321
    Output: Please enter total amount of coins in cents: 987654321
            You have entered 987654321 cents.
            That was 39506172 quarter(s), 2 dime(s), 0 nickel(s) and 1 penny(-ies).
            Your total is $9.87654e+06. After the fee you recieve $8.8e+06.

   */ 
 
   
    
    
    
}