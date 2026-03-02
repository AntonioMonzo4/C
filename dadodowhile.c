
 3  #include <stdio.h>
 4  
 5  int main (void) {
 6  
 7  /*entorno*/
 8          int tirada; /*almacena el valor que sale en la tirada del dado*/
 9          char respuesta; /*almacena la respuesta del usuario a hacer una nueva tirada*/
10  
11  /*acciones*/    
12  
13  do{
14  /* leer el valor de la tirada*/ 
15      printf("\nIntroduzca el valor de la tirada del dado: ");
16      scanf("%d", &tirada);
17      fflush (stdin);
18  
19      if ((tirada>=1) && (tirada<=6)){ /*comprobamos que el valor introducido es correcto */
20          /*comporbar si el valor de la tirada es par*/
21          if ((tirada%2)==0)
22              /*En caso positivo se escribe un mensaje indicando que es par*/
23              printf ("el valor de la tirada es par");
24          else
25              /*En caso negativo se escribe un mensaje indicando que es impar*/
26              printf ("el valor de la tirada es impar");  
27      }
28      else
29          printf ("Los valores han de estar comprendiodos entre 1 y 6");          
30  
31      printf ("\n Desea hacer una nueva tirada del dado SI (s/S) NO (n/N):");
32      scanf ("%c", &respuesta);
33      fflush(stdin);  
34          
35  }while ((respuesta=='s') || (respuesta=='S'));
36  
37  
38          
39      return 0;
40  