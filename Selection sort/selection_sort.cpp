#include <iostream>
#include <vector>

#include <chrono>

using namespace std;

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
}

void printArray (vector<int> & vec){
  for(int i = 0; i < vec.size(); ++i){
    cout << vec[i] << " ";
  }
  cout << endl;
}

void printVector(int arr[], int size)
{
  int i;
  for(i=0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void selectionSort(int arr[], int n){
  int i, j, min_idx;

  for (i = 0; i < n-1; i++){
    min_idx = i;
    for (j = i+1; j < n; j++)
      if(arr[j] < arr[min_idx])
        min_idx = j;

    	swap(&arr[min_idx], &arr[i]); 
  }
}


int main()
{
  FILE *fp1;
  int i;
  int arr[100000];
  fp1 = fopen("random_100000.txt", "r");

  while (!feof(fp1))
  {
    for(i=0; i < 100000; ++i){
      fscanf(fp1, "%d", &arr[i]);
    }
  }

  int n = sizeof(arr)/sizeof(arr[0]);

  double sum = 0;
  double add = 1;

  // Start measuring time
  auto begin = std::chrono::high_resolution_clock::now();
  selectionSort(arr, n);
  
// Stop measuring time and calculate the elapsed time
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    
    printf("Result: %.20f\n", sum);
    
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);
    
    //return 0;

  //cout <<"Array ordenado: \n";
  //printVector(arr, n);
  return 0;
}
