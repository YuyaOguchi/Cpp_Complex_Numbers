//
//  main.cpp
//  ch2project2
//
//  Created by Ian Richard and Yuya Oguchi
//
//

#include <iostream>

#include "ComplexNumber.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    ComplexNumber c1;
    ComplexNumber c2(1.0,2.0);
    
    c1.setRe(3.0);
    ComplexNumber c3;
    c3=c1+c2;
    
    std::cout <<c1 <<std::endl;
    std::cout <<c2 <<std::endl;
    std::cout <<c3 <<std::endl;

    ComplexNumber c;
    std::cout <<"Construct Complex Number: Enter a real number, press enter, then repeat for imagninary number" <<std::endl;
    std::cin >>c;
    std::cout <<"C:" <<c <<std::endl;
    
    ComplexNumber d;
    std::cout <<"Construct Complex Number 2: Enter a real number, press enter, then repeat for imagninary number" <<std::endl;
    std::cin >>d;
    std::cout <<"D:" <<d <<std::endl;
    
    std::cout <<"Multiplying..." <<std::endl;
    ComplexNumber e;
    e=c*d;
    std::cout <<"Multiplied:" <<e <<std::endl;
    
    std::cout <<"Adding..." <<std::endl;
    ComplexNumber f;
    f=c+d;
    std::cout <<"Added:" <<f <<std::endl;
    
    
    return 0;

}
