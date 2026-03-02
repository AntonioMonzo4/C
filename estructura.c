#include<stdio.h>
 3  
 4  int main (void){
 5  
 6  /*Definicion de la estructuras de datos*/
 7  struct complejo
 8  {
 9      int real;
10      double imaginaria;
11  };
12  
13  /*Declaración de las variables de tipo esctruturado*/
14  
15  struct complejo sumando1;
16  struct complejo sumando2;
17  struct complejo resultado;
18  struct complejo * p_est;
19  
20    printf("\nIntroduce la parte real del complejo sumando1: ");
21    fflush(stdin);
22    scanf("%d",&sumando1.real);
23    //scanf("%d",&p_est->real);
24    printf("\nIntroduce la parte imaginaria del complejo sumando1: ");
25    fflush(stdin);
26    scanf("%lf",&sumando1.imaginaria);
27  
28    printf("\nIntroduce la parte real del complejo sumando2: ");
29    fflush(stdin);
30    scanf("%d",&sumando2.real);
31    printf("\nIntroduce la parte imaginaria del complejo sumando2: ");
32    fflush(stdin);
33    scanf("%lf",&sumando2.imaginaria);
34  
35    resultado.real = sumando1.real + sumando2.real;
36    resultado.imaginaria = sumando1.imaginaria + sumando2.imaginaria;
37  
38    printf ("El resultado es %d + %gj \n\n", resultado.real, resultado.imaginaria);
39  
40  return 0;
41  
42  }
43  
44  
45  
46  