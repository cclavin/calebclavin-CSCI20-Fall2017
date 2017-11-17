//Created by: Caleb Clavin
//Created on: 11/16/2017

//Grades

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
   ifstream fin;
   ofstream fout;
   string first_name;
   string last_name;
   string buffer;
   string class_data;
   string credits;
   char classes[10];
   
   int i = 0;
   int num_classes;
   int grades;
   int total_credits;
   
   
   
   fin.open("grades.txt");
   
   if (!fin.is_open()) {
      cout << "Could not open file..." << endl;      
   }
 
   while(!fin.eof()) {
      fin >> first_name;
   
      fin >> last_name;
     
      fin >> num_classes;
   
      for(i = 0; i < num_classes * 2; ++i) {//The loop iterates twice for every class for grade and the amount of credits
         fin >> classes[i];
      }
   }
   class_data = classes;
   
   if(classes < 6 && classes > 0) {
      credits = classes;
   }
   cout << credits;
   while(fin.good()) {
   fin >> classes;
   cout << credits; 
  }
   
  
  fin.close();
  
  
  
}