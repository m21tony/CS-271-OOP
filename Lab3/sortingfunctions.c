// CS 271
// Program Name: sortingfunctions.c
// Author: Antonio Maldonado
// Date: 09-18-17

#include <stdio.h>
#include <math.h>


int selectionSort(int * const data, int size){

    int i, x, min, *swap;
    int count;

    for (i = 0; i < size; i++){
        min = i;
        for (x = i + 1; x < size; x++){
            if (*(data + min) > *(data + x))
                min = x;
            } // end for
            
        if (min != i){
            count++;
            *swap = *(data + min);
            *(data + min) = *swap;
        } // end if
    } // end for
    
return count;

} // end selectionSort

int insertionSort(int * const data, int size){
    
    int i = 1;
    int x = i;
    int j;
    int count = 0 
    
    for (i = 1; i < size; i++){
        for (x = 0; x < size; x++){
            if (*(data + i) < *(data + x)){
                count++;
                j = *(data = i);
                *(data + i) = *(data + x);
                *(data + x) = j;
            } // end if
        } // end for
    } // end for
    
    return count;
    
} // end insertionSort
    
    
    
    
    
    
    
    
    
    
    
    
    
    





