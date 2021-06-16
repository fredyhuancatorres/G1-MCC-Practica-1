#include <stdio.h>

int main()
{
  int n=100;
  FILE *fp1;
  int i;
  int bin[n];
  int acum=1;
  fp1 = fopen("random_100.txt", "r");   //Abrimo  el archivo

  while (!feof(fp1)) 
  {
    for (i=0; i<n; ++i) {                                  
      fscanf(fp1, "%d ", &bin[i]);          
      printf("%d: %d - ", acum, bin[i]);

    acum++;
    }

    /* AQUÍ HACES LA OPERACIÓN CON EL VECTOR OBTENIDO */
  }

  fclose(fp1);

  return 0;
}
