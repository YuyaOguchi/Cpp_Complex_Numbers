//
//  ComplexNumber.cpp
//  Ch2Project2
//
//  Created by Ian Richard and Yuya Oguchi
//
//

#include "ComplexNumber.hpp"

ComplexNumber::ComplexNumber(const double &real_e,const double &imag_e) {
    real=real_e;
    imag=imag_e;
}
ComplexNumber::ComplexNumber() {
    real=0;
    imag=0;
}
double ComplexNumber::Re() {
    return real;
}
double ComplexNumber::Im() {
    return imag;
}
void ComplexNumber::setRe(const double &entry) {
    real=entry;
    
    return;
}
void ComplexNumber::setIm(const double& entry) {
    imag=entry;
    
    return;
}
ComplexNumber operator+(ComplexNumber& first,  ComplexNumber& second) {
    ComplexNumber c;
    
    c.setRe(first.Re()+second.Re());
    c.setIm(first.Im()+second.Im());
    
    return c;
}
ComplexNumber operator*( ComplexNumber& first,  ComplexNumber& second) {
    ComplexNumber c;
    
    double newRe=(first.Re()*second.Re())-(first.Im()*second.Im());
    double newIm=(first.Re()*second.Im())+(first.Im()*second.Re());
    
    c.setRe(newRe);
    c.setIm(newIm);
    
    return c;
}
std::istream &operator>>(std::istream &input, ComplexNumber &object) {
    double newre;double newIm;
    
    input >>newre >>newIm;
    
    object.setRe(newre);
    object.setIm(newIm);
    
    return input;
}
std::ostream &operator<<(std::ostream &output, ComplexNumber &object) {
    output <<object.Re() <<"+" <<object.Im() <<"i" <<std::endl;
    
    return output;
}


