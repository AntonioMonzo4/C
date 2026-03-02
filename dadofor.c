#include <stdio.h>
 3  
 4  int main (void) {
 5  
 6  /*entorno*/
 7          int tirada; /*almacena el valor que sale en la tirada del dado*/
 8          int numeroTiradas;/*almacena el numero de tiradas que hará es usuario*/
 9          int i; /*control del bucle for*/
10  
11  /*acciones*/    
12      printf("\nIntroduzca el numero de tiradas de dado que desea hacer: ");
13      fflush (stdin);
14      scanf("%d", &numeroTiradas);
15  
16  for (i=0; i<numeroTiradas; i++){
17  
18      /* leer el valor de la tirada*/ 
19      printf("\nIntroduzca el valor de la tirada %d de las %d que desea hacer: ", i+1, numeroTiradas);
20      fflush (stdin);
21      scanf("%d", &tirada);
22      
23  
24      if ((tirada>=1) && (tirada<=6)){ /*comprobamos que el valor introducido es correcto */
25  
26          /*comporbar si el valor de la tirada es par*/
27          if ((tirada%2)==0)
28              /*En caso positivo se escribe un mensaje indicando que es par*/
29              printf ("el valor de la tirada es par");
30          else
31              /*En caso negativo se escribe un mensaje indicando que es impar*/
32              printf ("el valor de la tirada es impar");  
33      }
34      else
35          printf ("Los valores han de estar comprendidos entre 1 y 6");           
36          
37  }/*del for*/
38          
39      return 0;
40  } /*del main*