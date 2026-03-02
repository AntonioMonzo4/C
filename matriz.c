/* Programa que lee desde la entrada estándar los elementos de un array de 2 dimensiones (matriz),
 2  de 4 filas y 3 columnas. Calcula la suma de cada columa y la almacena en un aarray de 1 dimensión.
 3  Escribe por pantalla el valor máximo de la suma de las columnas*/
 4  
 5  #include <stdio.h>
 6  #define FILAS 4
 7  #define COL 3
 8  
 9  int main (void)
10  {
11      int matriz[FILAS][COL]; /*matriz de FILAS filas por COL columnas*/
12      int sum[COL];           /*array con la suma de cada columna*/
13      int i;                  /*índice para recorrer filas*/
14      int j;                  /*índice para recorrer columnsa*/
15      int max;                /*valor máximo del vector sum*/
16  
17      /*Leer la matriz desde la entrada estándar*/
18      for (i=0;i<FILAS;i++)
19          for(j=0;j<COL;j++)
20          {
21              printf("Valor componente (%d, %d): ", i, j);
22              scanf("%d", &matriz[i][j]);
23              fflush(stdin);
24          }
25  
26      /*Escribir la matriz por pantalla*/
27      printf("\nLa matriz es:\n");
28      for (i=0;i<FILAS;i++)
29      {
30          for(j=0;j<COL;j++)
31              printf("%2d ", matriz[i][j]);
32          printf("\n");
33      }
34  
35      /*Calcular y escribir la suma de las columnas*/
36      for (j=0;j<COL;j++)
37      {
38          sum[j]=0;
39          for(i=0;i<FILAS;i++)
40              sum[j]=sum[j]+matriz[i][j];
41      }
42      printf("\nEl vector con la suma de columnas es:\n");
43      for (j=0;j<COL;j++)
44          printf("%d ", sum[j]);
45  
46  
47      /*Calcular y escribir el valor máximo de la suma*/
48      max=sum[0];
49      for (j=0;j<COL;j++)
50          if(sum[j]>max)
51              max=sum[j];
52      printf("\nEl valos maximo de las columnas es: %d", max);
53  
54      return 0;
55  }