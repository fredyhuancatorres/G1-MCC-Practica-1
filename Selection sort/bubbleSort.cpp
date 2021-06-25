//#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	int i, j, is_swap = 0; 
	for (i = 0; i < n-1; i++)	 
	{
		is_swap=0;
		// Last i elements are already in place 
		for (j = 0; j < n-i-1; j++) 
			if (arr[j] > arr[j+1]) 
			{	
				swap(&arr[j], &arr[j+1]); 
				is_swap=1;
			}
		if(is_swap==0)
			break;
	}
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver code 
int main() 
{
  FILE *fp1;
  int i;
  int arr[10];
  fp1 = fopen("random_10.txt", "r");

  while (!feof(fp1))
  {
    for(i=0; i < 10; ++i){
      fscanf(fp1, "%d", &arr[i]);
    }
  }


	//int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	bubbleSort(arr, n);
	cout<<"Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
}  
