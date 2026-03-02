#include <stdio.h>
 2  #define TAM 5
 3  
 4  int main (void){
 5  
 6      int arrayOrigen[TAM];
 7      int arrayDestino[TAM];
 8      int i;
 9  
10      /*lectura del contenido de los elementos del array origen*/
11      for (i=0; i<TAM; i++){
12          printf ("introduce el entero arrayOrigen [%d] : ", i);
13          fflush (stdin);
14          scanf ("%d",&arrayOrigen[i]);
15      }
16  
17      /*Copia de los elementos del array*/
18        for (i=0; i<TAM; i++){
19            arrayDestino[i] = arrayOrigen[i];
20      }
21  
22      /* Impimir ambos arrays */
23        printf ("\n     arrayOrigen    arrayDestino");
24        for (i=0; i<TAM; i++){
25            printf ("\n\t %d \t\t %d", arrayOrigen[i], arrayDestino[i]);
26      }
27  
28      return 0;
29  }