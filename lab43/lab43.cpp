//Created by: Caleb Clavin
//Created on: 11/7/2017

//Class Shopping Cart, the program is meant to mimic an online shopping cart by using a class and an array of objects.



#include <iostream>;
#include <string>;
using namepace std;


class Store { //This class represents objects as items in a store
    private:
    
    string name_;
    int inventory_;
    double price_;
    
    public:
    
    Store(string name, double price, int inventory) {//Constructors ensure there is no "garbage" stored in any of the class values
        name_ = name;
        price_ = price;
        inventory_ = inventory;
    }
    Store() {
        name_ = 0;
        price_ = 0;
        inventory_ = 0;
    }
    string GetName() { //Each accessor and mutator function can get and set values for each of the private variables
        return name_;
    }
    void SetName(string name) {
        name_ = name;
    }
    double GetPrice() {
        return price_;
    }
    void SetPrice(double price) {
        price = price_;
    }
    int GetInventory() {
        return inventory_;
    }
    void SetInventory(int inventory_count) {
        inventory_ = inventory_count;
    }
    
    
};

int main() {
    int total_price;
    int input = 0;
    Store product[10];
    
    
    //Each of the objects is defined and initialized, setting each private variable for each object
    product[0].SetName("flower");
    product[1].SetName("flour");
    product[2].SetName("puddle");
    product[3].SetName("bread");
    product[4].SetName("outlet");
    product[5].SetName("tapir");
    product[6].SetName("house");
    product[7].SetName("mouse");
    product[8].SetName("cheese");
    product[9].SetName("remote");
    
    product[0].SetInventory(5);
    product[1].SetInventory(5);
    product[2].SetInventory(5);
    product[3].SetInventory(5);
    product[4].SetInventory(5);
    product[5].SetInventory(5);
    product[6].SetInventory(5);
    product[7].SetInventory(5);
    product[8].SetInventory(5);
    product[9].SetInventory(5);
    
    product[0].SetPrice(1.5);
    product[1].SetPrice(2);
    product[2].SetPrice(3);
    product[3].SetPrice(1.3);
    product[4].SetPrice(1.7);
    product[5].SetPrice(1.8);
    product[6].SetPrice(3);
    product[7].SetPrice(5);
    product[8].SetPrice(5);
    product[9].SetPrice(2);
    
    cout << "Please choose from the options available to purchase, enter the number for the item you want: " << endl;
    cout << "0: Flower $1.5" << endl; 
    cout << "1: Flour $2" << endl; 
    cout << "2: Puddle $3" << endl; 
    cout << "3: Bread $1.3" << endl; 
    cout << "4: Outlet $1.7" << endl; 
    cout << "5: Tapir  $1.8" << endl; 
    cout << "6: House $3" << endl; 
    cout << "7: Mouse $5" << endl; 
    cout << "8: Cheese $5" << endl; 
    cout << "9: Remote $2" << endl; 
    cout << "Enter -1 to quit" << endl;
    
    //I am unable to run because of the error but I am trying to loop the input so that each time the user enters a number, the price is added, and the inventory is updated.
    while(input != -1) {
        cin >> input;
       total_price += product[input].GetPrice();
       product[input].SetInventory(product[input]GetInventory() - 1);
    }
       
       
     
    
    



//Continually get this error "10:7: error: expected nested-name-specifier before ‘namepace’
// using namepace std;" Not sure what causes it.
    
    
}