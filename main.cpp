#include "sort.h"
#include <iostream>
using namespace std;

int main () {
	int testArr[] = {1, 2, 3, 4, 5};
	int testArr2[] = {3, 4, 1, 5, 2};
	int testArr3[] = {5, 4, 3, 2, 1};
	int testArr4[] = {7, 2, 5, 1, 3};

// Generate 1,000,000 numbers
	long NUM_TO_GEN = 1000000;
	long max_value = 4294967296;


	long randArr[NUM_TO_GEN];

	// printArray(randArr, NUM_TO_GEN);

	// cout << "Numbers generated:" << endl;
	generateRandomArr(NUM_TO_GEN, max_value, randArr);
	// printArray(randArr, NUM_TO_GEN);
	// printArray(testArr2, 5);
    insertionSort(testArr2, 5);
	// printArray(testArr2, 5);
    
 //    printArray(testArr3, 5);
 //    insertionSort(testArr3, 5);
	// printArray(testArr3, 5);
    
 //    printArray(testArr4, 5);
 //    insertionSort(testArr4, 5);
	// printArray(testArr4, 5);
    
}
