//Created by: Caleb Clavin
//Created on: 10/3/2017

//This program uses a class data type to store and display information about different books that the user inputs information for.

#include <iostream>
#include <string>  //string required 
using namespace std;

class Book {
    
    private:      //These variables are private and cannot be modified except through the functions for each object
    string title_;
    string author_first_;
    string author_last_;
    int copyright_date_;
    
    public:       //The public group refers to all the mutator and access functions as well as the print function. 
    void SetTitle(string book_title);
    string GetTitle();
    void SetAuthorFirst(string first_name);
    string GetAuthorFirst();
    void SetAuthorLast(string last_name);
    string GetAuthorLast();
    void SetCopyrightDate(int cr_date);
    int GetCopyrightDate();
    void print();
    
};
//The set functions below sets the input data equal to the private variables pertaining to each object

void Book::SetTitle(string book_title) {
    title_ = book_title;
    return;
}
void Book::SetAuthorFirst(string first_name) {
    author_first_ = first_name;
    return;
}
void Book::SetAuthorLast(string last_name) {
    author_last_ = last_name;
    return;
}
void Book::SetCopyrightDate(int cr_date) {
    copyright_date_ = cr_date;
    return;
}
//The get functions below return the info that is set to that particular function
string Book::GetTitle() {
    return title_;
}
string Book::GetAuthorFirst() {
    return author_first_;
}
string Book::GetAuthorLast() {
    return author_last_;
}
int Book::GetCopyrightDate() {
    return copyright_date_;
}

//This function prints the private variables but can be used for each particular object
void Book::print() {
    cout << "Title: " << title_ << endl;
    cout << "Author first name: " << author_first_ << endl;
    cout << "Author last name: " << author_last_ << endl;
    cout << "Copyright year: " << copyright_date_ << endl;
    return;
    
}



