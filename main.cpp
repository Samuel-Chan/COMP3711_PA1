#include "sort.cpp"


int main () {
	int testArr[] = {1, 2, 3, 4, 5};
	int testArr2[] = {3, 4, 1, 5, 2};
	int testArr3[] = {5, 4, 3, 2, 1};
	int testArr4[] = {7, 2, 5, 1, 3};

	printArray(testArr2, 5);
    insertionSort(testArr2, 5);
	printArray(testArr2, 5);
    
}
