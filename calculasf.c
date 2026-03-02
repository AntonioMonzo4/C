#include <stdio.h>
 2  int main (void) {
 3      char opcion; /* almacena la opción seleccionada del menú */
 4      int oper1, oper2; /* almacenan los operandos implicados en la operación*/
 5      int resultado; /* almacena el resultado de la operación */
 6  
 7  do {
 8    printf ( "\n\nLas operaciones disponibles son:\n");
 9    printf ( "1. Suma.\n");
10    printf ( "2. Resta.\n");
11    printf ( "3. Multiplicacion.\n");
12    printf ( "4. Division.\n");
13    printf ( "5. Salir.\n");
14    printf ( "Introduzca la operacion a realizar: ");
15    fflush (stdin);
16    scanf ( "%c", &opcion);
17    switch (opcion)
18    {
19          case '1':   printf ( "\nIntroduzca el primer operando: ");
20                      fflush (stdin);
21                      scanf ( "%d", &oper1);
22                      printf ( "\nIntroduzca el segundo operando: ");
23                      fflush (stdin);
24                      scanf ( "%d", &oper2);
25                      resultado = oper1 + oper2;
26                      printf ( "\nEl  resultado es %d ",resultado);
27                      break;
28  
29          case '2':   printf ( "\nIntroduzca el primer operando: ");
30                      fflush (stdin);
31                      scanf ( "%d", &oper1);
32                      printf ( "\nIntroduzca el segundo operando: ");
33                      fflush (stdin);
34                      scanf ( "%d", &oper2);
35                      resultado = oper1 - oper2;
36                      printf ( "\nEl  resultado es %d ",resultado);
37                      break;
38  
39          case '3':   printf ( "\nIntroduzca el primer operando: ");
40                      fflush (stdin);
41                      scanf ( "%d", &oper1);
42                      printf ( "\nIntroduzca el segundo operando: ");
43                      fflush (stdin);
44                      scanf ( "%d", &oper2);
45                      resultado = oper1 * oper2;
46                      printf ( "\nEl  resultado es %d ",resultado);
47                      break;
48  
49          case '4':   printf ( "\nIntroduzca el primer operando: ");
50                      fflush (stdin);
51                      scanf ( "%d", &oper1);
52                      printf ( "\nIntroduzca el segundo operando: ");
53                      fflush (stdin);
54                      scanf ( "%d", &oper2);
55                      resultado = oper1 / oper2;
56                      printf ( "\nEl  resultado es %d ",resultado);
57                      break;
58  
59      case '5':       printf ( "\n ADIOS \n");
60                      break;
61  
62      default:        printf ( "\n Opcion incorrecta \n");
63                      break;
64  
65  
66       } /*del switch*/
67  
68       } while (opcion !='5');
69  
70       return 0;
71  
72       } /* del main */