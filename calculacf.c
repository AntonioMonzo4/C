#include <stdio.h>
  2  
  3  int suma (int operando1, int operando2);            /* realiza la suma */
  4  int resta (int operando1, int operando);            /*realiza la resta */
  5  int multiplicacion (int operando1, int operando);   /*realiza la multiplicación */
  6  int division (int operando1, int operando);         /* realiza la división entera */
  7  void leerOperandos (int *operando1, int *operando2); /*lee los operandos que se usarán en la operación*/
  8  void imprimeResultado (int resultado);              /*imprime el resultado */
  9  char menu(void);                                    /*Presenta un menú por pantalla y devuelve la opción
seleccionada */
 10  //void suma(int operando1, int operando2, int *resultado);
 11  int main (void) {
 12      char opcion; /* almacena la opción seleccionada del menú */
 13      int oper1, oper2; /* almacenan los operandos implicados en la operación*/
 14      int resultado; /* almacena el resultado de la operación */
 15  
 16  do {
 17    opcion = menu ();
 18    switch (opcion)
 19    {
 20      case '1':       leerOperandos (&oper1, &oper2);
 21                      resultado = suma (oper1,oper2);
 22                      suma(oper1,oper2,&resultado):
 23                      imprimeResultado (resultado);
 24                      break;
 25  
 26      case '2':       leerOperandos (&oper1, &oper2);
 27                      resultado = resta (oper1,oper2);
 28                      imprimeResultado (resultado);
 29                      break;
 30  
 31      case '3':       leerOperandos (&oper1, &oper2);
 32                      resultado = multiplicacion (oper1,oper2);
 33                      imprimeResultado (resultado);
 34                      break;
 35  
 36      case '4':       leerOperandos (&oper1, &oper2);
 37                      if (oper2!=0){
 38                          resultado = division (oper1,oper2);
 39                          imprimeResultado (resultado);
 40                      }
 41                      else
 42                          printf ("\nno se puede dividr por 0");
 43                      break;
 44  
 45      case '5':       printf ("\n ADIOS \n");
 46                      break;
 47  
 48      default:        printf ("se equivoco en la opcion\n");
 49     }
 50  }while (opcion !='5');
 51  return 0;
 52  
 53  }
 54  
 55  char menu (void){
 56    char opc;
 57  
 58    printf ("\nOPERACIONES DISPONIBLES: \n");
 59    printf ("\t1.- Suma\n");
 60    printf ("\t2.- Resta\n");
 61    printf ("\t3.- Multiplicacion\n");
 62    printf ("\t4.- Division entera\n");
 63    printf ("\t5.- Salir\n");
 64    printf ("\nElija una operacion: \n");
 65  
 66    fflush (stdin);
 67    scanf ("%c", &opc);
 68  
 69    return (opc);
 70  } /* de menu */
 71  
 72  void leerOperandos (int *operando1, int *operando2){
 73  
 74  printf ("\nIntroduzca el primer operando: ");
 75  fflush (stdin);
 76  scanf ("%d", operando1);
 77  
 78  printf ("\nIntroduzca el segundo operando: ");
 79  fflush (stdin);
 80  scanf ("%d", operando2);
 81  
 82  } /*de leerOperandos */
 83  
 84  int suma (int operando1, int operando2){
 85      int resultado; /*Almacena el resultado de la suma*/
 86  
 87      resultado= operando1 + operando2;
 88      return resultado;
 89  } /*de suma */
 90  
 91  void suma(int operando1, int operando2, int *resultado){
 92  
 93      *resultado=operando1+operando2;
 94      }
 95  
 96  int resta (int operando1, int operando2){
 97      int resultado; /*Almacena el resultado de la resta*/
 98  
 99      resultado= operando1 - operando2;
100      return (resultado);
101  } /*de resta */
102  
103  int multiplicacion (int operando1, int operando2){
104      int resultado; /*Almacena el resultado de la multiplicación*/
105  
106      resultado= operando1 * operando2;
107      return (resultado);
108  } /*de multiplicacion */
109  
110  int division (int operando1, int operando2){
111      int resultado; /*Almacena el resultado de la división entera*/
112  
113          resultado= operando1 / operando2;
114      return (resultado);
115  } /* de division */
116  
117  void imprimeResultado (int resultado){
118      printf ("\nEl resultado de la operacion es : %d\n\n\n",
119                  resultado);
120  
121  } /*de imprimeResultado */