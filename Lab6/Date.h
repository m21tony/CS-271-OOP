// CS 271
// Program Name: Date.h
// Author: Antonio Maldonado
// Date: October 21, 2017

#ifndef DATE_H
#define DATE_H

class Date {
    
public:
    //Constructors
    Date();
    Date(int m, int d, int y);
        
    //Accessors
    int getMonth();
    int getDay();
    int getYear();
        
    //Mutators
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);
        
    //Print 
    void print();
        
private:
    int month;
    int day;
    int year;
        
}; 

#endif 
    
