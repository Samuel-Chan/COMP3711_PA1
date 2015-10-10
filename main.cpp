#include "sort.h"
#include <iostream>
#include <time.h>
using namespace std;

int main () {
	// int testArr[] = {1, 2, 3, 4, 5};
	// int testArr2[] = {3, 4, 1, 5, 2};
	long bubbleFastestArr[] = {4, 5, 3};
	long insertionFastestArr[] = {50, 30, 20, 50, 20, 10, 50, 20, 30};

// Generate 1,000,000 numbers, 4294967296
	long NUM_TO_GEN = 1000;
	long MAX_VALUE = 100;


	long randArr[NUM_TO_GEN];
	long sortedArr[NUM_TO_GEN];

	// generateRandomArr(NUM_TO_GEN, MAX_VALUE, randArr);
	// generateSortedArr(NUM_TO_GEN, MAX_VALUE, sortedArr);

// Testing starts
	clock_t begin, end;
	double time_spent;

	begin = clock();


/* here, do your time-consuming job */

	// cout << "Quick Sort:" << endl;
 //    quickSort(bubbleFastestArr, 0, 2);
    
    // cout << "Insertion Sort:" << endl;
    // insertionSort(randArr, NUM_TO_GEN);
    
	cout << "Bubble Sort:" << endl;
    bubbleSort(randArr, NUM_TO_GEN);

	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("%.35f\n", time_spent);


    /* Testing for printArr and random array generator */
	// printArray(randArr, NUM_TO_GEN);
	// printArray(testArr2, 5);
	// printArray(testArr2, 5);
    
 //    printArray(testArr3, 5);
 //    insertionSort(testArr3, 5);
	// printArray(testArr3, 5);
    
 //    printArray(testArr4, 5);
 //    insertionSort(testArr4, 5);
	// printArray(testArr4, 5);
    
}
