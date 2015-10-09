#include <iostream>
using namespace std;

void printArray(int arr[], int n){

//	cout << arr[0] << "The first statement" << "\n" ;
  for(int i=0; i<n; i++){
		cout << arr[i] << '\t';
  }
    cout << "\n";
}


void bubbleSort(int arr[], int n) {
      bool swapped = true;
      int j = 0;
      int tmp;
      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < n - j; i++) {
                  if (arr[i] > arr[i + 1]) {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}

void insertionSort(int arr[], int n) {
	int key, i;
	for (int j=1; j<=n; j++)
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

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
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

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
