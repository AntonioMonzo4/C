#include <stdio.h>
  3   #include <stdbool.h>
  4   #include <string.h>
  5   #include "lectura.h"
  6   #include "listaAsignaturas.h"
  7  
  8   #define MAX_RES 3
  9  
 10   /* Definición de prototipos de funciones internas*/
 11  
 12   /**************************************************************************************
 13   Función: haySitioEnListaAsignaturas
 14      Comprueba si hay sitio en la lista.
 15      Parámetro de entrada: la, array con los nombres de las asignaturas de un alumno.
 16      Precondiciones:  la lista la tiene que estar inicializada.
 17      Parámetro de salida: psitio, pasado por referencia, puntero a entero con la posición
 18      del primer hueco libre en la.
 19      Parámetro de salida (valor devuelto por la función): booleano, false si no hay sitio,
 20          true si hay sitio.
 21   ***************************************************************************************/
 22  bool haySitioEnlistaAsignaturas (const tListaAsignaturas la, int *psitio);
 23  
 24  void inicializarListaAsignaturas (tListaAsignaturas la){
 25      for (int i=0; i<MAX_LISTA_ASIG; i++)
 26              la[i].ocupado= false;
 27  }
 28  
 29  int rellenarListaAsignaturas (tListaAsignaturas la){
 30      char respuesta[MAX_RES];
 31      tNombre asignatura;
 32      int sitio;
 33      int contador;
 34      int pos;
 35  
 36      contador= 0;
 37      printf("Desea matricular una asignatura? ");
 38      leerCadena(respuesta, MAX_RES);
 39      while (!strcmp(respuesta,"si") && haySitioEnlistaAsignaturas(la, &sitio)){
 40          printf("Asignatura: ");
 41          leerCadena(asignatura, MAX_NOM);
 42          if (buscarAsignaturaEnLista(asignatura, la, &pos))
 43              printf("\nLa asignatura ya ha sido matriculada\n");
 44          else{
 45              strcpy(la[sitio].nombreAsignatura, asignatura);
 46              la[sitio].ocupado= true;
 47              contador++;
 48              printf("Desea matricular otra asignatura? ");
 49              leerCadena(respuesta, MAX_RES);
 50          }
 51      }
 52      if (!haySitioEnlistaAsignaturas(la, &sitio))
 53          printf("\nLo sentimos, la lista de asignaturas esta llena\n");
 54      return contador;
 55  }
 56  
 57  void escribirListaAsignaturas (const tListaAsignaturas la){
 58      for (int i=0; i<MAX_LISTA_ASIG; i++){
 59              if(la[i].ocupado)
 60                  printf("%s\t", la[i].nombreAsignatura);
 61      }
 62  }
 63  
 64  bool buscarAsignaturaEnLista (const tNombre a, tListaAsignaturas la, int *ppos){
 65      int i;
 66      bool enc;
 67  
 68      i= 0;
 69      enc= false;
 70      while (!enc && i<MAX_LISTA_ASIG){
 71          if(la[i].ocupado){
 72              if (!strcmp(a, la[i].nombreAsignatura))
 73                  enc= true;
 74              else
 75                  i++;
 76          }
 77          else
 78              i++;
 79      }
 80      *ppos= i;
 81  
 82      return enc;
 83  }
 84  
 85  
 86  bool borrarAsignaturaDeLista (tListaAsignaturas la, int pos){
 87      char respuesta[MAX_RES];
 88      bool borrado;
 89  
 90      printf("Desea borrar la asignatura? ");
 91      leerCadena(respuesta, MAX_RES);
 92      if (!strcmp(respuesta,"si")){
 93          la[pos].ocupado= false;
 94          borrado= true;
 95      }
 96      else
 97          borrado= false;
 98  
 99      return borrado;
100  }
101  
102  bool haySitioEnlistaAsignaturas (const tListaAsignaturas la, int *psitio){
103      bool haySitio;
104      int i;
105  
106      haySitio= false;
107      i= 0;
108      while (i<MAX_LISTA_ASIG && !haySitio){
109          if (!la[i].ocupado)
110              haySitio= true;
111          else
112              i++;
113      }
114      *psitio= i;
115  
116      return haySitio;
117  }
118  