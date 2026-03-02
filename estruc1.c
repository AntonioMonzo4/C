#include <stdio.h>
 2  #include <string.h>
 3  
 4  #define MAX_NOMBRE 30
 5  #define MAX_APELLIDOS 50
 6  
 7  typedef char tNombre[MAX_NOMBRE];
 8  typedef char tApellidos[MAX_NOMBRE];
 9  typedef int tEdad;
10  
11  typedef struct
12  {
13       tNombre nombre;
14       tApellidos apellidos;
15       tEdad edad;
16  }tPersona;
17  
18  tPersona leePersona (void);
19  void escribePersona (tPersona persona);
20  
21  
22  int main (void){
23  
24      tPersona ciudadano;
25  
26      ciudadano = leePersona ();
27      escribePersona (ciudadano);
28  
29   return 0;
30  }
31  
32  
33  tPersona leePersona (void){
34  
35      tPersona persona;
36  
37      printf("\n escribe el nombre: ");
38      fgets(persona.nombre,MAX_NOMBRE,stdin);
39  
40      printf("\n escribe el apellido: ");
41      fgets(persona.apellidos, MAX_APELLIDOS, stdin);
42  
43      printf("\n escribe la edad: ");
44      fscanf (stdin, "%d", &(persona.edad));
45  
46      return (persona);
47  }
48  
49  void escribePersona (tPersona persona){
50  
51      fputs (persona.nombre, stdout);
52      fputs (persona.apellidos, stdout);
53      printf ("tiene %d años", persona.edad);
54  }
55  