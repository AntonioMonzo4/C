#include <stdio.h>
 3  #include <string.h>
 4  
 5  #define MAX_CADENA 50
 6  
 7  int main(void)
 8  {
 9      char destino[MAX_CADENA]="Esta asignatura no es de Java, sino de C.";
10  
11      printf( "%s\n", destino );
12      strncpy( destino,"ignatura es de C.",7 );
13      destino[7]='\0';
14      printf( "%s\n", destino );
15      return 0;
16  }