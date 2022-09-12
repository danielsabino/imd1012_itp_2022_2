#include <stdio.h>  

int main(void) { 
  int nlin;           
  int m,k,i,j;             

  scanf("%d",&nlin);
  while (nlin<=0) {
    printf("Você entrou com %1d, tente de novo na próxima\n", nlin);
    return 0;
  }

  m=nlin*(nlin+1)/2; /* calc numero de elementos na matriz */

  for (k=0; m; k++) m /= 10; /* pega numero de digitos em m*/

  m=1;
  for (i=1; i<=nlin; i++) {
    for (j=0; j<i; j++) printf("%*d ",k,j+m);
    printf("\n");
    m +=i;
  }
  return 0;
}