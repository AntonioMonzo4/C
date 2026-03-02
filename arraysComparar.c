#include <stdio.h>
 2  #define TAM 5
 3  
 4  int main (void){
 5  
 6      int arrayUno[TAM];
 7      int arrayDos[TAM];
 8      int i;
 9      int contador;
10  
11      /*lectura del contenido de los elementos de arrayUno*/
12      for (i=0; i<TAM; i++){
13          printf ("introduce el entero arrayUno [%d] : ", i);
14          fflush (stdin);
15          scanf ("%d",&arrayUno[i]);
16      }
17      printf ("\n");
18      /*lectura del contenido de los elementos de arrayDos*/
19      for (i=0; i<TAM; i++){
20          printf ("introduce el entero arrayDos [%d] : ", i);
21          fflush (stdin);
22          scanf ("%d",&arrayDos[i]);
23      }
24  
25      /* Impimir ambos arrays */
26        printf ("\n     arrayUno    arrayDos");
27        for (i=0; i<TAM; i++){
28            printf ("\n\t %d \t    %d", arrayUno[i], arrayDos[i]);
29      }
30  
31      /* Comparar si los array son iguales o no.
32         En el momento en el que un elemento sea diferente
33         los arrays se consideran diferentes*/
34  
35      i=0;
36      while (i<TAM && arrayUno[i]==arrayDos[i]){
37          i++;
38      }
39  
40      if (i<TAM)
41          printf ("\n\nLos arrays NO SON IGUALES porque el elemento de la posicion %d es diferente", i);
42      else
43          printf ("\n\nLos arrays SON IGUALES porque todos sus elemento son iguales");
44  
45      /* Contar cuantos elementos diferentes hay en dos arrays*/
46  
47      contador=0;
48      for (i=0; i<TAM; i++){
49          if (arrayUno[i]!=arrayDos[i])
50              contador=contador+1;
51      }
52  
53      printf ("\n\nHay %d elementos diferentes", contador);
54  
55      return 0;
56  
57  }