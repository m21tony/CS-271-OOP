#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include <string>

using namespace std;

class Textbook {

   private:
      string title;
      float price;

   public:
      Textbook();
      Textbook( string t, float p );
      friend float getPublisherQuote( Textbook& t );

      string getTitle( );
      float getPrice( );
      void setTitle( string t );
      void setPrice ( float p );
};


#endif
