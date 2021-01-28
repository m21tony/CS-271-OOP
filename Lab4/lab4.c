// CS 271
// Program Name: lab4.c
// Author: Antonio Maldonad
// Date: October 03, 2017
// Purpose: This program will test the splitAlpha and printSequences functions

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "functions.h"

int main(){

    char lower[80];
    char upper[80];

    splitAlpha("The symbol for Intel is INTC.", lower, upper);
    printSequences("abk123@XY");
    
    splitAlpha("C is Better thAn jAVa.", lower, upper);
    printSequences("uv45DTij#");

    return 0;

} // end main





