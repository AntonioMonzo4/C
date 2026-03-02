#include <stdio.h>
 3  
 4  int main( void )
 5  {
 6      int resultado;   /* Almacena el cuadrado de numero */
 7      int numero;          /* Almacena el numero a elevar al cuadrado */
 8  
 9      scanf("%d",&numero); /*Lectura del numero por teclado*/
10      resultado = numero * numero; /*Cálculo del resultado*/
11      printf("El resultado es:%d\n",resultado);/*Escritura */
12  
13      return 0;
14  }