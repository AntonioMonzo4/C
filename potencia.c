#include <stdio.h>
 2  
 3  int main (void)
 4  {       /* Entorno */
 5      int base; /* base */
 6      int exponente; /* exponente */
 7      int contador; /* cuenta las veces que se multiplica b por si mismo */
 8      int resultado; /* resultado de la operación */
 9  
10      /*inicialización de las variables*/
11  
12      contador=0;
13      resultado=1;
14  
15      printf ("\n Introduzca el valor de la base: ");
16      fflush(stdin);
17      scanf ("%d", &base);
18  
19      printf ("\n Introduzca el valor del exponente: ");
20      fflush(stdin);
21      scanf ("%d", &exponente);
22  
23      if (exponente==0)
24          printf("resultado = 1");
25      else{
26          while (contador<exponente){
27              resultado=resultado*base;
28              contador=contador+1;
29          }
30  
31      printf("resultado = %d", resultado);
32      }
33  
34    return 0;
35  }
36  
37  
38  /* Acciones */
39  /* 1. Leer base */
40  /* 2. Leer exp */
41  /* 3. contador ? 0 */
42  /* 4. resultado ? 1 (cualquier número elevado a 0 es 1*/
43  /* 5. mientras contador < exp hacer
44      inrementar contador en 1
45      resultado ? resultado × base
46           fin mientras */
47  /* como contador = exp, resultado = base elevado a exponente */
48  