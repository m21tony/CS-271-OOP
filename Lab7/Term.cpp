// CS 271
// Term.cpp
// Antonio Maldonado
// October 29, 2017
// Function definitions for Term.h

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Term.h"

using namespace std;

// Let's write the >> operator
istream& operator>> (istream & in, Term & y) {
    
    char var;
    return (in >> y.coefficient >> var >> y.exponent);
    
} //end istream


// Let's write the << operator
ostream& operator<< (ostream & out, const Term & x) {
    
    return (out << x.coefficient << "x^" << x.exponent);

} //end ostream


// Let's write the + operator
Term Term::operator+ (const Term & a) const {
    
    Term b;
    
    if(exponent == a.exponent) {
        
        b.coefficient = coefficient + a.coefficient;
        b.exponent = a.exponent;
        
    } //end if
    
    return b;
    
} //end operator+


// Let's write the - operator
Term Term::operator- (const Term & s) const {
    
    Term t;
    
    if(exponent == s.exponent) {
        
        t.coefficient = coefficient - s.coefficient;
        t.exponent = s.exponent;
    }
    
    return t;
    
} //end operator-


// Let's write the * operator
Term Term::operator* (const Term & m) const {
    
    Term n;
    
    n.exponent = exponent + m.exponent;
    n.coefficient = coefficient * m.coefficient;
    
    return n;
    
} //end operator*
        

Term::Term(int coef, int exp) {
    
    setCoefficient(coef) ;
    setExponent(exp);
    
} //end constructor


void Term::setCoefficient (int c) {
    
    coefficient = c;
    
} //end setCoefficient


void Term::setExponent (int e) {
    
    exponent = e;
    
} //end setExponent


int Term::getCoefficient () const {
    
    return coefficient;
    
} //end getCoefficient


int Term::getExponent () const {
    
    return exponent;
    
} //end getExponent

