#include <stdio.h>
 2  
 3  int main (void)
 4  {
 5      int n;          /*numero del que se calculan las cifras*/
 6      int naux;       /*variable auxiliar para hacer las divisiones*/
 7      int numCifras;   /*Numero de cifras del numero*/
 8      int suma;       /*suma de cifras del numero*/
 9  
10      printf("\nIntroduzca el numero: ");
11      scanf ("%d", &n);
12      fflush(stdin);
13  
14      numCifras=0;
15      naux=n;
16      suma=0;
17      do
18      {
19          suma=suma+(naux%10);
20          naux=naux/10;
21          numCifras++;
22      }while(naux != 0);
23  
24      printf("\nEl numero de cifras de %d es %d y suma es %d\n", n, numCifras,suma);
25  
26      return 0;
27  }