// CS 271
// Program Name: Lab1
// Author: Antonio Maldonado
// Date: 08-22-2017
// Purpose: This program will take four exam scores and calculate the average
//          and display the letter grade corresponding to the average


#include <stdio.h>
#include <math.h> 

int main (void) {

    // declare variables
    float exam1, exam2, exam3, exam4, average;
    char grade = 'e';
    
    // input exam scores
        //printf("Enter exam 1 score: \n");
        scanf("%f", &exam1);
        //printf("Enter exam 2 score: \n");
        scanf("%f", &exam2);
        //printf("Enter exam 3 score: \n");
        scanf("%f", &exam3);
        //printf("Enter exam 4 score: \n");
        scanf("%f", &exam4);
        
    // sentinal
    while (exam1 != -1 && exam2 != 0 && exam3 != 0 && exam4 != 0) {

        // calculate average
        average = ((exam1 + exam2 + exam3 + exam4) / 4);

        // assigning letter grade to average
        if (average >= 0 && average < 60)
            grade = 'F';
        if (average >= 60 && average < 70)
            grade = 'D';
        if (average >= 70 && average < 80)
            grade = 'C';
        if (average >= 80 && average < 90)
            grade = 'B';
        if (average >= 90 && average < 100)
            grade = 'A';

        printf("Exam Scores: %.0f  %.0f  %.0f  %.0f\n", exam1, exam2, exam3, exam4);
        printf("Average: %.2f\n", average);
        printf("Letter Grade: %c\n", grade);
        
        // input exam scores
        //printf("Enter exam 1 score: \n");
        scanf("%f", &exam1);
        //printf("Enter exam 2 score: \n");
        scanf("%f", &exam2);
        //printf("Enter exam 3 score: \n");
        scanf("%f", &exam3);
        //printf("Enter exam 4 score: \n");
        scanf("%f", &exam4);

    } // end while
    
} //end main






