// This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.
#include <iostream> 
using namespace std; 
int main() {
        // Read a character in
        string ch;
        cout << "Please enter a character: "; //I added output to each conditional statement so the user would be prompted no matter the imput.
        cin  >> ch;
         
// check -- is it a letter??
    while (ch != "-1") {
        if ((ch >= "A")&&(ch <= "Z")) {
            cout << "Yes, that is an uppercase letter." << endl;
            cout << "Please enter a character: ";
            cin  >> ch;
        }
        else if ((ch >= "a")&&(ch <= "z")) {
            cout << "Yes, that is a lowercase letter" << endl;
            cout << "Please enter a character: ";
            cin  >> ch;
        }        
        else {
            cout << "Not a letter" << endl;
            cout << "Please enter a character: ";
            cin  >> ch;
        }
    }
}
/*
Output:
Please enter a character: a
Yes, that is a lowercase letter
Please enter a character: A
Yes, that is a uppercase letter.
Please enter a character: 5
Not a letter
Please enter a character: -1
*/