#include <stdio.h>
  3  #include <stdbool.h>
  4  #include <string.h>
  5  #include "lectura.h"
  6  #include "alumn.h"
  7  #include "listaClase.h"
  8  
  9  #define MAX_RES 3
 10  
 11  /* Definición de prototipos de funciones internas*/
 12  
 13  /**************************************************************************************
 14   Función: haySitioEnLista
 15      Comprueba si hay sitio en la lista.
 16      Parámetros de entrada: l, estructura con el array con los datos
 17          de los alumnos de la clase y el número de elementos de la lista.
 18      Precondiciones:  la lista l tiene que estar inicializada.
 19      Parámetro de salida (valor devuelto por la función): booleano, false si no hay sitio,
 20          true si hay sitio.
 21   ***************************************************************************************/
 22  bool haySitioEnlista (tListaClase l);
 23  
 24  /**************************************************************************************
 25   Función: meterAlumnoEnLista
 26      Mete en la lista los datos de un nuevo alumno tras el último alumno que había.
 27      Parámetro de entrada: a, datos del alumno que se quiere meter en la lista de clase.
 28      Parámetro de entrada/salida: pl, puntero aestructura con el array con los datos de los
 29          alumnos de la clase y el número de elementos de la lista.
 30      Precondiciones: tiene que haber sitio en la lista.
 31   ***************************************************************************************/
 32  void meterAlumnoEnLista (tAlumno a, tListaClase *pl);
 33  
 34  void inicializarLista (tListaClase *pl){
 35      pl->elementosLista= 0;
 36  }
 37  
 38  int rellenarLista (tListaClase *pl){
 39      char respuesta[MAX_RES];
 40      tAlumno alumno;
 41  
 42      printf("Desea meter un alumno en la lista de clase? ");
 43      leerCadena(respuesta, MAX_RES);
 44      while (!strcmp(respuesta,"si") && haySitioEnlista(*pl)){
 45          leerAlumno(&alumno);
 46          meterAlumnoEnLista(alumno, pl);
 47          printf("Desea meter un alumno en la lista de clase? ");
 48          leerCadena(respuesta, MAX_RES);
 49      }
 50      if(!haySitioEnlista(*pl))
 51          printf("\nLo sentimos, la lista de clase esta llena\n");
 52      return pl->elementosLista;
 53  }
 54  
 55  void escribirLista (tListaClase l){
 56      fprintf(stdout, "Listado de clase\n");
 57      for (int i=0;i<l.elementosLista;i++){
 58          printf("\nAlumno %d: ", i+1);
 59          escribirAlumno(l.lista[i]);
 60      }
 61  }
 62  
 63  bool buscarAlumnoEnLista (const tNombre a, tListaClase l, int *ppos){
 64      int i;
 65      bool enc;
 66  
 67      i= 0;
 68      enc= false;
 69      while (!enc && i<l.elementosLista){
 70          if (!strcmp(a, l.lista[i].nombreAlumno))
 71              enc= true;
 72          else
 73              i++;
 74      }
 75      *ppos= i+1;
 76  
 77      return enc;
 78  }
 79  
 80  bool modificarAlumnoEnLista(tListaClase *pl, int pos){
 81      char respuesta[MAX_RES];
 82      bool modificado;
 83  
 84      printf("Desea modificar los datos del alumno? ");
 85      leerCadena(respuesta, MAX_RES);
 86      if (!strcmp(respuesta,"si")){
 87          modificarAlumno(&(pl->lista[pos-1]));
 88          modificado= true;
 89      }
 90      else
 91          modificado= false;
 92  
 93      return modificado;
 94  }
 95  
 96  bool borrarAlumnoDeLista(tListaClase *pl, int pos){
 97      char respuesta[MAX_RES];
 98      bool borrado;
 99  
100      printf("Desea borrar los datos del alumno? ");
101      leerCadena(respuesta, MAX_RES);
102      /*Borra colocando el último elemento de la lista en el
103      hueco del elemento a borrar*/
104      /*if (!strcmp(respuesta,"si")){
105          pl->lista[pos-1]= pl->lista[pl->elementosLista-1];
106          (pl->elementosLista)--;
107          borrado= true;
108      }
109      else
110          borrado= false;*/
111      /*Borra desplazando los elementos que están
112      a la derecha del elemento a borrar*/
113      if (!strcmp(respuesta,"si")){
114          for (int i=pos; i<pl->elementosLista; i++){
115              pl->lista[i-1]= pl->lista[i];
116          }
117          (pl->elementosLista)--;
118          borrado= true;
119      }
120      else
121          borrado= false;
122  
123      return borrado;
124  }
125  
126  bool haySitioEnlista (tListaClase l){
127      return l.elementosLista<MAX_LISTA;
128  }
129  
130  void meterAlumnoEnLista (tAlumno a, tListaClase *pl){
131      pl->lista[pl->elementosLista]= a;
132      pl->elementosLista++;
133  }