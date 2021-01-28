// CS 271
// Calendar.cpp
// Antonio Maldonado
// October 20, 2017

#include <iostream> 
#include <iomanip>
#include <stdexcept>
#include <cstdlib>
#include "Date.h"
#include "Time.h"

using namespace std;

int main () {
	Time();
	Date();

	// Generate a random number
	
    const int MAX = 12;
	  int numH, numM, numS;
    srand(time(NULL));
    numH = rand() % MAX + 1;
    numM = rand() % MAX + 1;
    numS = rand() % MAX + 1;

    srand(time(NULL));
    const int MAX2 = 24;
	  int numH1, numM1, numS1;
    srand(time(NULL));
    numH1 = rand() % MAX2 + 1;
    numM1 = rand() % MAX2 + 1;
    numS1 = rand() % MAX2 + 1;

    

 


	int arrayT[5] = {};
	Time twelve(numH, numM, numS);
	Time tfour(numH1, numM1, numS1);


	tfour.print();
	cout << " " << endl;

	twelve.print12();
	cout << " " << endl;


		





}

