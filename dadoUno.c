#include <stdio.h>
 3  
 4  int main (void) {
 5  
 6  /*entorno*/
 7          int tirada; /*almacena el valor que sale en la tirada del dado*/
 8  /*acciones*/
 9  /* leer el valor de la tirada*/
10      printf("\nIntroduzca el valor de la tirada del dado: ");
11      fflush (stdin);
12      scanf("%d", &tirada);
13  
14  /*comporbar si el valor de la tirada es 3*/
15      if (tirada==3)
16          /*En caso positivo se escribe un 3*/
17          printf ("el valor de la tirada es 3");
18      else
19          /*En caso negativo se escribe un mensaje indicando que no es un 3*/
20          printf ("Mala suerte, no es 3");
21      return 0;
22  }