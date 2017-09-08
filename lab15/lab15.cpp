//Created by: Caleb Clavin
//Created on: 09/07/2017

#include <iostream>
#include <string>
using namespace std;

int main()
    {
 
 //The strings below are for each type of word needed in the mad-lib.
 
    string noun_plural = "problems";
    string amount_of_time = "decade";
    string capital_noun = "Moderate";
    string word_for_meeting = "conclave";
    string verb_1 = "compile";
    string verb_2 = "ruin";
    string title_or_rank = "Chief";
    
 //The code below asks the user for input for each word in the mad-lib.
   
    cout << "Enter a plural noun: ";
    cin >> noun_plural;
    
    cout << "Enter an amount of time: ";
    cin >> amount_of_time;
    
    cout << "Enter a capital noun: ";
    cin >> capital_noun;
    
    cout << "Enter another word for meeting: ";
    cin >> word_for_meeting;
    
    cout << "Enter a verb: ";
    cin >> verb_1;
    
    cout << "Enter another verb: ";
    cin >> verb_2;
    
    cout << "Enter a title or rank: ";
    cin >> title_or_rank;
    
 //This section uses the inputs within the mad-lib and outputs the result for
 // user to see.
    
    cout << "The president of the " << noun_plural << " is elected every ";
    cout << amount_of_time << " by a group of people called the ";
    cout << capital_noun << " College." << endl;
    cout << "Each person casts votes in a ";
    cout << "preliminary hearing called a " << word_for_meeting << ". " << endl;
    cout << "Many people try to ";
    cout << verb_1 << " the outcome using polls and statistics." << endl;
    cout << "In the end, ";
    cout << "only one person is selected to " << verb_2 << " the country as ";
    cout << title_or_rank << " in Chief." << endl;
    
    
/*

Variables are embedded within the paragraph.

Output: 


The president of the problems is elected every decade by a group of people called the Moderate College.
Each person casts votes in a preliminary hearing called a conclave. 
Many people try to compile the outcome using polls and statistics.
In the end, only one person is selected to ruin the country as Chief in Chief.

*/  
    }