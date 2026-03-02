#include <stdio.h>
 2  #define TAM 5
 3  
 4  
 5  
 6  int main (void){
 7  
 8      int tablaNumeros [TAM]; /*almacena los numeros de los que se va a calcualr la media*/
 9      double suma; /*almacena la suma de los alementos del array*/
10      double media; /*almacena la media de los elementos del array*/
11      int i; /*indice de control del bucle for que indica la posición del array*/
12  
13  /*inicialización de las variables necesarias*/
14  
15  suma=0;
16  
17  /*lectura del contenido de los elementos del array*/
18  for (i=0; i<TAM; i++){
19  
20      printf ("introduce el entero tablaNumeros [%d] : ", i);
21      fflush (stdin);
22      scanf ("%d",&tablaNumeros[i]);
23  }
24  
25  
26  /*suma del contenido de los elementos del array*/
27  for (i=0; i<TAM; i++) {
28      printf ("El elemento %d del array es %d\n",i, tablaNumeros[i] );
29      suma=suma+tablaNumeros[i];
30      printf ("\t\tLa suma total es %g  \n", suma);
31  
32  }
33  
34  printf ("La suma total al salir del for es %g  \n", suma);
35  
36  media=suma/TAM;
37  
38  printf ("\nEl valor medio es: %g \n", media);
39  
40  return 0;
41  
42  } /* del main */