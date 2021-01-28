// CS 271
// Program Name: TwoDayPackage.cpp
// Author: Antonio Maldonado
// Date: 11-29-17
// Purpose: This file contains all the funcion implementations for the TwoDayPackage class

#include <iostream>
#include <iomanip>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"

using namespace std;

// constructor for TwoDayPackage
TwoDayPackage::TwoDayPackage(const string &sname, const string &saddress, const string &scity, const string &sstate, const string &szip, const string &rname, const string &raddress, const string &rcity, const string &rstate,const string &rzip, double w, double c, double f )
    :Package(sname,saddress,scity,sstate,szip,rname,raddress,rcity,rstate,rzip,w,c){
        
   setFlatFee(f);
}

// making sure flatFee is positive
TwoDayPackage& TwoDayPackage::setFlatFee(double f){
   if(f < 0)
      flatFee = flatFee;
   else
      flatFee = f;
   return *this;
}

// flatFee accessor
double TwoDayPackage::getFlatFee( ) const{
   return flatFee;
}

// twoDaypackage shipping cost calculation
double TwoDayPackage::calculateCost( ) const{
return (getWeight() * getCostPerOunce()) + flatFee;
}

// overloaded ostrem operator
ostream &operator<<(ostream& out, const TwoDayPackage& t){
   out <<"Two Day Package" << endl <<"Sender Information"<< endl <<t.getSenderName() << endl << t.getSenderAddress() << endl 
       << t.getSenderCity() << "  " << t.getSenderState() << "  " << t.getSenderZipCode() << endl
    <<"Recipient Info: " << endl << t.getRecipientName() << endl << t.getRecipientAddress()
       << endl << t.getRecipientCity() << "  " << t.getRecipientState() << "  " << t.getRecipientZipCode()
    << endl << "Shipping info: " << endl << "Weight: " << t.getWeight() << endl << "Cost per Ounce: "
       << t.getCostPerOunce()<< endl <<"Flat Fee: " << t.getFlatFee() << endl << "Cost to ship: $" << t.calculateCost() ;
   return out;
}
