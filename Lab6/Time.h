// CS 271
// Time.h
// Antonio Maldonado
// October 20, 2017

#ifndef TIME_H
#define TIME_H


class Time {

   public:   
      //Constructors
      Time();
      Time (int h, int m, int s); 
      
      //Accessors
      int getHour();  
      int getMinute();
      int getSecond();
      
      //Mutators 
      void setHour(int h);
      void setMinute(int m);
      void setSecond(int s);
      
      //Print out
      void print( );
      void print12( );
 
   private: 
      int hour;
      int minute;
      int second;

}; //end class Time

#endif 

       
