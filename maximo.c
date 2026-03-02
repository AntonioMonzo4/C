/* cabecera de programa */
 2  #include <stdio.h>
 3  int main (void)
 4  {
 5      int maximo; /* almacena el valor del máximo de la secuencia */
 6      int numero; /* almacena cada numero leído */
 7  
 8      printf ("Introduzca la secuencia de numeros: \n");
 9      fflush(stdin);
10      scanf("%d", &numero);
11      maximo = numero;
12  
13      while (numero != 0)
14      {
15          if (numero > maximo){
16              maximo = numero;
17          }
18          fflush (stdin);
19          scanf("%d", &numero);
20     }
21      printf ("\nEl numero maximo es %d\n", maximo);
22      return 0;
23  }