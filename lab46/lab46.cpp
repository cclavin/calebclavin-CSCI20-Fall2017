//Created by: Caleb Clavin
//Created on: 11/16/2017

//GPA Calculator and transcript output- This program reads input from a file and calculates students' gpa by using the fstream library and basic file input/output.

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
   ifstream fin;
   ofstream fout;
   
   int i = 0;
   int num_classes;
   int num_students = 1;//can be modified depending on the amount of students needed to calculate for
   char grades[num_classes];
   char classes[num_classes];
   double total_credits = 0;
   double grade_points = 0;
   double gpa = 0;
   double credits[num_classes];
   
   string first_name;
   string last_name;
   
   
   fin.open("grades.txt");
   
   if (!fin.is_open()) {
      cout << "Could not open file..." << endl;      
   }
 
   for(i = 0; i < num_students; ++i) {//This loop will repeat, depending on the number of students needed to calculate.
      fin >> first_name;
   
      fin >> last_name;
     
      fin >> num_classes;
      
      for(i = 0; i < num_classes; ++i) {//The loop iterates twice for every class in order to read in grade and the amount of credits
         fin >> credits[i];
         fin >> grades[i];
      }
      for(i = 0; i < 10; ++i) {//Checks for each grade letter and adds the points accordingly
         if(grades[i] == 'A') {
            grade_points += 4;
         }
         else if(grades[i] == 'B') {
            grade_points += 3;
         }
         else if(grades[i] == 'C') {
            grade_points += 2;
         }
         else if(grades[i] == 'D') {
            grade_points += 1;
         }
         else if(grades[i] == 'F') {
            grade_points += 0;
         }
      }
        
         for(i = 0; i < num_classes; ++i) {
            total_credits = total_credits + credits[i];//The credits are added up in order to make the gpa calculation
         }   
         
         gpa = grade_points / total_credits;
         
      
      //Finally, the calulation is complete and a new stream is opened to output to a new html file.
      fout.open("reportcard.html");
      fout << "<!DOCTYPE html>" << endl;
      fout << "<html>" << endl;
      fout << "<body>" << endl;
      fout << "<h1><b>" << first_name << " " << last_name << "</b></h1>" << endl;
      fout << "<p> Student GPA: " << gpa << "</p>" << endl;
      fout << "</body>" << endl;
      fout << "</html>" << endl;
      
   }
  
   
   
   
   
   
  
  
  fin.close();
  fout.close();
  
  
}