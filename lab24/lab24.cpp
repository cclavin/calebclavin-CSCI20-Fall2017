//Created by: Caleb Clavin 
//Created on: 09/28/2017

//The program uses functions to find lbs to kilograms and vice versa, additionally it utilizes a random number generator and swap function

#include <iostream>
using namespace std;

//This function generates a random number that is between the two numbers input and then swaps them
int RandomNumGenerator (int& num_A, int& num_B)
{
    int x = num_A;              //The scope of these variables are local
    num_A = num_B;
    num_B = x;
    
    srand(time(0));
    int random_number = rand() % (num_B - num_A) + num_B + 1;
    
   return random_number;
  
}

//lb_to_kg converts lbs and returns kilograms
double lb_to_kg (int pounds) 
{
    double kgs = 0.0;      //Local scope
    
    kgs = static_cast<double>(pounds) / 2.20462;
    
    return kgs;
}

//
double kg_to_lb (double kilograms)
{
    double lbs = 0.0; //Local scope
    
    lbs = 2.20462 * kilograms;
    
    return lbs;
}

//Now in the main the input is gathered and the functions are called in order to process the given input and then it is all output
int main()
{
    int value_1 = 0;         //The variables within the main function are global
    int value_2 = 0;
    int num_random = 0;
    double num_lbs = 0.0;
    double num_kgs = 0.0;
    
    
    cout << "Please enter two numbers..." << endl;
    cout << "First number: ";
    cin >> value_1;
    
    cout << "Second number: ";
    cin >> value_2;
    cout << endl;
    
    
   num_random = RandomNumGenerator (value_1, value_2);
   num_kgs = lb_to_kg(num_random);
   num_lbs = kg_to_lb(num_kgs);
   
   
   cout << "Results:" << endl;
   cout << endl;
   cout << "Random Number: " << num_random << endl;
   cout << "Pounds: " << num_lbs << endl;
   cout << "Kilograms: " << num_kgs << endl;
   cout << "Final Pounds: " << num_lbs << endl;
   
   return 0;
}


/*
Example output:

Please enter two numbers...
First number: 21
Second number: 31

Results:

Random Number: 23
Pounds: 23
Kilograms: 10.4326
Final Pounds: 23

*/


