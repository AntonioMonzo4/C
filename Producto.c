#include <stdio.h>
 3  
 4  int main (void)
 5  {       /* Entorno */
 6      int multiplicando; /* multiplicando */
 7      int multiplicador; /* multiplicador */
 8      int cuentaDeSumas; /* cuenta las veces que se multiplicando consigo mismo */
 9      int resultado; /* resultado de la operación */
10  
11      /*inicialización de las variables*/
12      cuentaDeSumas=0;
13      resultado=0;
14  
15      printf ("\n Introduzca el multiplicando: ");
16      fflush(stdin);
17      scanf ("%d", &multiplicando);
18  
19      printf ("\n Introduzca el multiplicador: ");
20      fflush(stdin);
21      scanf ("%d", &multiplicador);
22  
23      while (cuentaDeSumas<multiplicador){
24              resultado=resultado+multiplicando;
25              cuentaDeSumas=cuentaDeSumas+1;
26          }
27      printf("resultado = %d", resultado);
28    return 0;
29  }