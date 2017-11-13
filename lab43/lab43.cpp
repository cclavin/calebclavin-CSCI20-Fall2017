//Created by: Caleb Clavin
//Created on: 11/7/2017

//Title/description

//FIXME: Everything

#include <iostream>
#include <string>
using namepace std;

class Store { //Functions
    private:
    
    string name_[10];
    double price_;
    int inventory_;
    
    public:
    
    ShoppingCart(string name, double price, int inventory) {
        name_ = name;
        price_ = price;
        inventory_ = inventory;
    }
    ShoppingCart() {
        name_ = 0;
        price_ = 0;
        inventory_ = 0;
    }
    string GetName() {
        
    }
    void SetName(string name) {
        
    }
    double GetPrice() {
        
    }
    void SetPrice(double price) {
        
    }
    int GetInventory() {
        
    }
    void SetInventory(int inventory_count) {
        
    }
    
}