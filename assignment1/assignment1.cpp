//Created by: Caleb Clavin
//Created on: 09/13/2017

//This program calculates a frozen yogurt purchase and outputs a reciept based on user input

#include <iostream>
using namespace std;

//The struct is used to group the varying variables in case multiple purchases need to be calculated.

struct yogurt_purchase
{
    double yogurt_oz;
    int num_toppings;
    double coupon;
    double tip;
    double total_cost;
    double gross_cost;
    double total$_yogurt;
    double total$_toppings;
    
    
};

int main()
{
    const double cup_oz = 0.25;
    const double sales_tax = 0.0725;   //The constant values are initialized as variables to simplify the code
    const double price_per_oz = 0.17;
    const double price_per_topping = 0.50;
   
   //I initialized an object in case more purchases need to be added, in which they can be added as other objects
   
    yogurt_purchase purchaseA;
    purchaseA.yogurt_oz = 0.0;
    purchaseA.num_toppings = 0;
    purchaseA.coupon = 0.0;
    purchaseA.tip = 0.0;
    purchaseA.gross_cost = 0.0;
    purchaseA.total$_yogurt = 0.0;
   
   //This section gathers the needed information from the user through input
   
    cout << "Enter the amount of yogurt in ounces: ";
    cin >> purchaseA.yogurt_oz;
    
    cout << "Enter the total number of toppings: ";
    cin >> purchaseA.num_toppings;
    
    cout << "Enter the percent discount on coupon if any: ";
    cin >> purchaseA.coupon;
    
    cout << "Enter amount of tip given in dollars if any: ";
    cin >> purchaseA.tip;
    
    //The calculations are done below, there are a few variables introduced to simplify the process and make it easier to follow.
    
    purchaseA.total$_yogurt = price_per_oz * (purchaseA.yogurt_oz - cup_oz);
    purchaseA.total$_toppings = static_cast<double>(purchaseA.num_toppings) * price_per_topping;
    purchaseA.gross_cost = purchaseA.total$_yogurt + purchaseA.total$_toppings;
    purchaseA.total_cost = purchaseA.gross_cost - (purchaseA.gross_cost * (purchaseA.coupon / 100));
    purchaseA.total_cost = purchaseA.total_cost + (purchaseA.total_cost * sales_tax) + purchaseA.tip;
    
    cout << endl;
    
    //Finally the receipt is output with the needed information
    
    cout << " -----------Receipt-----------" << endl;
    cout << "Ounces of yogurt: " << purchaseA.yogurt_oz << " ----$" << purchaseA.total$_yogurt << endl;
    cout << "Toppings: " << purchaseA.num_toppings << " ------------$" << purchaseA.total$_toppings << endl;
    cout << "Discounts: --------------" << purchaseA.coupon << "%\ off" <<endl;
    cout << "Sales tax: 7.25\% ----- $" << purchaseA.gross_cost * sales_tax << endl;
    cout << "Tips: ---------------- $" << purchaseA.tip << endl;
    cout << endl;
    cout << "Total Price:---------$" << purchaseA.total_cost;
    cout << endl;
    cout << "You saved: $" << purchaseA.gross_cost * (purchaseA.coupon / 100) << "!!!";
    
    
    
/* Output:
A.
-----------Receipt-----------
Ounces of yogurt: 4 ----$0.6375
Toppings: 1 ------------$0.5
Discounts: --------------15% off
Sales tax: 7.25% ----- $0.0824688
Tips: ---------------- $0.25

Total Price:---------$1.28697
You saved: $0.170625!!!

B.
-----------Receipt-----------
Ounces of yogurt: 16 ----$2.6775
Toppings: 7 ------------$3.5
Discounts: --------------0% off 
Sales tax: 7.25% ----- $0.447869
Tips: ---------------- $0

Total Price:---------$6.62537
You saved: $0!!!

C.
-----------Receipt-----------
Ounces of yogurt: 32 ----$5.3975
Toppings: 4 ------------$2
Discounts: --------------25% off
Sales tax: 7.25% ----- $0.536319
Tips: ---------------- $0.5

Total Price:---------$6.45036
You saved: $1.84937!!!

D.
 -----------Receipt-----------
Ounces of yogurt: 14 ----$2.3375
Toppings: 10 ------------$5
Discounts: --------------50% off
Sales tax: 7.25% ----- $0.531969
Tips: ---------------- $1

Total Price:---------$4.93473
You saved: $3.66875!!!



    
*/   
}