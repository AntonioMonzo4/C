include <stdio.h>
 2  #include <string.h>
 3  
 4  #define MAX_CADENA 50
 5  
 6  int main(void)
 7  {
 8      char cadena1[MAX_CADENA];
 9  
10      printf ("introduzca la cadena: ");
11      fgets (cadena1,MAX_CADENA,stdin);
12  
13      fputs (cadena1,stdout);
14  
15      return 0;
16  }