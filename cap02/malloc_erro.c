#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
  int *arr = (int *) malloc(INT_MAX);

  if(arr == NULL)
  {
    printf("Erro alocacao memoria");
    exit(-1);
  }
}
