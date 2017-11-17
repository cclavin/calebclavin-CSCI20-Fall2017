//Created by: Caleb Clavin
//Created on: 11/9/2017

//Username Generator -- This program uses c-strings and its library functions as well as one cctype fuction to store input and manipulate the characters
// in order to generate 3 different username options based on their first and last name.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() 
{
    char first_name[11];
    char last_name[21];
    char first_username[31];//Each username is set to contain the max amount of characters possible but one additional spot is saved for the \0 character
    char second_username[23];
    char third_username[22];
    int lowercase;
    int i;
    
    cout << "Enter your full name using 10 characters for the first name and 20 characters for the last name." << endl;
    
    cout << "First name: ";
    cin >> first_name; //The user's name is input into two different c-strings
    cout << "Last name: ";
    cin >> last_name;
    
    if(strcmp(first_name, last_name) == 0) {
        cout << "Warning: Your names are the same!";//This function compares the two strings and if they are the same, the user will see the text output
    }
    //Both functions are used to warn the user that the strings are over the character amount by checking the length of the arrays
    if(strlen(first_name) > 10) {
        cout << "Warning: Your first name is over 10 characters!";
    }
    if(strlen(last_name) > 20) {
        cout << "Warning: Your last name is over 20 characters!";
    }
    //Both names are converted to lowercase for the usernames with the "tolower" cctype function
    //The for loop allows the tolower function to store each lowercase character into the array
    for(i = 0; i < 10; ++i) {    
        
        lowercase = first_name[i];
        
        first_name[i] = tolower(lowercase);
    }
    for(i = 0; i < 20; ++i) {    
        
        lowercase = last_name[i];
        
        last_name[i] = tolower(lowercase); 
    }
    
    //The strncpy functions are used to copy in the first characters for the usernames
    //while the strncat appends the last_name with a null character at the end ensuring each username string is complete
    strncpy(first_username, first_name, 10);
    strncat(first_username, last_name, 20);
    
    strncpy(second_username, first_name, 2);
    strncat(second_username, last_name, 20);
    
    strncpy(third_username, first_name, 1);//and just the first initial for this string
    strncat(third_username, last_name, 20);
    
    
    //Finally the output is displayed for the user to choose
    cout << "Which type of user name would you like: " << endl;
    cout << "1. " << first_username << endl;
    cout << "2. " << second_username << endl;
    cout << "3. " << third_username << endl;
    
    
/*Example Output: 

 *  Enter your full name using 10 characters for the first name and 20 characters for the last name.
    First name: Caleb
 *   Last name: Clavin
    Which type of user name would you like: 
 *  1. calebclavin
    2. caclavin
 *  3. cclavin
  
 */

    
}