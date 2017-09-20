//Created by: Caleb Clavin 
//Created on: 09/19/2017

//Functions
//This program outputs the differing windchill result based on two different formulas

#include <iostream>
#include <cmath>
using namespace std;


int main()
{//Variables are initiated now and are stored with zero until the user provides input below
    double temperature = 0.0;
    double windspeed = 0.0;
    double old_windchill = 0.0;
    double new_windchill = 0.0;
    double difference = 0.0;
    
    
    cout << "Enter the temperature in degrees Fahrenheit: ";
    cin >> temperature;
    cout << "Enter the starting wind speed: ";
    cin >> windspeed;
    
//The calculations for both formulas and the difference between them are done below, a few functions are used to perform the math
    
    old_windchill = 0.081 * (3.71 * sqrt(windspeed) + 5.81 - 0.25 * windspeed) * (temperature - 91.4) + 91.4;
    
    new_windchill = 35.74 + 0.6215 * temperature - 35.75 * pow(windspeed, 0.16) + 0.4275 * temperature * pow(windspeed, 0.16);
    
    difference = new_windchill - old_windchill;
    
//Finally the output is displayed with the data
    
    cout << "Results: " << endl;
    cout << "Wind speed: " << windspeed << "  Old Formula: " << old_windchill;
    cout << "   New Formula: ";
    cout << new_windchill << "   Difference between the two: " << difference;
 
 /*Output:

Results: 
Wind speed: 4  Old Formula: 30.5753   New Formula: 25.767   Difference between the two: -4.8083

Results: 
Wind speed: 10  Old Formula: 27.8601   New Formula: 32.713   Difference between the two: 4.85286

Results: 
Wind speed: 2  Old Formula: 98.7538   New Formula: 105.711   Difference between the two: 6.95719

 */
 
 
    
}