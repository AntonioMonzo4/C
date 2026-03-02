 # include <stdio.h>
 2  
 3  int main ( void )
 4  {
 5          char actual;   /* contiene el último carácter leído */
 6          char anterior; /* contiene el penúltimo carácter leído */
 7          int contador;  /* número de veces que ha aparecido una 'e' seguida de una 'l'*/
 8  
 9          contador = 0;
10          anterior = ' '; /* cualquiera que no sea la 'e' */
11          printf ("Teclee una frase terminada en .\n");
12          actual=getchar(); /*scanf ("%c", &actual)*/ /*actual=fgetc(stdin);*/
13  
14          while ( actual != '.' )
15          {
16                  if  ( (anterior=='e') && (actual=='l') )
17                          contador = contador + 1;
18                  anterior = actual;
19                  actual=getchar();
20          }
21          printf ("Numero de grupos \'el\' es %d\n", contador );
22          return 0;
23  }