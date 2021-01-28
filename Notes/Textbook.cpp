#include "Textbook.h"
#include <string>

using namespace std;


      Textbook::Textbook() {

          title = "";
          price = 0;
      }

      Textbook::Textbook( string t, float p ) {

          setTitle( t );
          setPrice( p );

      }

      float getPublisherQuote( Textbook& t ) {

            return 0.0;

      }

      string Textbook::getTitle( ) {

          return title;

      }

      float Textbook::getPrice( ) {

         return price;

      }

      void Textbook::setTitle( string t ) {

         title = t;

      }
      void Textbook::setPrice ( float p ) {

        if (p >= 0)
           price = p;
   
      } 











