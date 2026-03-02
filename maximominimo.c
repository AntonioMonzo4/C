/* cabecera de programa */
 2  #include <stdio.h>
 3  
 4  int main (void)
 5  {
 6      int maximo; /* almacena el valor del máximo */
 7      int minimo; /* almacena el valor del minimo */
 8      int numero; /* almacena cada número leído  */
 9      int contador; /*cuenta el numero de numeros leidos*/
10  
11      contador=0;
12      printf ("Introduzca la secuencia de numeros: \n");
13      fflush (stdin);
14      scanf("%d", &numero);
15      maximo = numero;
16      minimo = numero;
17  
18      while ( numero != 0) {
19          contador = contador + 1; /*contador ++*/
20          if (numero > maximo)
21              maximo = numero;
22          if (numero < minimo)
23              minimo = numero;
24          scanf("%d", &numero);
25      }
26      printf ("El numero maximo es %d\ny el numero minimo es %d \n de %d numeros introducidos", maximo, minimo
, contador);
27      return 0;
28  }