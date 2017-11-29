#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[1000]; //Declares a char pointer called name and attempts to create an array of pointers
                            //it points to the whole array

    cout << "Please enter a 10 letter word or less" << endl; 
    cin >> name; 

    char * head  = name; //Points head to the first letter of the string
    char * tail = name; //Also points tail to the first letter of the string
    nameLength = strlen(name);//Stores the length of the array name points to, by deleting the dereference operator, 

    cout << "Your word is " << name << endl;//firststr is not declared and has no value stored

    if (nameLength<10)
    {
         while (*head != '\0')
         {
                cout << *head;//Outputs  the data pointed to by head until a null character is found by ++head, by adding after each iteration it cycles through the array name which it is 
                head++; //it cycles through the array name which it is pointing
         }
     }
    else//else if namelength is greater than 10
    {
        cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
    }

     cout << endl;

     tail = &name[strlen(name) - 1]; //Points tail to the last letter of the string that is input

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail; //Outputs each character, from the last character to the first, until tail points to the first character of the string, like name
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];

     head++;
     tail--;

     if (*head == *tail)
     {
         cout << "It is a palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}