#include<iostream>
#include<vector>
using namespace std;

int main()
{
  FILE *fp1;
  int i;
  vector<int> sort;


  fp1 = fopen("random_100.txt", "r");

  while (!feof(fp1))
  {
    for (i=0; i < 100; ++i){
      fscanf(fp1, "%d ", &sort[i]);
      printf("%d ", sort[i]);
    }
  }
  fclose(fp1);
  return 0;
}
