// CS 271
// Program name: functions.c
// Author: Antonio Maldonad
// Date: October 02, 2017
// Purpose: This program defines the functions splitAlpha and printSequences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "functions.h"

void splitAlpha ( const char * original, char * lower, char * upper ){

    int strLength = strlen(original);
    int x = 0;
    int upperCase = 0;
    int lowCase = 0;
    
    for (x = 0; x < strLength; x++){
        if (original[x] >= 'a' && original[x] <= 'z'){
            lower[lowCase] = original[x];
            lowCase++;
        }
        if (original[x] >= 'A' && original[x] <= 'Z'){
            upper[upperCase] = original[x];
            upperCase++;
        }
    } // end for
    
    lower[lowCase] = '\0';
    upper[upperCase] = '\0';
    
    printf("Lower: %s \n Upper: %s\n", lower, upper);
    
} // End splitAlpha
    
void printSequences (const char * text){

    int strLength = strlen(text);
    int x = 0;
    int y = 0;
    
    for (x = 0; x < strLength; x++){
        isalnum(text[x]);
        printf("%c", text[x]);
        
        if (text[x] != text[x + 1] - 1){
            printf("\n");
            x++;
        }
    } // end for 
    
    printf("\n");
    
} // end printSequences






