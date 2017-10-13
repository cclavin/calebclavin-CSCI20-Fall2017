//Created by: Caleb Clavin
//Created on: 10/12/2017

//This program calculates the tax 

#include <iostream>
#include <string>
using namespace std;



int main() 
{
    string name;
    char filing_status;
    double agi;
    double gross_wages;
    double tax_withheld;
    double tax_owed;
    double ex_tax_owed;
    double tax_refund;
    double extra_tax_owed;
    const int single_ded = 6350;
    const int personal_ded = 4050;
    const int married_ded = 12700;
    
    
    
    cout << "Please enter your basic tax information below." << endl;
    cout << "Enter your name with underscores in place of spaces: ";
    cin >> name; 
    
    cout << "Enter your filing status(s for single, m for married): ";
    cin >> filing_status;
    
    cout << "Enter your gross wages: ";
    cin >> gross_wages;
    
    cout << "Finally, enter the amount of tax withheld: ";
    cin >> tax_withheld;
    
    
    
    switch(filing_status) {
        case 's':
            agi = gross_wages - (single_ded + personal_ded);
            break;
        case 'm':
            agi = gross_wages - (married_ded + personal_ded);
            break;
    
    }
    
    if (filing_status == 's') {
        if (agi < 9325) {
            tax_owed = agi * 0.1;
        }
        else if (agi < 37950) {
            tax_owed = 932.50 + (0.15 * (agi - 9325));
        }
        else if (agi < 91900) {
            tax_owed = 5226.25 + (0.25 * (agi - 37950));
        }
        else if (agi < 191650) {
            tax_owed = 18713.75 + (0.28 * (agi - 91900));
        }
        else if (agi < 416700) {
            tax_owed = 46643.75 + (0.33 * (agi - 191650));
        }
        else if (agi > 416700) {
            tax_owed = 120910.25 + (0.396 * (agi - 416700));
        }
    }
    else if (filing_status == 'm') {
        if (agi < 18650) {
            tax_owed = agi * 0.1;
        }
        else if (agi < 75900) {
            tax_owed = 1865 + (0.15 * (agi - 18650));
        }
        else if (agi < 153100) {
            tax_owed = 10452.50 + (0.25 * (agi - 75900));
        }
        else if (agi < 233350) {
            tax_owed = 29752.50 + (0.28 * (agi - 153100));
        }
        else if (agi < 416700) {
            tax_owed = 52222.50 + (0.33 * (agi - 233350));
        }
        else if (agi > 416700) {
            tax_owed = 112728 + (0.396 * (agi - 470700));
        }
    }
    
    cout << "Name: " << name << endl;
    cout << "Total Gross Adjusted Income: $" << agi << endl;
    cout << "Total tax owed: $" << tax_owed << endl;
     
    if (tax_owed > tax_withheld) {
        ex_tax_owed = tax_owed - tax_withheld;
        cout << "You owe $" << ex_tax_owed << " to the IRS.";
    }
    else {
        tax_refund = tax_withheld - tax_owed;
        cout << name << " is entitled to a REFUND of $" << tax_refund << endl;
    }
    
    
   
    
    
    
    
}

/*Output:
Name: Joe_Vandal
Total Gross Adjusted Income: $1700
Total tax owed: $170
Joe_Vandal is entitled to a REFUND of $80

Name: Alfonso_Haynes
Total Gross Adjusted Income: $15601
Total tax owed: $1560.1
Alfonso_Haynes is entitled to a REFUND of $1631.9


*/