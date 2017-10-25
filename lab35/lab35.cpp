//Created by Caleb Clavin
//Created on 10/24/2017

//This program converts the temperature between Kelvin, Celsius and Fahrenheit units

#include <iostream>
using namespace std;

//This class converts temperature between kelvin, celsius, and fahrenheit
class TemperatureConverter { 
    private: 
        double kelvin_;//The class uses "kelvin_" the stored value for kelvin to convert to the other units, global scope
    public: 
        TemperatureConverter() {//The constructor stores 0 as the default in case no value is entered
            kelvin_ = 0;
        }
        TemperatureConverter(double kelvin_temp) { //A second constructor is used to store a user entered value
            if (kelvin_temp >= 0) {
            kelvin_ = kelvin_temp;
            }
        }    
        void PrintTemperatures() { //This prints kelvin and uses the get functions to convert to the various units and print them also
    
            cout << "Temperature in Kelvin: " << kelvin_ << endl;
            cout << "Temperature in Celsius: " << GetTempAsCelsius() << endl;
            cout << "Temperature in Fahrenheit: " << GetTempAsFahrenheit() << endl;
    
        } 
        double GetTempFromKelvin() {
            return kelvin_;
        }
        double GetTempAsCelsius() {
            double celsius_temp = kelvin_ - 273.15; //This function does the calculation and returns the temp in celsius
            return celsius_temp;
        }
        double GetTempAsFahrenheit() {
            double fahrenheit_temp = ((kelvin_ * 9) / 5 + 32); //This function does the calculation and returns the temp in fahrenheit
            return fahrenheit_temp;
        }
        void SetTempFromKelvin(double kelvin_temp) {
            if (kelvin_temp >= 0) {
            kelvin_ = kelvin_temp; //Sets the user entered value to kelvin_
            }
        }
        void SetTempFromCelsius(double celsius_to_kelvin) { //The function calculates the user input from celsius to kelvin
            if (celsius_to_kelvin >= -273.15) {
                kelvin_ = celsius_to_kelvin + 273.15;
            }
        }
        void SetTempFromFahrenheit(double fahrenheit_to_kelvin) { //The function calculates the user input from fahrenheit to kelvin
            if (fahrenheit_to_kelvin >= -459.67) {
                kelvin_ = (5 * (fahrenheit_to_kelvin - 32) / 9) + 273.15;
            }
        }
    
};    
/* Output:
Temperature in Kelvin: 0
Temperature in Celsius: -273.15
Temperature in Fahrenheit: 32
Temperature in Kelvin: 274
Temperature in Celsius: 0.85
Temperature in Fahrenheit: 525.2
400.15
Temperature in Kelvin: 400.15
Temperature in Celsius: 127
Temperature in Fahrenheit: 752.27
32
Temperature in Kelvin: 305.15
Temperature in Celsius: 32
Temperature in Fahrenheit: 581.27
523.67
Temperature in Kelvin: 273.15
Temperature in Celsius: 0
Temperature in Fahrenheit: 523.67