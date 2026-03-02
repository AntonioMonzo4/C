 /* Programacion I */
 2  /* contarVocales.c */
 3  
 4  #include <stdio.h>
 5  
 6  int main (void)
 7  {
 8      char letra;   /* almacena cada letra leída */
 9      int contador; /*almacena el número de vocales del texto */
10  
11      contador = 0;
12      printf ("Introduzca un texto terminado en .\n");
13      letra = getchar();
14      while (letra!='.')
15      {
16          if (letra=='a')
17              contador = contador + 1;
18          letra = getchar();
19      }
20      printf ("El numero de aes leidas es: %d\n", contador );
21      fflush (stdout);
22      return 0;
23  }