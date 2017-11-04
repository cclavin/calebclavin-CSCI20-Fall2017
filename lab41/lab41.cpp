//Created by: Caleb Clavin
//Created on: 10/31/2017

//Single Array - This program analyzes the elements entered into the array and determines the min, max, sum, if its sorted and how many even and odd numbers there are.

#include <iostream>
using namespace std;
//The class contains all the functions to modify each array object created
class ArrayTools {
    private:
    int N;
    int my_array[10]; 
    
    
    public:
    ArrayTools() { //The constructor is used to initialize the private variables upon object creation
        N = 0;
        my_array[0] = 0;
    }
    ArrayTools(int array[], int size) { //A user can enter the array data with the overload constructor
        for (int i = 0; i < size; ++i) {
            my_array[i] = array[i];
        }
        N = size;
    }
        
    
    void Print() {//The print function prints each element of the arrray
        for (int i = 0; i < N; ++i) {
            cout << my_array[i] << " ";
        }
        cout << endl;
    }
    int Find_min(int size_1, int size_2) {//Finds the minimum element
        int min_val = my_array[size_1];
        for (size_1; size_1 < size_2; ++size_1) {
            if (my_array[size_1] < min_val) {
               min_val = my_array[size_1];
           }
        }
        return min_val;
    }
    int Find_max(int size_1, int size_2) {//Finds the maximum element
        int max_val = my_array[size_1];
        for (size_1; size_1 < size_2; ++size_1) {
            if (my_array[size_1] >= max_val) {
                max_val = my_array[size_1];
            }
        }
        return max_val;
    }
    
      
   
    int Find_sum() {//Finds the sum of all elements
        int sum_val = 0;
        int i;
        for (i = 0; i < N; ++i) {
          sum_val = sum_val + my_array[i];
        }
        return sum_val;
    }
    int Num_even_odd() {//Counts how many odd and even elements there are
        int sum_even = 0;
        int sum_odd = 0;
        int i;
        for(i = 0; i < N; ++i) {
            if((my_array[i] % 2) == 0) {
                sum_even += 1;
                
            }
            else {
                sum_odd += 1;
            }
        }
        cout << "Number of even: " << sum_even << endl;//By using void for this function, I was unable to use "<<" so I had to use an int.
        return sum_odd;
        
    }
    int Search(int search_val) {//This function searches for a user entered value within the array
        int i;
        bool search = false;
        
        for(i = 0; i < N; ++i) {
            if(search_val == my_array[i]) {
                return i;
                break;
            }
        }
        return -1;
    }
    string Is_sorted() {//Determines if the elements of the array are sorted in an ascending direction
        int i;
        bool sorted;
        for(i = 0; i < N - 1; ++i) {
            if(my_array[i + 1] > my_array[i]) {
                sorted = true;
            }
            else {
                return "Nope...not sorted.";
            }
        
            
        }
        if(sorted) {
            return "Yes, it's sorted.";
        }
    }
};

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    cout << "Enter 10 numbers..." << endl;
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout << "Search 10: "<< a.Search(10)<<endl;
    cout << a.Is_sorted() << endl;
    cout << "Number of odd: " << a.Num_even_odd() << endl;
    
   
    return 0;
}

/*
Output:

Enter 10 numbers...
1
2
3
4
5
6
7
8
9
10
1 2 3 4 5 6 7 8 9 10 
Min: 1
Max: 10
Sum = 55
Search 10: 9
Yes, it's sorted.
Number of even: 5
Number of odd: 5


*/