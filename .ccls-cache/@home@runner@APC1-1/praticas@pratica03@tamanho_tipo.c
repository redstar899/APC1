#include <stdio.h>
#include <float.h>
#include <limits.h>

int main () {
  printf("O tipo 'char' ocupa %lu byte(s) na memória.\n", sizeof(float));
  printf("0 tipo 'int' ocupa %lu byte(s) na memória.\n", sizeof(int));
  printf("0 tipo 'float' ocupa %lu byte(s) na memória.\n", sizeof(float));
  printf("0 tipo 'double' ocupa %lu byte(s) na memória.\n", sizeof(double));
  printf("0 tipo 'void' ocupa %lu byte(s) na memória.\n", sizeof(void ));

  printf("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf("a faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf("a faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX);
  printf("a faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX);
  char tecla = 'A';
  printf("valor de tecla: %c\n", tecla);
  int idade = 25;
  printf("valor de idade: %i\n", idade);
  float nota = 8.6f;
  printf("valor de nota: %f\n", nota);
  double pi = 3.14159265;
  printf("valor de pi: %.10f\n", pi);
  printf("\n");
  const float PI = 3.14;
  printf("valor de PI: %f\n", PI);
  printf("\n");
  printf("tamanho do short int = %lu bytes(s)\n", sizeof(short int));
  printf("tamanho do long int = %lu bytes(s)\n", sizeof(long int));
  printf("tamanho do long double = %lu bytes(s)\n", sizeof(long double));
  printf("\n");
  printf("a faixa de valores do short int: de %i ate %i\n", SHRT_MIN, SHRT_MAX);
  printf("a faixa de valores do long int: de %i ate %i\n", SHRT_MIN, SHRT_MAX);
  printf("a faixa de valores do long double: de %i ate %i\n", SHRT_MIN, SHRT_MAX);
  
  return 0;
}