int main() 
{//These variables are used to store user input and use it with the functions for each particular object
   string book_1_title;
   string b1_author_first;
   string b1_author_last;
   int b1_copyright_year;
  
   string book_2_title;
   string b2_author_first;
   string b2_author_last;
   int b2_copyright_year;
   
   string book_3_title;
   string b3_author_first;
   string b3_author_last;
   int b3_copyright_year;
   
   string book_4_title;
   string b4_author_first;
   string b4_author_last;
   int b4_copyright_year;
   
   string book_5_title;
   string b5_author_first;
   string b5_author_last;
   int b5_copyright_year;
    
    Book book1;  //By creating objects, data can be entered for each object (each particular book) and the functions and variables all apply specifically to each object.
    Book book2;
    Book book3;
    Book book4;
    Book book5;
    
    //Below is where all the input is gathered for each book
    
    cout << "This program will gather the information for 5 books." << endl;
    
    cout << "Please enter the information for the first book." << endl;
    cout << "Enter the title using underscores for spaces: ";
    cin >> book_1_title;
    book1.SetTitle(book_1_title);      //For each object, get and set are used after input is attained
    cout << book1.GetTitle() << endl;
    cout << "Enter the first name for the author: ";
    cin >> b1_author_first;
    book1.SetAuthorFirst(b1_author_first);
    cout << book1.GetAuthorFirst() << endl;
    cout << "Enter the last name for the author: ";
    cin >> b1_author_last;
     book1.SetAuthorLast(b1_author_last);
    cout << book1.GetAuthorLast() << endl;
    cout << "Enter the copyright year: ";
    cin >> b1_copyright_year;
    book1.SetCopyrightDate(b1_copyright_year);
    cout << book1.GetCopyrightDate() << endl;
    
    cout << "Please enter the information for the second book." << endl;
    cout << "Enter the title using underscores for spaces: ";
    cin >> book_2_title;
    book2.SetTitle(book_2_title);
    cout << book2.GetTitle() << endl;
    cout << "Enter the first name for the author: ";
    cin >> b2_author_first;
    book2.SetAuthorFirst(b2_author_first);
    cout << book2.GetAuthorFirst() << endl;
    cout << "Enter the last name for the author: ";
    cin >> b2_author_last;
    book2.SetAuthorLast(b2_author_last);
    cout << book2.GetAuthorLast() << endl;
    cout << "Enter the copyright year: ";
    cin >> b2_copyright_year;
    book2.SetCopyrightDate(b2_copyright_year);
    cout << book2.GetCopyrightDate() << endl;
    
    cout << "Please enter the information for the third book." << endl;
    cout << "Enter the title using underscores for spaces: ";
    cin >> book_3_title;
    book3.SetTitle(book_3_title);
    cout << book3.GetTitle() << endl;
    cout << "Enter the first name for the author: ";
    cin >> b3_author_first;
    book3.SetAuthorFirst(b3_author_first);
    cout << book3.GetAuthorFirst() << endl;
    cout << "Enter the last name for the author: ";
    cin >> b3_author_last;
    book3.SetAuthorLast(b3_author_last);
    cout << book3.GetAuthorLast() << endl;
    cout << "Enter the copyright year: ";
    cin >> b3_copyright_year;
    book3.SetCopyrightDate(b3_copyright_year);
    cout << book3.GetCopyrightDate() << endl;
    
    cout << "Please enter the information for the fourth book." << endl;
    cout << "Enter the title using underscores for spaces: ";
    cin >> book_4_title;
    book4.SetTitle(book_4_title);
    cout << book4.GetTitle() << endl;
    cout << "Enter the first name for the author: ";
    cin >> b4_author_first;
    book4.SetAuthorFirst(b4_author_first);
    cout << book4.GetAuthorFirst() << endl;
    cout << "Enter the last name for the author: ";
    cin >> b4_author_last;
    book4.SetAuthorLast(b4_author_last);
    cout << book4.GetAuthorLast() << endl;
    cout << "Enter the copyright year: ";
    cin >> b4_copyright_year;
    book4.SetCopyrightDate(b4_copyright_year);
    cout << book4.GetCopyrightDate() << endl;
    
    cout << "Please enter the information for the fifth book." << endl;
    cout << "Enter the title using underscores for spaces: ";
    cin >> book_5_title;
    book5.SetTitle(book_5_title);
    cout << book5.GetTitle() << endl;
    cout << "Enter the first name for the author: ";
    cin >> b5_author_first;
    book5.SetAuthorFirst(b5_author_first);
    cout << book5.GetAuthorFirst() << endl;
    cout << "Enter the last name for the author: ";
    cin >> b5_author_last;
    book5.SetAuthorLast(b5_author_last);
    cout << book5.GetAuthorLast() << endl;
    cout << "Enter the copyright year: ";
    cin >> b5_copyright_year;
    book5.SetCopyrightDate(b5_copyright_year);
    cout << book5.GetCopyrightDate() << endl;
    
    
//This section prints all the data gathered for each object by using the print function defined above    
    
    book1.print();
    cout << endl;
    
    book2.print();
    cout << endl;
    
    book3.print();
    cout << endl;
    
    book4.print();
    cout << endl;
    
    book5.print();
    cout << endl;
    
    
}
    
   
/*
Sample Output:

This program will gather the information for 5 books.
Please enter the information for the first book.
Enter the title using underscores for spaces: The_Hunger_Games
The_Hunger_Games
Enter the first name for the author: Suzanne
Suzanne
Enter the last name for the author: Collins
Collins
Enter the copyright year: 2008
2008
Please enter the information for the second book.
Enter the title using underscores for spaces: Divergent
Divergent
Enter the first name for the author: Veronica
Veronica
Enter the last name for the author: Roth
Roth
Enter the copyright year: 2011
2011
Please enter the information for the third book.
Enter the title using underscores for spaces: To_Kill_a_Mockingbird
To_Kill_a_Mockingbird
Enter the first name for the author: Harper
Harper
Enter the last name for the author: Lee
Lee
Enter the copyright year: 1960
1960
Please enter the information for the fourth book.
Enter the title using underscores for spaces: The_Host
The_Host
Enter the first name for the author: Stephanie
Stephanie
Enter the last name for the author: Meyer
Meyer
Enter the copyright year: 2008
2008
Please enter the information for the fifth book.
Enter the title using underscores for spaces: The_Communist_Manifesto
The_Communist_Manifesto
Enter the first name for the author: Karl
Karl
Enter the last name for the author: Marx
Marx
Enter the copyright year: 1848
1848
Title: The_Hunger_Games
Author first name: Suzanne
Author last name: Collins
Copyright year: 2008

Title: Divergent
Author first name: Veronica
Author last name: Roth
Copyright year: 2011

Title: To_Kill_a_Mockingbird
Author first name: Harper
Author last name: Lee
Copyright year: 1960

Title: The_Host
Author first name: Stephanie
Author last name: Meyer
Copyright year: 2008

Title: The_Communist_Manifesto
Author first name: Karl
Author last name: Marx
Copyright year: 1848


















*/
   
    
    
    
    

    
    
    
    
    

