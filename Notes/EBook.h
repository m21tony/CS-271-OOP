#include "Textbook.h"
#include <string>

#ifndef EBOOK_H
#define EBOOK_H

using namespace std;

class EBook : public Textbook {

   private:
      string webAddress;

   public:
      EBook( string, float, string );
      string getWebAddress( );
      void setWebAddress( string );

};

#endif
      
