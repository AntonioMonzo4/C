#include <stdio.h>
 3  
 4  int multiplicar (int a, int b);
 5  int leerNumero (void);
 6  void escribirResultado (int numero);
 7  
 8  
 9  int main(void)  {
10      int multiplicando;        /* multiplicando */
11      int multiplicador;        /* multiplicador */
12      int resultado;              /* resultado */
13  
14      /* 1. Obtener multiplicando y multiplicador */
15          multiplicando = leerNumero ();
16          multiplicador =  leerNumero ();
17  
18      /* 2. Calcular */
19          resultado = multiplicar (multiplicando, multiplicador) ;
20  
21      /* 3. Imprimir resultado */
22          escribirResultado (resultado);
23  return 0;
24  }
25  
26  
27  
28  int leerNumero ( void ){
29      int num; /*contiene el nuemeo leido*/
30      /* 1. Leer */
31          printf ("\nIntroduzca un valor: ");
32          scanf ("%d", &num);
33  
34      /* 2. Devolver el valor leido */
35          return num;
36  }
37  
38  
39  int multiplicar (int a, int b)  {
40      int resultado;  /* resultado */
41      /* 1. Calcular */
42          resultado = a * b;
43  
44      /* 2. Devolver resultado */
45          return resultado;
46  }
47  
48  
49  
50  void escribirResultado (int numero){
51          printf("\nEl resultado obtenido es: %d", numero);
52  }
53  
54  
55  
56  
57  
58  
59  
60  
61  
62  
63  
64  
65  