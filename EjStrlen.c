#include <stdio.h>
 2  #include <string.h>
 3  
 4  int main(void)
 5  {
 6      char texto[]="Programacion I";
 7      int longitud;
 8      fgets (texto, 20, stdin);
 9      /*longitud = strlen(texto);*/
10      printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, strlen(texto));
11  
12      return 0;
13  }