//Created by: Caleb Clavin
//Created on: 11/2/2017

//IceCream Menu-This program simulates a shopping cart by allowing the user to enter what they want and then displaying the total once finished

#include <iostream>
#include <string>
using namespace std;

int main() {
   
    
    int i = 0;
    const int N = 10;
    int shopping_cart[10];
    bool shopping = true;
    int total_cost = 0;
    string flavor_choice;
    
    string flavor[N] = {"Chocolate", "Vanilla", "Orange", "Rocky_Road", "Cherry", "Coffee", "Neopolitan", "Brownie", "Raspberry", "Soy"}; //The data are entered into parallel strings, the elements coincide with eachother
    int prices[N] = {1, 2, 1, 3, 1, 1, 1, 3, 2, 1};
    
    int inventory[N];
    for(i = 0; i < N; ++i) {//This loop assigns every element with an inventory of 5
       inventory[i] = 5;
    }
    
    
    
    cout << "Pick an IceCream flavor!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
    for(i = 0; i < N; ++i) {
        cout << i + 1 << ": " << flavor[i] << " $";//The menu is output here with numbers for the user to choose
        cout << prices[i] << endl;
    }  
    cout << "Enter the number for the flavor you want to add 1 scoop to your cart. " << endl;
    cout << "Enter -1 to complete your purchase: " << endl;
    
    
    
    
    for(i = 0; i < N; ++i) {
        int order = 0;
        
        cin >> shopping_cart[i]; //The user enters their purchases into this array
        
        if(shopping_cart[i] == -1) {//The idea here is to loop into displaying the user's choices and the total cost
            cout << "You purchased: ";
            for(i = 0; i < N; ++i) {
                order = shopping_cart[i] - 1;
                cout << flavor[order] << ", ";
                
            }
            cout << "Your total cost is: $" << total_cost << endl;
        }
    
        
        order = shopping_cart[i] - 1;//order is the variable that contains the number element that the user wants to purchase
        
        inventory[order] -= 1;
        total_cost += prices[order];
        
        if(inventory[order] <= 0) {//If the inventory reaches 0, the user will be unable to reduce the inventory
            inventory[order] = 0;
            cout << flavor[order] << " is now out of scoops...";
        }
        
        
        
    }
    
    
    
    
    
    
    
}
//Output: bash: line 12: 22940 Segmentation fault      $file.o $args
//I get the error above because of some memory issue with inputting into shopping_cart, specifically when I enter -1 to end the loop. Any advice on the error would be appreciated.
//Otherwise, the code would output the total price and the flavors that were purchased once finished shopping.
//https://canvas.butte.edu/courses/7700/assignments/89616?module_item_id=193840