#include "EBook.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main ( ) {

    /*
    Textbook libra;

    Textbook pisces( "Astrology 101", 10.0 );

    // test accessors
    cout << "Textbook #1 " << libra.getTitle( ) << "  " << libra.getPrice( ) << endl;

    cout << "Textbook #2 " << pisces.getTitle( ) << "  " << pisces.getPrice( ) << endl;

    // test mutators

    pisces.setPrice( -35.76 );

    cout << "Textbook #2 " << pisces.getTitle( ) << "  " << pisces.getPrice( ) << endl;
    */

    EBook scorpio( "Astrology 201", 20.889, "astrology.geocities.com" );

    cout << "Ebook #1 " << scorpio.getTitle( ) << "  $" <<  fixed << setprecision(2) 
            << scorpio.getPrice( ) <<
            "  " << scorpio.getWebAddress( ) << endl;


} // end main
    
    
   
