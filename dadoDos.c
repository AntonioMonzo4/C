 #include <stdio.h>
 3  
 4  int main (void) {
 5  
 6  /*entorno*/
 7          int tirada; /*almacena el valor que sale en la tirada del dado*/
 8  
 9  /*acciones*/
10  
11  /* leer el valor de la tirada*/
12      printf("\nIntroduzca el valor de la tirada del dado: ");
13      fflush (stdin);
14      scanf("%d", &tirada);
15  
16  
17  /*comporbar si el valor de la tirada es par*/
18      if ((tirada%2)==0){
19          /*En caso positivo se escribe un mensaje indicando que es par*/
20          printf ("el valor de la tirada es par");
21      }
22      else
23          /*En caso negativo se escribe un mensaje indicando que es impar*/
24          printf ("el valor de la tirada es impar");
25  
26      return 0;
27  }