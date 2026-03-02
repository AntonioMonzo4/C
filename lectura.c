 #include <stdio.h>
 4  #include <string.h>
 5  #include "lectura.h"
 6  
 7  void leerCadena (char *c, int t){
 8      fgets(c, t, stdin);
 9      if (c[strlen(c)-1]=='\n')
10          c[strlen(c)-1]='\0';
11      fflush(stdin);
12  }