 #include <stdio.h>
 3  #include <string.h>
 4  #include "lectura.h"
 5  #include "listaAsignaturas.h"
 6  #include "alumn.h"
 7  
 8  #define MAX_RES 3
 9  
10  void leerAlumno (tAlumno *pa){
11      printf("Nombre del alumno: ");
12      leerCadena(pa->nombreAlumno, MAX_NOM);
13      inicializarListaAsignaturas(pa->listaAsignaturas);
14      pa->asignaturas= rellenarListaAsignaturas (pa->listaAsignaturas);
15  }
16  
17  void escribirAlumno(tAlumno a){
18      printf("%s\t%d asignaturas matriculadas\t", a.nombreAlumno, a.asignaturas);
19      escribirListaAsignaturas(a.listaAsignaturas);
20  }
21  
22  void modificarAlumno (tAlumno *pa){
23      char respuesta[MAX_RES];
24      tNombre asignatura;
25      int posicion;
26  
27      printf("Desea modificar el nombre del alumno? ");
28      leerCadena(respuesta, MAX_RES);
29      if (!strcmp(respuesta,"si")){
30          printf("Nombre modificado del alumno: ");
31          leerCadena(pa->nombreAlumno, MAX_NOM);
32      }
33      printf("Desea borrar alguna asignatura? ");
34      leerCadena(respuesta, MAX_RES);
35      if (!strcmp(respuesta,"si")){
36          printf("Nombre de la asignatura a borrar: ");
37          leerCadena(asignatura, MAX_NOM);
38          if(buscarAsignaturaEnLista(asignatura, pa->listaAsignaturas, &posicion))
39          {
40              if(borrarAsignaturaDeLista(pa->listaAsignaturas, posicion))
41                  pa->asignaturas--;
42                  printf("Numero nuevo de asignaturas del alumno: %d\n", pa->asignaturas);
43          }
44      }
45      pa->asignaturas= pa->asignaturas+rellenarListaAsignaturas(pa->listaAsignaturas);
46      printf("\nNumero nuevo de asignaturas del alumno: %d\n", pa->asignaturas);
47  }
48  