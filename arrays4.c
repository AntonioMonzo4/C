1  #include <stdio.h>
 2  
 3  #define TAM 10
 4  
 5  int menu (void);
 6  
 7  int main (void){
 8  
 9      int tablaNumeros [10];
10      int i;              /*indice para recorrer el array*/
11      int numero;         /*numero que introduce el usuario*/
12      char deNuevo;       /* si o no para un nuevo intento*/
13      int opcion;         /*opcion para el menu*/
14  
15  do {
16  
17      opcion = menu();
18  
19      switch (opcion){
20  
21          case 1:
22                  for (i=0; i<TAM; i++)
23                      tablaNumeros [i] = i+1;
24  
25                  for (i=0; i<TAM; i++)
26                      fprintf (stdout, "\ntablaNumeros [%d] = %d", i, tablaNumeros[i]);
27                  break;
28  
29          case 2:
30  
31              fprintf (stdout, "\ndesea jugar 's' o 'n': ");
32              fscanf (stdin, "%c", &deNuevo);
33              fflush (stdin);
34  
35                  while (deNuevo == 's' || deNuevo == 'S'){
36  
37                      /*inico de lo que habia en array2.c*/
38                      fprintf (stdout, "\nIntroduzca un numero entero: ");
39                      fscanf (stdin, "%d", &numero);
40                      fflush (stdin);
41  
42                      i=0;
43                      while (tablaNumeros[i]!= numero && i<TAM)
44                          i++;
45  
46                      if (tablaNumeros[i]== numero)
47                          fprintf (stdout, "\n Se ha encontrado el numero %d en la posicion %d del array", 
numero, i);
48                      else
49                          fprintf (stdout, "\n No se ha encontrado el numero %d en el array", numero);
50                      /*fin de lo que había en array2.c*/
51  
52                      fprintf (stdout, "\ndesea jugar de nuevo 's' o 'n': ");
53                      fscanf (stdin, "%c", &deNuevo);
54                      fflush (stdin);
55                  }/*del while*/
56              break; /* de opcion */
57          } /*del switch*/
58      }while (opcion == 1 || opcion == 2);
59      return 0;
60  } /*del main*/
61  
62  int menu (void){
63      int op;
64  
65      fprintf (stdout, "\n **************juego***************\n");
66      fprintf (stdout, "\n 1.- generar array");
67      fprintf (stdout, "\n 2.- empezar a jugar");
68      fprintf (stdout, "\n otro.- salir");
69      fprintf (stdout, "\n Indroduzca su opcion: ");
70      fscanf (stdin, "%d", &op);
71      fflush (stdin);
72      return (op);
73  } /*de menu*/