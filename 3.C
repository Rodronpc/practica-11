#include <stdio.h>
#define apar = 10
#define comp = 100

void ini_matrix (int arr[apar][comp])
{
  int i, j
  for(i = 0; i < apar; i++){
    for(j = 0; j < comp; j++){
      arr[i][j] = 0;
    }
  }
}

void llenar(arr[apar][comp])
{
  int i , j , num , num2;

  for(i = 0 , i < apar; i++){
    printf("dame la cantidad: ");
    scanf("%d" , &num);
    for( j = 0, j < num; j++){
      printf("dame el numero de componente: (0-99)");
      scanf("%d" , &num2);
      arr[i][num2] = 1;
    }
  }
}

void mensual(aparmen[apar])
{
  int i;
  for(i = 0, i < apar; i++){
    printf("numero de aparatos mensuales de %d: ", i);
    scanf("%d", &aparmen[i]);
  }
}

