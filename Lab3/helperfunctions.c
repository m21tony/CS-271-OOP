// CS 271
// Program Name: helperfunctions.c
// Author: Antonio Maldonado
// Date: 09-18-17

#include <stdio.h>
#include <math.h> 
#include <time.h>


void swap (int * num1, int * num2){
    
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void fillArray (int * const data, int size, int min, int max){

    int x;

    for (x = 0; x < size; x++){
        *(data + x) = rand() % (max - min + 1) + min;
    }
}

void neatPrint (int * const data, int size, int numperLine, int fieldSize){

    int i;
    printf("\n");

    for (i = 0; i < size; i++){
        printf("\t%d", *(data + i)); 
        
        if (i % numperLine == 0)
            printf("\n");
    }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
