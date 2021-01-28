// CS 271
// Program Name: Lab5
// Author: Antonio Maldonado
// Date: October 11, 2017
// Purpose: To call the methods and print out output for BankAccount.h and BankAccount.cpp 

#include <iostream>
#include <iomanip>
#include <string>
#include "BankAccount.h"

int main(){
    BankAccount();
    BankAccount joesChecking ("Joe", "Smith", 1234);
    BankAccount chrisChecking ("Chris", "Madrid", 6832);
    joesChecking.display();
    cout <<" " <<endl;
    chrisChecking.display();
    cout <<" " <<endl;
} //end main
