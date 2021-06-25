#include <iostream>
#include <bits/stdc++.h>
using namespace std;
clock_t starttime, endtime;

int i = 0, j, n = 0;

double totaltime; 
int arr[100000];


void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
  
    
    if (l < n && arr[l] > arr[largest])
        largest = l;
  
    
    if (r < n && arr[r] > arr[largest])
        largest = r;
  
    
    if (largest != i) {
        swap(arr[i], arr[largest]);
  
        
        heapify(arr, n, largest);
    }
}
  
void heapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
  
    
    for (int i = n - 1; i >= 0; i--) {
        
        swap(arr[0], arr[i]);
  
        
        heapify(arr, i, 0);
    }
}
  
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
  
int main()
{

   FILE* fptr; 
  
    fptr = fopen("random.txt", "r"); 
  
  
    while (fscanf(fptr, "%d", &arr[i]) == 1) 
    {
  
        n++; 
  
        i++; 
    } 

   starttime = clock();

    heapSort(arr, n);
 
   endtime = clock();
  
    cout << "Sorted array is \n";
    printArray(arr, n);
 
totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    cout << "Time taken by program is : " << fixed
         << totaltime;
    cout << " sec " << endl;

}