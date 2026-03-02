 /* Programacion I */
 2  /* mediaConWhile.c */
 3  
 4  #include <stdio.h>
 5  
 6  int main (void)
 7  {
 8      int numero;   /* número que se va leyendo */
 9      int contador; /* contador de números leídos */
10      int suma;     /* almacena la suma de los números de la secuencia */
11      int media;
12  
13      suma = 0;
14      contador = 0;
15      printf("Escriba una cadena de números terminada en 0:\n");
16      fflush (stdin);
17      scanf("%d",&numero);
18      while (numero != 0){
19          suma = suma+numero;
20          contador = contador+1;
21          fflush (stdin);
22          scanf("%d",&numero);
23      }
24  
25      if (contador == 0)
26      {
27          printf("No se puede calcular la media de 0 números\n");
28      }
29      else
30      {
31          media=suma/contador;
32          printf("La media es: %d\n", media);
33      }
34  
35     return 0;
36  }