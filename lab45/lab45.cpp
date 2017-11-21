//Created by: Caleb Clavin
//Created on: 11/21/2017

//String Username- This program creates usernames based on the name entered as input into a string
//both the string and cctype libraries are used for their functions.

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string first_name;
    string last_name;
    string first_username;
    string second_username;
    string third_username;
    int lowercase;
    int i;
    
    cout << "Enter your full name using 10 characters for "; 
    cout << "the first name and 20 characters for the last name." << endl;
    
    cout << "First name: ";//Input is gathered into two different strings for each of their names
    cin >> first_name;
    cout << "Last name: ";
    cin >> last_name;
    
    if(first_name == last_name) {//This conditional statement checks if the strings are the same.
        cout << "Warning: Your names are the same!";
    }
    
    
    //Both names are "checked" in case there are more characters
    if(first_name.length() > 10) {
        cout << "Warning: Your first name is over 10 characters!";
    }
    
    if(last_name.length() > 20) {
        cout << "Warning: Your last name is over 20 characters!";
    }
    
    //Both names are converted to lowercase for the usernames with the "tolower" cctype function
    //The for loop allows the tolower function to store each lowercase character into each index of the string
    
    for(i = 0; i < 10; ++i) {    
        
        lowercase = first_name[i];
        
        first_name[i] = tolower(lowercase);
    }
    
    for(i = 0; i < 20; ++i) {    
        
        lowercase = last_name[i];
        
        last_name[i] = tolower(lowercase); 
    }
    
  
    //The append function adds both strings to the first_username string
    first_username.append(first_name);
    first_username.append(last_name);


//The substr allows me to append the first or first and second characters to both username strings
    second_username.insert(0, first_name.substr(0, 1));
    second_username.append(last_name);
    
    third_username.insert(0, first_name.substr(0, 2));
    third_username.append(last_name);
    
    
    //Finally the output is displayed for the user to choose
    cout << "Which type of user name would you like: " << endl;
    cout << "1. " << first_username << endl;
    cout << "2. " << second_username << endl;
    cout << "3. " << third_username << endl;
    
    
    
    
    
}