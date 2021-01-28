#include "Textbook.h"
#include "EBook.h"
#include <string>


using namespace std;


      EBook::EBook( string t, float p, string w)
        : Textbook( t, p ) {

         webAddress = w;

      }


      string EBook::getWebAddress( ) {

          return webAddress;

      }

      void EBook::setWebAddress( string w ) {

         webAddress = w;

      }


      
