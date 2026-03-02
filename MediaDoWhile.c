 /* El cero si pertenece a la secuencia, aunque marca el final*/
 2  #include <stdio.h>
 3  
 4  int main (void)
 5  {
 6      int numero;   /* número que se va leyendo */
 7      int contador; /* contador de numeros leídos */
 8      double suma;  /* almacena la suma de los números de la secuencia */
 9  
10  
11      suma = 0.0;
12      contador = 0;
13      printf("Escriba una cadena de numeros terminada en 0:\n");
14  
15      do
16      {
17          fflush (stdin);
18          scanf("%d",&numero);
19          suma = suma+numero;
20          contador = contador+1;
21      } while (numero != 0);
22  
23      printf("La media es: %g\n", suma/contador);
24  
25     return 0;
26  }