/* Programacion I */
 2  /* mediaConWhile.c */
 3  
 4  #include <stdio.h>
 5  #define LIMITE 4
 6  
 7  int main (void)
 8  {
 9      int numero;   /* número que se va leyendo */
10      int contador; /* contador de numeros leídos */
11      double suma;  /* almacena la suma de los números de la secuencia */
12  
13      suma = 0.0;
14  
15      for (contador=0; contador<LIMITE; contador++)
16      {
17          fflush (stdin);
18          scanf("%d",&numero);
19          suma = suma+numero;
20      }
21      printf("La media es: %g\n", suma/contador);
22      return 0;
23  }