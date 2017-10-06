//Created by: Caleb Clavin
//Created on: 10/5/2017

//This program takes input for the dimensions of a cylindrical well and outputs the amount 
//of gallons it can store and wether that is enough for a family of four or not.

#include <iostream>
using namespace std;

class Well { //This class represents the data of a cylindrical well, it allows for other wells to be added as objects using the variables and functions given below.
    
    private:
        int radius_in_;
        int depth_ft_;
        double volume_gal_;
        double volume_ft_;
        const double pi_value_ = 22.0 / 7.0;        
        const double gallon_per_cubicft = 7.48052;
        
    
    
    public: 
        void SetWellRadius(int radius_in_inches);
        void SetWellDepth(int depth_in_feet);
        void print();
        double GetWellRadius();
        double GetWellDepth();
        double WellVolumeCalculation(int radius_in_, int depth_ft_);
        double CubicFeetToGallons(double volume_ft);
    
};
//The below two functions can be used to store a value into the two private variables below for a particular object.
void Well::SetWellRadius(int radius_in_inches) {
    radius_in_= radius_in_inches;
    return;
}

void Well::SetWellDepth(int depth_in_feet) {
    depth_ft_ = depth_in_feet;
    return;
}

double Well::GetWellRadius() { //Now that the variables have been set, the get functions can access the stored value given the
}                               // particular object, the return is used to simply print the stored value.
    return radius_in_;

double Well::GetWellDepth() {
    return depth_ft_;
}
//This function converts inches to feet and determines the total volume of the well in cubic feet, it uses the constant variable defined in the class.
double Well::WellVolumeCalculation(int radius_in_, int depth_ft_) {
    volume_ft_ = pi_value_ * (static_cast<double>(radius_in_) / 12.0) * (static_cast<double>(radius_in_) / 12.0 ) * static_cast<double>(depth_ft_);
    return volume_ft_;
}

//Now the volume is converted from cubic feet to gallons to be more understandable.
double Well::CubicFeetToGallons(double volume_ft_) {
    volume_gal_ = volume_ft_ * gallon_per_cubicft;
    return volume_gal_;
}
//The print function uses the private variables and can print the results for each object. 
//It also uses if/else to tell the user if it holds enough for a family of 4.
void Well::print() {
    cout << "A " << depth_ft_ << " foot well full of water with a radius of ";
    cout << radius_in_ << " inches for the casing stores about " << volume_gal_;
    cout << " gallons of water - ";
    if (volume_gal_ > 250) {
        cout << "a sufficient amount for a family of 4 with no need to install an extra tank." << endl;
    }
    else {
        cout << "this will not be enough for a family of 4, an extra tank is needed." << endl;
    }
}

int main() 
{
    int well_depth = 0;
    int well_radius = 0;
    double volume_in_ft = 0.0;
    int volume_in_gal = 0;
    
    Well well_1; //Though only one object is used with multiple runs in this program, more can be added easily thanks to the class definition.
    
    //The user input is gatherd below and the get and set functions are used to ensure the value was stored.
    cout << "Please enter the radius of the well in inches: ";
    cin >> well_radius;
    well_1.SetWellRadius(well_radius);
    cout << "This is what you entered: " << well_1.GetWellRadius() << endl;
    cout << "Please enter the depth of the well in feet: ";
    cin >> well_depth;
    well_1.SetWellDepth(well_depth);
    cout << "This is what you entered: " << well_1.GetWellDepth() << endl;
    
   
    //Now the calculation, conversion and print functions are called resulting in the output in comments below.
    volume_in_ft = well_1.WellVolumeCalculation(well_radius, well_depth);
    
    volume_in_gal = well_1.CubicFeetToGallons(volume_in_ft);
    
    well_1.print();
}

/*
Output:
Please enter the radius of the well in inches: 80
This is what you entered: 80
Please enter the depth of the well in feet: 464
This is what you entered: 464
A 464 foot well full of water with a radius of 80 inches for the casing stores about 484833 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 67
This is what you entered: 67
Please enter the depth of the well in feet: 382
This is what you entered: 382
A 382 foot well full of water with a radius of 67 inches for the casing stores about 279967 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 456
This is what you entered: 456
Please enter the depth of the well in feet: 153
This is what you entered: 153
A 153 foot well full of water with a radius of 456 inches for the casing stores about 5.19416e+06 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 75
This is what you entered: 75
Please enter the depth of the well in feet: 366
This is what you entered: 366
A 366 foot well full of water with a radius of 75 inches for the casing stores about 336122 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 11
This is what you entered: 11
Please enter the depth of the well in feet: 333
This is what you entered: 333
A 333 foot well full of water with a radius of 11 inches for the casing stores about 6578.45 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 8
This is what you entered: 8
Please enter the depth of the well in feet: 205
This is what you entered: 205
A 205 foot well full of water with a radius of 8 inches for the casing stores about 2142.04 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 10
This is what you entered: 10
Please enter the depth of the well in feet: 83
This is what you entered: 83
A 83 foot well full of water with a radius of 10 inches for the casing stores about 1355.1 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 31
This is what you entered: 31
Please enter the depth of the well in feet: 98
This is what you entered: 98
A 98 foot well full of water with a radius of 31 inches for the casing stores about 15376 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 56
This is what you entered: 56
Please enter the depth of the well in feet: 261
This is what you entered: 261
A 261 foot well full of water with a radius of 56 inches for the casing stores about 133632 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.

Please enter the radius of the well in inches: 28
This is what you entered: 28
Please enter the depth of the well in feet: 109
This is what you entered: 109
A 109 foot well full of water with a radius of 28 inches for the casing stores about 13952 gallons of water - a sufficient amount for a family of 4 with no need to install an extra tank.



*/