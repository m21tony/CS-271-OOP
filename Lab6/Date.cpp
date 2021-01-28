// CS 271
// Program Name: Date.cpp
// Author: Antonio Maldonado
// Date: October 20, 2017

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"

using namespace std;

Date::Date() {
    
    month = 1;
    day = 1;
    year = 1980;
    
} //end default constructor

Date::Date(int m, int d, int y) {
    
    month = m;
    day = d;
    year = y;
    
} //end constructor

int Date::getMonth() {
    
    return month;
    
} //end accessor getMonth

int Date::getDay() {
    
    return day;
    
} //end accessor getMonth

int Date::getYear() {
    
    return year;
    
} //end accessor getYear

void Date::setMonth(int m) {
    
    if(m >= 1 && m < 12) 
        month = m;
    
} //end mutator setMonth

void Date::setDay(int d) {
    
    if(d >= 1 && d < 31)
        day = d;
    
} //end mutator setDay

void Date::setYear(int y) {
    
    if(y >= 1980 && y < 2100)
        year = y;
    
} //end mutator setYear

void Date::print() {
    
    cout << setfill('0') << setw(2) << getMonth() << "/" 
         << setw(2) << getDay() << "/" << setw(4) << 
         getYear() << endl;
         
    cout << setfill(' ');
         
} //end print
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
















    
    
    
    
    
    
    
    
    
