#include <stdio.h>
 2  
 3  #define TAM 10
 4  
 5  int main (void){
 6  
 7      int tablaNumeros [TAM];
 8      int i;                  /*indice para recorrer el array*/
 9  
10      printf ("Procediendo a rellenar los elementos del array...");
11      for (i=0; i<TAM; i++)
12          tablaNumeros [i] = i+1;
13  
14      getchar();
15  
16      for (i=0; i<TAM; i++)
17          printf ("\ntablaNumeros [%d] = %d", i, tablaNumeros[i]);
18  
19  return 0;
20  }