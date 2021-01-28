// CS 271
// Program Name: Lab5
// Author Name: Antonio Maldonado
// Date: October 11, 2017
// Purpose: To create function definitions

// BankAccount.cpp 
// Function definitions file for the BankAccount class

// this is a C++ program

#include <iostream>
#include <string>
#include <iomanip>
#include "BankAccount.h"

using namespace std;

// Implementation of the BankAccount class 
//
// contains member function definitions

   BankAccount::BankAccount(){
     string empty = "";
     int a = 0;
       
     setFirstName(empty);
     setLastName(empty);
     setAccountNumber(a);
   }

   BankAccount::BankAccount( string f, string l, int n ){
     setFirstName(f);
     setLastName(l);
     setAccountNumber(n);

   } // end constructor

   void BankAccount::setFirstName( string f ) {
     firstName = f;
   }

   void BankAccount::setLastName( string l ) {
     lastName = l;
   }

   void BankAccount::setAccountNumber ( int n ) {
     accountNumber = n;
   }
   string BankAccount::getFirstName( ) {
      return firstName;
   }

   string BankAccount::getLastName( ) {
      return lastName;
   }

   int BankAccount::getAccountNumber ( ) {
      return accountNumber;
   }
   
   void BankAccount::display(){
       cout <<"Customer: " <<firstName<<" " <<lastName<<endl;
       cout <<"Account: " <<accountNumber<<endl;
   } 
