 #include <stdio.h>
  2  
  3  
  4  /* Prototipos de las funciones */
  5  
  6  /***********************************************************************************
  7   * Funcion: menu
  8   *    Presenta el menú y lee la opción del usuario.
  9   * Precondicion:
 10   *    Ninguna
 11   * Parámetros de entrada:
 12   *    Ninguno.
 13   * Parámetros de salida:
 14   *    Ninguno.
 15   * Parametros de salida (valor devuelto por la función):
 16   *    la opción seleccionada por el usuario.
 17   ************************************************************************************/
 18  int menu(void);
 19  
 20  /***********************************************************************************
 21   * Funcion: leerEntero
 22   *    Lee un entero no negativo de teclado.
 23   * Precondicion:
 24   *    Ninguna
 25   * Parámetros de entrada:
 26   *    caracter: para indicar el dato que se desea leer.
 27   * Parámetros de salida:
 28   *    entero: el valor leido desde teclado.
 29   * Parametros de salida (valor devuelto por la función):
 30   *    Ninguno.
 31   ************************************************************************************/
 32  void  leerEntero (int *entero, char caracter);
 33  
 34  /***********************************************************************************
 35   * Funcion: factorial
 36   *    Calcula el factorial de un numero entero no negativo.
 37   * Precondicion:
 38   *    El entero debe ser no negativo
 39   * Parámetros de entrada:
 40   *    n: entero del que se va a calcular el factorial.
 41   * Parámetros de salida:
 42   *    entero: ninguno.
 43   * Parametros de salida (valor devuelto por la función):
 44   *    el valor del factorial de entero.
 45   ************************************************************************************/
 46  int  factorial(int n);
 47  
 48  /***********************************************************************************
 49   * Funcion: variacionesSinRepeticion
 50   *    Calcula las variaciones sin repetición de m elementos
 51   *    tomados de n en n.
 52   * Precondicion:
 53   *    Ninguna
 54   * Parámetros de entrada:
 55   *    m: entero. Conjunto de elementos
 56   *    n: entero. Grupo de elemento que se toman cada vez.
 57   * Parámetros de salida:
 58   *    entero: ninguno.
 59   * Parametros de salida (valor devuelto por la función):
 60   *    el valor de las variaciones sin repeticon.
 61   ************************************************************************************/
 62  int  variacionesSinRepeticion(int m, int n);
 63  
 64  /***********************************************************************************
 65   * Funcion: combinacionesSinRepeticion
 66   *    Calcula las combinaciones sin repetición de m elementos
 67   *    tomados de n en n.
 68   * Precondicion:
 69   *    Ninguna
 70   * Parámetros de entrada:
 71   *    m: entero. Conjunto de elementos
 72   *    n: entero. Grupo de elemento que se toman cada vez.
 73   * Parámetros de salida:
 74   *    entero: ninguno.
 75   * Parametros de salida (valor devuelto por la función):
 76   *    el valor de las combinaciones sin repeticon.
 77   ************************************************************************************/
 78  int  combinacionesSinRepeticion(int m, int n);
 79  
 80  /* Función principal */
 81   int main(void)
 82  {
 83      int opcion; /* opcion leida por el teclado*/
 84      int n1;     /* conjunto de elementos*/
 85      int n2;     /* grupo de elementos que se toman cada vez*/
 86      do
 87      {
 88          opcion=menu();
 89          switch(opcion)
 90          {
 91  
 92              case 1: // Factorial
 93                      leerEntero (&n1, 'n');
 94                      printf ("El valor del factorial de %d es %d.", n1, factorial(n1));
 95                      break;
 96  
 97              case 2: // Variaciones sin repetición
 98                      leerEntero(&n1, 'm');
 99                      leerEntero(&n2, 'n');
100                      printf ("Variaciones sin repetición de %d,%d es %d.", n1,n2, variacionesSinRepeticion(
n1,n2));
101                      break;
102  
103              case 3: // Combinaciones sin repetición
104                      leerEntero(&n1, 'm');
105                      leerEntero(&n2, 'n');
106                      printf ("Combinaciones sin repetición de %d,%d es %d.", n1,n2, 
combinacionesSinRepeticion(n1,n2));
107                      break;
108  
109              case 4: printf("\n\nADIOS.\n\n");
110                      break;
111  
112              default:
113                      printf("\n\nOpción incorrecta.\n\n");
114          }
115      } while(opcion != 4);
116  
117  return 0;
118  }
119  
120  int menu(void){
121      int opcion;
122  
123      printf ("\n\n");
124      printf ("\n1.- Factorial ");
125      printf ("\n2.- Variaciones sin repeticion ");
126      printf ("\n3.- Combinaciones sin repeticion");
127      printf ("\n4.- Salir");
128      printf ("\n\nEscoja una opcion: ");
129      fflush(stdin);
130      scanf ("%d", &opcion);
131  
132      printf ("\n\n");
133      return opcion;
134  }
135  
136  void leerEntero (int *entero, char caracter){
137  
138    do{
139         printf ("Escriba el valor de %c: ", caracter);
140         scanf("%d", entero);
141     }while (entero<0);
142  }
143  
144  int factorial(int n)
145  {
146        int i;    /* indice del bucle */
147        int fac;  /* Almacena el factorial */
148  
149        fac=1; /* factorial de 0 es 1 */
150        for (i=n; i>0;i--)
151          fac = fac * i;
152  
153        return fac;
154  }
155  
156  int  combinacionesSinRepeticion(int m, int n)
157  {
158        return factorial(m)/(factorial(n)*factorial(m-n));
159  }
160  
161  int  variacionesSinRepeticion(int m, int n)
162  {
163        return factorial(m)/factorial(m-n);
164  }
165  