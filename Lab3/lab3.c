// CS 271
// Program Name: Lab3.c
// Author: Antonio Maldonado
// Date: 09-18-17
// Purpose: This program will 

#include <stdio.h>
#include <stdlib.h>
#include "helperfunctions.h"
#include "sortingfunctions.h"
#define ARRAYSIZE 10

int main (void) {

    // dynamically allocate memory space for an array
    int * arrayPtr = (int *) malloc (ARRAYSIZE * sizeof(int));

    // fill array with random integers
    printf("\n Selection Sort \n");
    fillArray(arrayPtr, ARRAYSIZE, 10, 80);
    
    // print array, 10 elements per line
    neatPrint(arrayPtr, ARRAYSIZE, 10, 3);
    
    // sort array using selection sort
    int ct = selectionSort(arrayPtr, ARRAYSIZE);
    
    // print array, 10 elements per line
    printf("\n The number of swapping in selection sort is: %d\n", ct);
    neatPrint(arrayPtr, ARRAYSIZE, 10, 3);
    
    // Insertion sort
    printf("\n Insertion Sort \n");
    
    fillArray(arrayPtr, ARRAYSIZE, 10, 80);
    
    neatPrint(arrayPtr, ARRAYSIZE, 10, 3);
    
    int cnt = insertionSort(arrayPtr, ARRAYSIZE);
    
    printf("\n The number of swapping in Insertion Sort is: %d\n", cnt);
    neatPrint(arrayPtr, ARRAYSIZE, 10, 3);
    
}
