#include <stdio.h>
 2  #define TAM 10
 3  
 4  int main (void)
 5  {
 6      int vector[TAM];
 7      int i;
 8      int max;
 9      int pos;
10  
11      printf ("Introduzca %d enteros:\n",TAM);
12      for (i=0;i<TAM;i++)
13      {
14        fflush (stdin);
15        scanf("%d",&vector[i]);
16      }
17      max=vector[0];
18      pos=0;
19      for(i=1;i<TAM;i++)
20          if(max<=vector[i])
21          {
22              max=vector[i];
23              pos=i;
24          }
25  
26      for (i=0;i<TAM-1;i++)
27          printf("%d,",vector[i]);
28      printf("%d\n",vector[TAM-1]);
29      printf("El maximo es %d y esta en posicion %d\n", max, pos);
30  
31      return 0;
32  }