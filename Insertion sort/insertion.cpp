#include <iostream>
#include <bits/stdc++.h>
using namespace std;
clock_t starttime, endtime;

int i = 0, j, n = 0;

double totaltime; 
int arr[100000];

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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
    insertionSort(arr, n);
    endtime = clock();
 
    cout << "Sorted array is \n";
    printArray(arr, n);
 
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    cout << "Time taken by program is : " << fixed
         << totaltime;
    cout << " sec " << endl;
}