#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Compute Sphere uses the equation to calculate the volume of a sphere based on radius.
   Input: Accepts a single integer for radius.
   Output: None */
void ComputeSphere(int);

void ComputeBox(int, int, int);

void ComputePyramid(int, int);

int main()
{
    int length = 1;
    int width = 1;
    int height = 1;
//The functions are called here
    ComputeSphere(length);
    ComputeBox(length, width, height);
    ComputePyramid(length, height);
//only one input is needed
    cin>>length>>width>>height;
    //The functions are called here
    ComputeSphere(length);
    ComputeBox(length, width, height);
    ComputePyramid(length, height);
}
/*
The function below finds the volume of the sphere
Input:length
output: volume
*/
void ComputeSphere(int l){
    double v = (4.0/3) * 3.14 * (l * l * l);
    cout<<"The volume of a sphere is "<<v<<endl;
}
/*The function below finds the volume of a box
input: length width and height
output volume
*/
void ComputeBox(int l, int w, int h){
    double v = l * w * h;
    cout<<"The volume of a rectangular box is "<<v<<endl;
}
/*The function finds the volume of a pyramid
input: length and height are input
output: the volume is output
*/
void ComputePyramid(int l, int h){
    double v = (1.0/3) * l * h;
    cout<<"The volume of a pyramid is "<<v<<endl;
} 

//Appropriately comment all of the functions.  Make a note to identify the paramters and input.
//Comment the main function as if it was pseudocode.
//   make note of where the functions are called and the arguments.
