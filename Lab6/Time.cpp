// CS 271
// Time.cpp
// Antonio Maldonado
// October 20, 2017

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time() {
   
    hour = 0;
    minute = 0;
    second = 0;
    
} //end default constructor

Time::Time (int h, int m, int s) {
    
    hour = h;
    minute = m;
    second = s;
    
} //end constructor 

int Time::getHour() {
    
    return hour;
    
} //end accessor getHour

int Time::getMinute() {
    
    return minute;
    
} //end accessor getMinute

int Time::getSecond() {
    
    return second;
    
} //end accessor getSecond

void Time::setHour(int h) {
    
    if (h >= 0 && h < 24)
        hour = h;
    
} //end mutator setHour

void Time::setMinute(int m) {
    
    if(m >= 0 && m < 60)
        
        minute = m;
    
} //end mutator setMinute

void Time::setSecond(int s) {
    
    if(s >= 0 && s < 60)
        
        second = s;
    
} //end mutator setSecond

void Time::print() {
    
    cout << setfill('0') << setw(2) << getHour() << ":" 
         << setw(2) << getMinute() << ":" << setw(2) << 
         getSecond() << endl;
         
    cout << setfill(' ');
    
} //end function print

void Time::print12() {
    
    cout << setfill('0') << ((hour == 0 || hour == 12) ? 12 : hour % 12) 
         << ":" << setw(2) << minute << ":" << setw(2) << second <<
         (hour < 12 ? " AM" : " PM") << endl;
         
    cout << setfill(' ');
    
} //end function print12
