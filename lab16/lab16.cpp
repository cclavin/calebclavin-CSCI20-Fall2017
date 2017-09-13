//Created by: Caleb Clavin
//Created on: 09/12/2017

// Stock Value Calculator: This program calculates the value of multiple stocks based on the user-given input.

#include <iostream>
#include <string>
using namespace std;

struct stock_portfolio  //The struct used represents a stock portfolio and contains variables that pertain to individual stock.
{
    string stock_name;
    string sector;
    double current_share_price;
    int num_shares_own;
    double total_portfolio;
    
};

int main()
{
//The objects are defined here and the values do not matter as they will be input later.
    
    stock_portfolio portfolioA;
    portfolioA.stock_name = "Enter";
    portfolioA.sector = "A";
    portfolioA.current_share_price = 0.0;
    portfolioA.num_shares_own = 0;
    portfolioA.total_portfolio = 0.0;
    
    stock_portfolio portfolioB;
    portfolioB.stock_name = "Enter";
    portfolioB.sector = "A";
    portfolioB.current_share_price = 0.0;
    portfolioB.num_shares_own = 0;
    portfolioB.total_portfolio = 0.0;
    
    stock_portfolio portfolioC;
    portfolioC.stock_name = "Enter";
    portfolioC.sector = "A";
    portfolioC.current_share_price = 0.0;
    portfolioC.num_shares_own = 0;
    portfolioC.total_portfolio = 0.0;
    
    stock_portfolio portfolioD;
    portfolioD.stock_name = "Enter";
    portfolioD.sector = "A";
    portfolioD.current_share_price = 0.0;
    portfolioD.num_shares_own = 0;
    portfolioD.total_portfolio = 0.0;
    
//The following essentially attains all the necessary information from the user through input for each object
    
    cout << "Enter the following information for portfolio A..." << endl;
    cout << "Stock name: ";
    cin >> portfolioA.stock_name;
    cout << "Stock sector: ";
    cin >> portfolioA.sector;
    cout << "Current stock value: ";
    cin >> portfolioA.current_share_price;
    cout << "Number of shares owned: ";
    cin >> portfolioA.num_shares_own;
    cout << endl;
    
    cout << "Enter the following information for portfolio B..." << endl;
    cout << "Stock name: ";
    cin >> portfolioB.stock_name;
    cout << "Stock sector: ";
    cin >> portfolioB.sector;
    cout << "Current stock value: ";
    cin >> portfolioB.current_share_price;
    cout << "Number of shares owned: ";
    cin >> portfolioB.num_shares_own;
    cout << endl;
    
     cout << "Enter the following information for portfolio C..." << endl;
    cout << "Stock name: ";
    cin >> portfolioC.stock_name;
    cout << "Stock sector: ";
    cin >> portfolioC.sector;
    cout << "Current stock value: ";
    cin >> portfolioC.current_share_price;
    cout << "Number of shares owned: ";
    cin >> portfolioC.num_shares_own;
    cout << endl;
    
     cout << "Enter the following information for portfolio D ..." << endl;
    cout << "Stock name: ";
    cin >> portfolioD.stock_name;
    cout << "Stock sector: ";
    cin >> portfolioD.sector;
    cout << "Current stock value: ";
    cin >> portfolioD.current_share_price;
    cout << "Number of shares owned: ";
    cin >> portfolioD.num_shares_own;
    cout << endl;
    
  
    portfolioA.total_portfolio = portfolioA.current_share_price * static_cast<double>(portfolioA.num_shares_own);       //This code performs the calculations for each of the object to find
    portfolioB.total_portfolio = portfolioB.current_share_price * static_cast<double>(portfolioB.num_shares_own);       // the total value.
    portfolioC.total_portfolio = portfolioC.current_share_price * static_cast<double>(portfolioC.num_shares_own);      
    portfolioD.total_portfolio = portfolioD.current_share_price * static_cast<double>(portfolioD.num_shares_own);
    
// The section below outputs each object and the values assigned to the each of the struct variables.
    
    cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
    cout << "----------    ------------   -------------   -----------" << endl;
    cout << portfolioA.stock_name << "    " << portfolioA.num_shares_own << "    ";
    cout << portfolioA.current_share_price << "    " << portfolioA.total_portfolio << endl;
    cout << "Total Portfolio: $" << portfolioA.total_portfolio << endl;
    cout << endl;
    
    cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
    cout << "----------    ------------   -------------   -----------" << endl;
    cout << portfolioB.stock_name << "    " << portfolioB.num_shares_own << "    ";
    cout << portfolioB.current_share_price << "    " << portfolioB.total_portfolio << endl;
    cout << "Total Portfolio: $" << portfolioB.total_portfolio << endl;
    cout << endl;
    
    cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
    cout << "----------    ------------   -------------   -----------" << endl;
    cout << portfolioC.stock_name << "    " << portfolioC.num_shares_own << "    ";
    cout << portfolioC.current_share_price << "    " << portfolioC.total_portfolio << endl;
    cout << "Total Portfolio: $" << portfolioC.total_portfolio << endl;
    cout << endl;
    
    cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
    cout << "----------    ------------   -------------   -----------" << endl;
    cout << portfolioD.stock_name << "    " << portfolioD.num_shares_own << "    ";
    cout << portfolioD.current_share_price << "    " << portfolioD.total_portfolio << endl;
    cout << "Total Portfolio: $" << portfolioD.total_portfolio << endl;
    cout << endl;
    
     /*  
     
Output:

Stock Name    No of Shares   Current Value   Total Value
----------    ------------   -------------   -----------
FordM    87    18.76    1632.12
Total Portfolio: $1632.12

Stock Name    No of Shares   Current Value   Total Value
----------    ------------   -------------   -----------
Albertsn    542    34.39    18639.4
Total Portfolio: $18639.4

Stock Name    No of Shares   Current Value   Total Value
----------    ------------   -------------   -----------
AAPL    5    145.91    729.55
Total Portfolio: $729.55

Stock Name    No of Shares   Current Value   Total Value
----------    ------------   -------------   -----------
TSLA    50    375.64    18782
Total Portfolio: $18782

Stock Name    No of Shares   Current Value   Total Value
----------    ------------   -------------   -----------
WFC    1368    53.02    72531.4
Total Portfolio: $72531.4

Stock Name    No of Shares   Current Value   Total Value
----------    ------------   -------------   -----------
MSFT    99    74.68    7393.32
Total Portfolio: $7393.32
   
    */
    
}