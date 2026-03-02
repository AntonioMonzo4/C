#include <stdio.h>
 4  
 5  int main (void)
 6  {
 7      int num;    /* Número de filas del triángulo */
 8      int fila;   /* Cada fila del triángulo  */
 9      int columna;    /* Cada columna del triángulo */
10  
11      printf("Numero de filas del triangulo: ");
12      scanf("%d",&num);
13      fflush (stdin);
14  
15      for(fila=1;fila<=num;fila++)
16      {
17          for(columna=1;columna<=num-fila;columna++)
18          {
19              printf(" ");
20          }
21          for(columna=1;columna<=2*fila-1;columna++)
22          {
23              printf("*");
24          }
25          printf("\n");
26          fflush (stdout);
27      } 
28      return 0;
29  }