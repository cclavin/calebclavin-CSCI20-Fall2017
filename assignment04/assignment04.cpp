//Created by: Caleb Clavin
//Created on: 11/21/2017

/*Test Grader Program

This program reads in data from 2 files: studentanswers.txt and answerkey.txt. By comparing the two and performing 
calculations, it is able to calculate the grade, and missed questions, and then outputs the results for each student to a 
seperate output file.

*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Grader {//The class is setup to grade each of the students results, the answers are read in to the private variables
//and a function within the class performs the calculations to determine the grade.
    
    private:
    
    double const total_points_ = 21;
    char multiple_choice_[18];
    string key_ans_1;
    string key_ans_2;
    string key_ans_3;
    
    public:
    //The default constructor just stores 0 into each variable in the case that it is empty or not set
    Grader() {
        int i = 0;
        for(i = 0; i < 18; ++i){
            multiple_choice_[i] = 0;
        }
        key_ans_1 = "0";
        key_ans_2 = "0";
        key_ans_3 = "0";
    }
    Grader(char multiple_choice_ans[], string ans_1, string ans_2, string ans_3) {//Constructors are setup in order to ensure no bad data is stored
        int i = 0;
        for(i = 0; i < 18; ++i) {
            multiple_choice_[i] = multiple_choice_ans[i];
        }
        key_ans_1 = ans_1;
        key_ans_2 = ans_2;
        key_ans_3 = ans_3;
    }
    //This function sets the multiple choice answer key that is read in from the file, to the class array
    void SetMultiChoiceAns(char multi_choice[]) {
        int i = 0;
       
        for(i = 0; i < 18; ++i) {
            multiple_choice_[i] = multi_choice[i];
        }
    }
    
    //The multiple choice answers can be returned with this function if so desired
    string GetMultiChoiceAns() {
        
        return multiple_choice_;
    }
    
    //Here the word answers are stored in order to check them in the next function
    void SetWordAns(string ans_1, string ans_2, string ans_3) {
        key_ans_1 = ans_1;
        key_ans_2 = ans_2;
        key_ans_3 = ans_3;
    }
    
    //This function compares each answer to the key and then calculates the grade based on the amount of points recieved
    double CheckAnswers(char student_multi[], string ans_1, string ans_2, string ans_3) {
        int i = 0;
        double grade;
        double points = 0;
        
         for(i = 0; i < 18; ++i) {
            if (student_multi[i] == multiple_choice_[i]) {
                points += 1;
            }
            //This statement determines if the multiple choice answers are wrong or ommitted, if a "?" appears, it will not affect points
            else if((student_multi[i] > multiple_choice_[i] || student_multi[i] < multiple_choice_[i])&& student_multi[i] != '?') {
                points -= 0.25;
                
            }
        }
    //This series of conditional statements checks each word answer and docks or gives points accordingly.
        if(ans_1 == key_ans_1) {
            points += 1;
        }
        else if((ans_1 != "?")&&(ans_1 != key_ans_1)) {
            points -= 0.25;
        }
        
        if(ans_2 == key_ans_2) {
            points += 1;
        }
        else if((ans_2 != "?")&&(ans_2 != key_ans_2)) {
            points -= 0.25;
        }
        if(ans_3 == key_ans_3) {
            points += 1;
        }
        else if((ans_3 != "?")&&(ans_3 != key_ans_3)) {
            points -= 0.25;
        }
        grade = points / total_points_;
        return grade; //The grade is returned by the CheckGrade function.
    }
    
    
    
    
};

int main() {
    
    string first_name;
    string last_name;
    string wordans_1;
    string wordans_2;
    string wordans_3;
    char stud_answers[18];
    
    char key_answers[18];
    string key_ans_1;
    string key_ans_2;
    string key_ans_3;
    
    int i = 0;
    int questions_missed[21];
    
    
    
    Grader teacher;
    
    ifstream key;
    ifstream student;//Each stream needed to read in the key, student answers and output to a .txt file.
    ofstream fout;
    
    //Each file is opened out of the loop in order to accurately read in and output the information
    key.open("answerkey.txt");
    student.open("studentanswers.txt");
    fout.open("studentgrade.txt");
    
    
    for(i = 0; i < 18; ++i) {
        key >> key_answers[i]; 
        } 
    teacher.SetMultiChoiceAns(key_answers);//The key answers read in are sent to the class Grader where the correct answers are to be stored
    
    //The 3 word answers are also sent to the class where the grading is done
    key >> key_ans_1 >> key_ans_2 >> key_ans_3;
    teacher.SetWordAns(key_ans_1, key_ans_2, key_ans_3);
    
    
    fout << "Test Results" << endl << endl;
    cout << "Test Results" << endl << endl;
        
    while(!student.eof()) { //This condition ensures the loop does not break until all the data is input from the file
        
        student >> first_name >> last_name;
    
        for(i = 0; i < 18; ++i) {
        student >> stud_answers[i];     
        }
        student >> wordans_1 >> wordans_2 >> wordans_3;
        
        //Here, the question numbers that are missed are stored into an integer array to inform the student
        for(i = 0; i < 18; ++i) {
            if(stud_answers[i] != key_answers[i]) {
                questions_missed[i] = i + 1;//This stores the question number into the array
            }
            else {
                questions_missed[i] = 0;//This makes sure no garbage numbers are stored if the answer is correct, affecting the questions missed data
            }
        }
        //Each word answer is checked as well
        if(wordans_1 != key_ans_1) {
            questions_missed[18] = 19;
        }
        else {
            questions_missed[18] = 0;
        }
        if(wordans_2 != key_ans_2) {
            questions_missed[19] = 20;
        }
        else {
            questions_missed[19] = 0;
        }
        if(wordans_3 != key_ans_3) {
            questions_missed[20] = 21;
        }
        else {
            questions_missed[20] = 0;
        }
        //Finally, the information gathered can be output to each stream for the user
        
        cout << "Student: " << first_name << " " << last_name << endl;
        cout << "Grade percentage on test: ";
        cout << teacher.CheckAnswers(stud_answers, wordans_1, wordans_2, wordans_3) << endl;
        cout << "Questions missed ";
        //A seperate file will store the information for each student by using fout
        fout << "Student: " << first_name << " " << last_name << endl;
        fout << "Grade percentage on test: ";
        fout << teacher.CheckAnswers(stud_answers, wordans_1, wordans_2, wordans_3) << endl;
        fout << "Questions missed ";
        
        for(i = 0; i < 21; ++i) {
            if(questions_missed[i] > 0 && questions_missed[i] < 22) {//This ensures only the question numbers that were missed are output from the array
                cout << questions_missed[i] << " ";
                fout << questions_missed[i] << " ";
           }
        }
        cout << endl;
        fout << endl;
        cout << endl;
        fout << endl;
    }
    
    key.close();//Each file is closed and the program is concluded
    student.close();
}

/*Output:

Test Results

Student: Christian Smith
Grade percentage on test: 0.0833333
Questions missed 1, 2, 3, 4, 6, 7, 8, 10, 11, 12, 13, 14, 17, 18, 19, 20, 21, 21.

Student: Paxton Jones
Grade percentage on test: 0.166667
Questions missed 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18, 19, 20, 21, 21.

Student: Abby Sciuto
Grade percentage on test: 0.238095
Questions missed 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21.

Student: Audrey Smithson
Grade percentage on test: -0.0357143
Questions missed 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21.

Student: Katie Holmes
Grade percentage on test: 0.119048
Questions missed 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21.

Student: Carrie Grant
Grade percentage on test: 0.380952
Questions missed 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21.



*/