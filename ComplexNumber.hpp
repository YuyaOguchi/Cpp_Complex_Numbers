//
//  ComplexNumber.hpp
//  Ch2Project2
//
//  Created by Ian Richard and Yuya Oguchi
//
//

#ifndef ComplexNumber_hpp
#define ComplexNumber_hpp


#include <stdio.h>
#include <iostream>

class ComplexNumber {
public:
    //Constructor
    ComplexNumber(const double &real_e,const double &imag_e);
    ComplexNumber();
    //Member functions
    double Re();
    //Precondition:none
    //Postcondition:returns real part of complex #
    double Im();
    //Precondition:none
    //Postcondition:returns imaginary part of complex #
    void setRe(const double& entry);
    //Precondition:none
    //Postcondition:sets real part of complex #
    void setIm(const double& entry);
    //Precondition:none
    //Postcondition:sets imaginary part of complex #


private:
    //Private member variables
    double real;
    double imag;
};
//Add operator
ComplexNumber operator+( ComplexNumber& first,  ComplexNumber& second);
//Multiply operator
ComplexNumber operator*( ComplexNumber& first,  ComplexNumber& second);

//Output operator
std::ostream &operator<<(std::ostream &output, ComplexNumber &object);
//Input operator
std::istream &operator>>(std::istream &input, ComplexNumber &object);
#endif /* ComplexNumber_hpp */
