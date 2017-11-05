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
   
    
    int num_scoops;
    
    cout << "How many scoops are you purchasing today? "; //I got an error without finding how many elements will be in the input array so I included this input. The error is at the bottom.
    cin >> num_scoops;
    
    cout << "Enter the number for the flavor you want to add 1 scoop to your cart. " << endl;
    
    for(i = 0; i < num_scoops; ++i) {
        int order = 0;
        
        cin >> shopping_cart[i]; //The user enters their purchases into this array
        
        order = shopping_cart[i] - 1;//order is the variable that contains the number element that the user wants to purchase
        
        inventory[order] -= 1;
        total_cost += prices[order];
        cout << "Your total cost is: $" << total_cost << endl;
        
        if(inventory[order] <= 0) {//If the inventory reaches 0, the user will be unable to reduce the inventory
            inventory[order] = 0;
            cout << flavor[order] << " is now out of scoops...";
        }
    }
    //This loop outputs the flavors that were purchased for the user
        cout << "You purchased: ";
        for(i = 0; i < num_scoops; ++i) {
            int order;
            order = shopping_cart[i] - 1;
            cout << flavor[order] << ", ";
        }

    
    
    
    
    
    
    
    
}
//Error from input: bash: line 12: 22940 Segmentation fault      $file.o $args
//I get the error above because of some memory issue with inputting into shopping_cart[i], specifically when I entered -1 to end the loop. Any advice on the error would be appreciated.
//Otherwise, the code would output the total price and the flavors that were purchased once finished shopping. Inside of the for loop gathering input,I said if the user enters -1 then the loop will break.


/*Output:
Pick an IceCream flavor!
~~~~~~~~~~~~~~~~~~~~~~~~
1: Chocolate $1
2: Vanilla $2
3: Orange $1
4: Rocky_Road $3
5: Cherry $1
6: Coffee $1
7: Neopolitan $1
8: Brownie $3
9: Raspberry $2
10: Soy $1

How many scoops are you purchasing today? 6
Enter the number for the flavor you want to add 1 scoop to your cart. 
1
Your total cost is: $1
3
Your total cost is: $2
4
Your total cost is: $5
2
Your total cost is: $7
6
Your total cost is: $8
5
Your total cost is: $9
You purchased: Chocolate, Orange, Rocky_Road, Vanilla, Coffee, Cherry, 

*/