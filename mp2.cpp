#include "mp2.h"
#include <iostream>

using namespace std;

Fraction::Fraction() : numerator{0}, denominator{1} {}
Fraction::Fraction(int x) : numerator{x}, denominator{1} {}
Fraction::Fraction(double x) : numerator{x*1000}, denominator{1000} {}
Fraction::Fraction(int x, int y) : numerator{x}, denominator{y} {}

void Fraction::input(){
    cout << "Enter the numerator for this fraction: ";
    cin >> numerator;
    cout << "Enter the denominator for this fraction: ";
    cin >> denominator;
    
    if(denominator == 0){
        cout << "Sorry, a fraction with 0 as a denominator is undefined, please try again." << '\n';
        input();
    }
}

void Fraction::printFraction(){
    if(denominator != 1)
        cout << numerator << '/' << denominator << '\n';
    else {
        cout << numerator << '\n';
    }
}

Fraction Fraction::addFraction(Fraction working){
    int x{};
    int y{denominator};
    if(working.denominator == denominator)
        x = working.numerator + numerator;
    else {
        y *= working.denominator;
        x = (working.denominator * numerator) + (denominator * working.numerator);
    }
    Fraction addFraction(x,y);
    
    return addFraction;
}

Fraction Fraction::subFraction(Fraction working){
    int x{};
    int y{denominator};
    if(working.denominator == denominator)
        x = numerator - working.numerator;
}

Fraction Fraction::multiplyFraction(Fraction working){
    
}

Fraction Fraction::divideFraction(Fraction working){
    
}

void Fraction::addReplace(Fraction fractionOne, Fraction fractionTwo){
    
}

void Fraction::subReplace(Fraction fractionOne, Fraction fractionTwo){
    
}

void Fraction::multiplyReplace(Fraction fractionOne, Fraction fractionTwo){
    
}

void Fraction::divideReplace(Fraction fractionOne, Fraction fractionTwo){
    
}
