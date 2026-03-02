#include <stdio.h>
 2  #include <string.h>
 3  
 4  #define MAX_CADENA 25
 5  
 6  int main(void)
 7  {
 8      char cadena1[MAX_CADENA];
 9      char cadena2[MAX_CADENA];
10  
11      printf ("introduzca la primera cadena: ");
12      fgets (cadena1,20,stdin);
13  
14      printf ("introduzca la segunda cadena: ");
15      fgets (cadena2,20,stdin);
16  
17      printf( "Comparacion con strcmp: %d\n", strcmp(cadena1,cadena2));
18  
19      return 0;
20  }