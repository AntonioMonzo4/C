3  // Programa que lee de teclado la opción del usuario y,  mientras que el 
 4  // usuario no elija la opción 4 (salir del programa), le indica la opción 
 5  // elegida.
 6  
 7  #include <stdio.h>
 8  
 9  int main (void)
10  {
11      char opcion;   /*Opción del menú elegida*/
12      
13         do
14      {
15          printf ("\n  ************** Opciones ************");
16          printf ("\n  *   A. Opcion 1                    *");
17          printf ("\n  *   B. Opcion 2                    *");
18          printf ("\n  *   C. Opcion 3                    *");
19          printf ("\n  *   4. Salir                       *");
20          printf ("\n  ************************************");
21  
22  
23      printf("\n\nTeclee su opcion: ");
24      scanf("%c", &opcion);
25      fflush(stdin);
26      switch (opcion)
27        {
28          case 'A':   printf("\nEsta usted en la OPCION A");
29                      break;
30          case 'B':   printf("\nEsta usted en la OPCION B");
31                      break;
32               case 'C':   printf("\nEsta usted en la OPCION C");
33                      break;
34          case '4': printf ("\nAdios. Gracias por utilizar este programa");
35                          break;
36          default: printf ("\nNo es una opcion correcta. Por favor, introduzca una opcion valida.");
37          
38           }
39      }while (opcion!='4');
40  
41      return 0;
42  
43  }