#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void printArray(long arr[], long n){

//	cout << arr[0] << "The first statement" << "\n" ;
  for(int i=0; i<n; i++){
		cout << arr[i] << '\t';
  }
    cout << "\n";
}


void bubbleSort(long arr[], long n) {
      bool swapped = true;
      long j = 0;
      long tmp;
      while (swapped) {
            swapped = false;
            j++;
            for (long i = 0; i < n - j; i++) {
                  if (arr[i] > arr[i + 1]) {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}

void insertionSort(long arr[], long n) {
	long key, i;
	for (long j=1; j<n; j++)
	{
		key = arr[j];
		i = j-1;
		while (i>=0 && arr[i]>key)
		{
			arr[i+1] = arr[i];
			--i;
		}
		arr[i+1] = key;
	}
}

void quickSort(long arr[], long left, long right) {
      long i = left, j = right;
      long tmp;
      long pivot = arr[(left + right) / 2];

      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}


/* Generate an array of random numbers from 0 to max */
void generateRandomArr(long num_to_gen, long max, long arr[])
{
    srand(time(NULL));

    long random_num;

    for (long i=0; i<num_to_gen; i++){
        random_num = rand() % max;
        arr[i] = random_num;
    }

}    

/* Gnerate an already sorted array */
void generateSortedArr(long num_to_gen, long max, long arr[])
{
    for (long i=0; i<num_to_gen; i++)
    {
        arr[i] = i;
    }
}
