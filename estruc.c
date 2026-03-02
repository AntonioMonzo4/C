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
18  void leePersona (tPersona *persona);
19  void escribePersona (tPersona persona);
20  
21  
22  int main (void){
23  
24      tPersona ciudadano;
25  
26      leePersona (&ciudadano);
27      escribePersona (ciudadano);
28  
29   return 0;
30  }
31  
32  
33  void leePersona (tPersona *persona){
34  
35      printf("\n escribe el nombre: ");
36      fgets(persona->nombre,MAX_NOMBRE,stdin);
37  
38      printf("\n escribe el apellido: ");
39      fgets(persona->apellidos, MAX_APELLIDOS, stdin);
40  
41      printf("\n escribe la edad: ");
42      fscanf (stdin, "%d", &(persona->edad));
43  }
44  
45  void escribePersona (tPersona persona){
46  
47      fputs (persona.nombre, stdout);
48      fputs (persona.apellidos, stdout);
49      printf ("tiene %d años", persona.edad);
50  }
51  