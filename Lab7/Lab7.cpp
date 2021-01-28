// CS 271
// Lab7.cpp
// Antonio Maldonado
// October 30, 2017
// This program tests the functions in the Term class

#include <iostream>
#include <iomanip>
#include "Term.h"

using namespace std;

int main () {

    Term k(6, 5);
    Term l(2, 5);
    
    cout << (k+l) << endl;
    cout << (k-l) << endl;
    cout << (k*l) << endl;

    
} //end main
