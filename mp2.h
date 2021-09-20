#include <iostream>
#ifndef MP2_H
#define MP2_H

class Fraction{
    public:
    Fraction();
    Fraction(int x);
    Fraction(double x);
    Fraction(int x, int y);
    
    private:
    int numerator;
    int denominator;
    
    public:
	void input();
	void printFraction();
	
	Fraction addFraction(Fraction);
	Fraction subFraction(Fraction);
	Fraction multiplyFraction(Fraction);
	Fraction divideFraction(Fraction);
	
	void addReplace(Fraction, Fraction);
	void subReplace(Fraction, Fraction);
	void multiplyReplace(Fraction, Fraction);
	void divideReplace(Fraction, Fraction);
};

#endif 


