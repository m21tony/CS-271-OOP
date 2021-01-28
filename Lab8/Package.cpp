// CS 271
// Program Name: Package.cpp
// Author: Antonio Maldonado
// Date: 11-29-17
// Purpose: This file contains all the funcion implementations from constructor to accessors and mutators for the package class

#include <iostream>
#include <iomanip>
#include <string>
#include "Package.h"

using namespace std;

// constructor 
Package::Package ( const string &sname, const string &saddress, const string &scity, const string &sstate, const string &szip, const string &rname, 
		  		 const string &raddress, const string &rcity, const string &rstate,const string &rzip, double w, double c  ){
   setSenderName(sname);
   setSenderAddress(saddress);
   setSenderCity(scity);
   setSenderState(sstate);
   setSenderZipCode(szip);
   setRecipientName(rname);
   setRecipientAddress(raddress);
   setRecipientCity(rcity);
   setRecipientState(rstate);
   setRecipientZipCode(rzip);
   setWeight(w);
   setCostPerOunce(c);
}

// accessor and mutator for senderName
Package& Package::setSenderName(const string &sname){
   senderName = sname;
   return *this;
}   
string Package::getSenderName() const{
   return senderName;
}
// acessor and mutator for senderAddress
Package& Package::setSenderAddress(const string &saddress){
   senderAddress = saddress;
   return *this;
}   
string Package::getSenderAddress() const {
   return senderAddress;
}   
// acessor and mutator for senderCity
Package& Package::setSenderCity(const string &scity){
   senderCity = scity;
   return *this;
}   

string Package::getSenderCity() const{
   return senderCity;
}
//  acessor and mutator for senderState
Package&  Package::setSenderState(const string &sstate){
   senderState = sstate;
   return *this;
}   

string Package::getSenderState() const{
   return senderState;
}
// acessor and mutator for senderZipCode
Package& Package::setSenderZipCode(const string &szip){
   senderZip = szip;
   return *this;
}

string Package::getSenderZipCode() const{
      return senderZip;
}
// acessor and mutator for recipiantName
Package& Package::setRecipientName(const string &rname){
   recipientName = rname;
   return *this;
}
string Package::getRecipientName() const{
   return recipientName;
}
//  acessor and mutator for recipientAddress
Package& Package::setRecipientAddress(const string &raddress){
   recipientAddress = raddress;
   return *this;
}
string Package::getRecipientAddress() const{
   return recipientAddress;
}
// acessor and mutator for recipientCity
Package& Package::setRecipientCity(const string &rcity){
   recipientCity = rcity;
   return *this;
}
string Package::getRecipientCity() const{
   return recipientCity;
}
// acessor and mutator for recipientState
Package& Package::setRecipientState(const string &rstate){
   recipientState = rstate;
   return *this;
}
string Package::getRecipientState() const{
   return recipientState;
}
// acessor and mutator for recipientZipCode
Package& Package::setRecipientZipCode(const string &rzip){
   recipientZip = rzip;
   return *this;
}
string Package::getRecipientZipCode() const{
   return recipientZip;
}
//mutator for making sure weight is not negative
Package& Package::setWeight(double w){
   if (w<0){
      weight = weight;
   }
   else
      weight = w;
   return *this;
}
// accessor for weight
double Package::getWeight() const{
   return weight;
}
// costPerOunce mutator for making sure that its positive
Package& Package::setCostPerOunce(double c){
   if(c<0){
      costPerOunce = costPerOunce;
   }
   else
      costPerOunce = c;
   return *this;
}
// accessor for costPerOunce
double Package::getCostPerOunce() const{
   return costPerOunce;
}
// ship package cost calculation
double  Package::calculateCost() const{
return weight * costPerOunce;
}
// overloaded ostream operator
ostream &operator<<(ostream& out, const Package& p){
    out <<"Sender Info: "<< endl <<p.getSenderName() << endl << p.getSenderAddress() << endl
       << p.getSenderCity() << "  " << p.getSenderState() << "  " << p.getSenderZipCode() << endl
    <<"Recipient Info: " << endl << p.getRecipientName() << endl << p.getRecipientAddress()
       << endl << p.getRecipientCity() << "  " << p.getRecipientState() << "  " << p.getRecipientZipCode()
    << endl << "Shipping info: " << endl << "Weight: " << p.getWeight() << endl << "Cost per Ounce: "
       << p.getCostPerOunce()<< endl << "Cost to ship: $" << p.calculateCost() ;
   return out;
}
