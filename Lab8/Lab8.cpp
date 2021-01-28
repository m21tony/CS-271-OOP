// CS 271
// Program Name: Lab8.cpp
// Author: Antonio Maldonado   
// Date: 11-29-17
// Purpose: This file is the testing file for both the Package and TwoDayPackage classes

#include <iostream>
#include <iomanip>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"

using namespace std;

int main(){
    
   //testng using constructor
   Package firstPackage("Tony Maldonado", "2200 Corley Dr", "Las Cruces", "NM", "88001", "Chris Flores",
           "1128 Anthony St", "Anthony", "NM", "88021", 7,1.21);
    
   //testng TwoDayPackage constructor
    TwoDayPackage secondPackage("Tony Maldonado", "2200 Corley Dr", "Las Cruces", "NM", "88001", "Chris Flores","1128 Anthony St", "Anthony", "NM", "88021", 21,2.75,7);
    
   // testing ostream overloaded operator for both package and TwoDayPackage
   cout << firstPackage << endl;
   cout << endl <<secondPackage << endl;
    
   //  testing weight using negative number
   firstPackage.setWeight(-5);
   secondPackage.setFlatFee(-18);
   cout << endl <<"Testing mutators.." << endl;
   cout << firstPackage.getWeight()<< endl << secondPackage.getFlatFee() << endl ;

}
