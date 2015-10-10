#ifndef SORT_H
#define SORT_H

/* Print out the elements in an array */
void printArray(long arr[], long n);

/* Sort an array from 0 to n in ascending order, using bubblesort*/
void bubbleSort(long arr[], long n);

/* Sort an array from 0 to n in ascending order, using bubblesort*/
void insertionSort(long arr[], long n);


/* Sort an array from left to right in ascending order, 
using quicksort*/
void quickSort(long arr[], long left, long right);

/* Generate an array of random numbers from 0 to max */
void generateRandomArr(long num_to_gen, long max, long arr[]);

/* Gnerate an already sorted array */
void generateSortedArr(long num_to_gen, long max, long arr[]);

#endif
