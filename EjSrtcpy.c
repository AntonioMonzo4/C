#include <stdio.h>
 2  #include <string.h>
 3  
 4  #define MAX_CADENA 50
 5  
 6  int main(void)
 7  {
 8      char texto[] = "Esta asignatura es de C.";
 9      char destino[MAX_CADENA];
10  
11      strcpy( destino, texto );
12      printf( "Valor final: %s\n", destino );
13  
14      return 0;
15  }