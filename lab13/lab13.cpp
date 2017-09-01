//Created by: Caleb Clavin
//Date Created: August 30, 2017

#include <iostream>
using namespace std;

int main()
{
    int num_futureyears = 0;
    int current_population = 325765736;
    int total_population = 0;

/*Each variable containing "secper"(for seconds per) can be changed according to data
from the U.S. census population clock to allow for a more accurate calculation.
*/
    int secpernetpopincrease = 12; 
    int secperbirth = 8;
    int secpermigrant = 33;
    int secperdeath = 12;
    int netpopchangeperyear = 0;
    int deathsperyear = 0;
    int migrantsperyear = 0;
    int birthsperyear = 0;
    int desiredyear = 0;
    
/*The section below calculates the net population change per year and converts
each "secper" variable into an amount per year.
*/   
   birthsperyear = 60 * 60 * 24 * 365 / secperbirth;
   migrantsperyear = 60 * 60 * 24 * 365 / secpermigrant;
   deathsperyear = 60 * 60 * 24 * 365 / -secperdeath;
   netpopchangeperyear = birthsperyear + deathsperyear + migrantsperyear;
   
/*The following code allows the user to input a number and outputs the data
for the user to see.
*/    
    cout << "Enter the number of years in the future below to find the U.S. population in that year:" << endl;
    cin >> num_futureyears;
    desiredyear = num_futureyears + 2017;
    
    total_population = netpopchangeperyear * num_futureyears + current_population;
    
    cout << "In the year " << desiredyear;
    cout << " the United States population will be ";
    cout << total_population << "." << endl;
}    
    
/* Inputs:   99, 26, 8, 13, 43
   Outputs:
*/
   


    
