//Created by: Caleb Clavin
//Created on: 10/10/2017

//Title

#include <iostream>
using namespace std;




int main() 
{
    int num_phones = 0;
    int num_tablets = 0;
    int gb_data = 0;
    
    cout << "To find the best plan, please enter the amount of phones to be used: ";
    cin >> num_phones;
    
    cout << "Enter the amount of tablets: ";
    cin >> num_tablets;
    
    cout << "Enter the amount of data to be used: ";
    cin >> gb_data;
    
    if((gb_data > 25)&&(num_phones <= 3)&&(num_tablets == 0)) {
        cout << "The best plan for you is the Sprint Unlimited.";
    }
    //It is assumed that if the user wants a specific amount of data
    else if((gb_data < 25)&&(gb_data != 2)||(gb_data != 0)){
        cout << "The best plan for you is the ATT Family Plan.";
    }
    if ((gb_data == 2)&&(num_tablets == 0)) {
        cout << "The best plan for you is the Sprint 2GB Plan.";
    }
    else if ((num_tablets > 0)&&(gb_data == 2)) {
        cout << "The best plan for you is the ATT 3GB Family Plan.";
    }
    if ((num_phones > 3)&&(gb_data > 25)) {
        cout << "The ATT Unlimited Choice plan is the best for your situation.";
    }
    
    
    
    
}