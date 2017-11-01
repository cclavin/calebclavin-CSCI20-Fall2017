//Created by: Caleb Clavin
//Created on: 10/31/2017

//Title

#include <iostream>
using namespace std;

class ArrayTools {
    private:
    int N;
    int my_array[10];
    
    
    public:
    ArrayTools() {
        
    }
    ArrayTools(int array[], int size) {
        for (int i = 0; i < size; ++i) {
            my_array[i] = array[i];
        }
        N = size;
    }
        
    
    void Print() {
        for (int i = 0; i <= N; ++i) {
            cout << my_array[i] << " ";
        }
        cout << endl;
    }
    int Find_min(int size_1, int size_2) {
        int min_val;
        for (size_1 = 0; size_1 < size_2; ++size_1) {
            my_array[size_1]; //FIXME
           if (my_array[size_1] < min_val) {
               min_val = my_array[size_1];
           }
        }
        return min_val;
    }
    int Find_max(int size_1, int size_2) {
        int max_val;
        for (int i = 0; i <= N; ++i) {
            if (my_array[i] > max_val)
        }
    }
    int Find_sum() {
        for (int i = 0; i <= N; ++i) {
            int sum_val = 0;
          sum_val = sum_val + my_array[i];
          return sum_val;
        }
    }
    int Num_even_odd();
    int Search(int search_val) {//FIXME
        /*for (my_array[search_val]) {
            
        }*/
    }
    void Is_sorted();
};

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    /*cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    */
    return 0;
}

/*
https://learn.zybooks.com/zybook/BUTTECSCI20BrowneFall2017/chapter/19/section/2?content_resource_id=6760369
https://butteedu-my.sharepoint.com/personal/cclavin001_student_butte_edu/_layouts/15/WopiFrame.aspx?sourcedoc={6a4358d7-241b-46f4-bc56-a2bd8d874f21}&action=edit&wdPreviousSession=83c6f519-7676-479a-afdc-17892310cbf9
https://canvas.butte.edu/courses/7700/assignments/89613?module_item_id=193836



*/