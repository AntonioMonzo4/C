#include <stdio.h>
 2  
 3  #define TAM 10
 4  
 5  int main (void){
 6  
 7      int tablaNumeros [10];
 8      int i;                  /*indice para recorrer el array*/
 9      int numero;             /*numero que introduce el usuario*/
10      char deNuevo;           /* si o no para un nuevo intento*/
11  
12      for (i=0; i<TAM; i++)
13          tablaNumeros [i] = i+1;
14  
15  
16      printf ("\ndesea jugar 's' o 'n': ");
17      fflush (stdin);
18      deNuevo= getchar(); //scanf ("%c", &deNuevo);
19  
20      while (deNuevo == 's' || deNuevo == 'S'){
21  
22          /*inicio de lo que habia en array2.c*/
23          printf ("\nIntroduzca un numero entero: ");
24          fflush (stdin);
25          scanf ("%d", &numero);
26  
27  
28          i=0;
29          while (tablaNumeros[i]!= numero && i<TAM)
30              i++;
31  
32          if (tablaNumeros[i]== numero)
33              printf ("\n Se ha encontrado el numero %d en la posicion %d del array", numero, i);
34          else
35              printf ("\n No se ha encontrado el numero %d en el array", numero);
36  
37          printf ("\ndesea jugar de nuevo 's' o 'n': ");
38          fflush (stdin);
39          scanf ("%c", &deNuevo);
40  
41      }/*del while*/
42  
43      return 0;
44  } /*del main*/