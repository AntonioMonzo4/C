 #include <stdio.h>
 2  #include <string.h>
 3  
 4  #define MAX_CAD_COMPLETA 50
 5  #define MAX_CAD_ORIGEN 25
 6  
 7  int main(void)
 8  {
 9      char cadenaCompleta[MAX_CAD_COMPLETA];
10      char primeraCadena[MAX_CAD_ORIGEN];
11      char segundaCadena[MAX_CAD_ORIGEN];
12  
13      printf ("\nintroduzca la primera cadena: ");
14      fgets (primeraCadena,MAX_CAD_ORIGEN,stdin);
15  
16      printf ("\nintroduzca la segunda cadena: ");
17      fgets (segundaCadena,MAX_CAD_ORIGEN,stdin);
18  
19      memset( cadenaCompleta, '\0', 1);
20      strcpy( cadenaCompleta, primeraCadena );
21      strcat( cadenaCompleta, " " );
22      strcat( cadenaCompleta, segundaCadena );
23      printf( "La cadena completa es: %s.\n", cadenaCompleta );
24  
25      return 0;
26  }