#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {//Declares the main function and opens for its definition
    int nameLength = 0;//Creates int variable nameLength and assigns to it 0
    char * name = new char[1000]; //Declares a char pointer called name and attempts to create an array of pointers
                            //it points to the whole array

    cout << "Please enter a 10 letter word or less" << endl; //Outputs the string of text and finishes with an newline
    cin >> name; //User enters their name into the array

    char * head  = name; //Points head to the first letter of the string
    char * tail = name; //Also points tail to the first letter of the string
    nameLength = strlen(*name);//Stores the length of the array name points to, the dereference operator should be deleted in order to get the length of the whole array

    cout << "Your word is " << name << endl;//firststr is not declared and has no value stored

    if (nameLength<10)//Sets condition allowing the body to be read only if the string is under 10 characters
    {
         while (*head != '\0')//While the pointee pointed to by head is not the null character...it does this in order to stop looping once it reaches the end of the string
         {
                cout << *head;//Outputs  the data pointed to by head until a null character is found by ++head, by adding after each iteration it cycles through the array name which it is 
                head++; //it cycles through the array name which it is pointing
         }
     }
    else//else if namelength is greater than 10
    {
        cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;//Outputs a string of text warning the user if their string is too long
    }

     cout << endl;//Adds a newline

     tail = &name[strlen(name) - 1]; //Points tail to the last letter of the string that is input

     if (nameLength < 10)//Again, ensures the code below is read only if the string is under ten characters
     {
          while (tail != name)//While tail doesn't equal the first character
          {
                 cout << *tail; //Outputs each character, from the last character to the first, until tail points to the first character of the string, like name
                 tail--;
          }
     }
     cout << endl;//Adds another newline for readability

     head = name;//Points to the first character again
     tail = &name[strlen(name) - 1];//Points tail to the last character again

     head++;//Goes from first to the last character of the string
     tail--;//Goes backwards from the last character to the first

     if (*head == *tail)//Compares the backwards string that tail points to and the regular string pointed to by head
     {              
         cout << "It is a palindrome!" << endl;//The text is output if the array is found to be the same forwards and backwards through comparing...
     }                                      //the characters of the array, read forwards by pointer head and read backwards by pointer tail
     else//Indicates that the string is not a palindrome because the strings, both forwards and backwards, are not equivalent
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}