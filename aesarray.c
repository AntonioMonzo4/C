#include <stdio.h>
 2  
 3  #define DIM 10
 4  
 5  int main (void){
 6  
 7      int i;
 8      char letras[DIM];
 9      int contadorAes;
10  
11      /*lectura de los valores */
12      for (i=0; i<DIM; i++){
13          printf ("\nintroduce el valor de la posicion %d del array: ", i);
14          fflush(stdin);
15          letras[i]= getchar();//scanf ("%c", &letras[i]);
16      }
17  
18      /*Escritura de todos los valores*/
19      for (i=0; i<DIM; i++){
20          printf ("\nel valor de la posicion %d del array es %c", i, letras[i]);
21      }
22  
23      /*Cuenta de las aes existentes*/
24      contadorAes=0;
25      for (i=0; i<DIM; i++)
26          if (letras[i]=='a')
27              contadorAes++;
28      printf ("\nEl numero de aes es de %d", contadorAes);
29  
30      /*posicion de la primera a */
31      i=0;
32      while ((letras[i]!='a')&&(i<DIM))
33          i++;
34      if (i<DIM)
35          printf("\nLa posicion de la primera a es %d",i);
36      else
37          printf ("\nNo hay ninguna a en el array");
38  
39      return 0;
40  }
41  
42  