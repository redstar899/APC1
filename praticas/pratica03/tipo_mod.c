#include <stdio.h>
#include <limits.h>
#include <float.h>


int main () {
  printf("O tipo 'unsigned char' aceita valores entre %i e %i\n.\n", 0, UCHAR_MAX);
  printf("O tipo 'short int' aceita valores entre %i e %i\n.\n", SHRT_MIN, SHRT_MAX);
  printf("O tipo 'unsigned short int' aceita valores entre %i e %i\n.\n", 0, USHRT_MAX);
  printf("O tipo 'long int' aceita valores entre %li e %li\n.\n", LONG_MIN, LONG_MAX);
  printf("O tipo 'unsigned long int' aceita valores entre %i e %li\n.\n", 0, ULONG_MAX);
  printf("O tipo 'double' aceita valores entre %E e %E\n.\n", LDBL_MIN, LDBL_MAX);
  printf("\n");
  long int populacao_mundial = 7800000000L;
  printf("A população mundial é de %li pessoas.\n", populacao_mundial);
  const short int HORA_EM_SEGUNDOS = 3600;
  printf("1 hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);
  long double precisao_extrema = 3.14159265358979323846L;
  printf("Precisao Extrema: %.20Lf\n", precisao_extrema);
  printf("\n");
  char caractere = 255;
  int inteiro = caractere;
  float flutuante = inteiro;
  double duplo = flutuante;
  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n", inteiro);
  printf("flutuante = %.7f\n", flutuante);
  printf("duplo = %.7f\n", duplo);
  duplo = 256.1234567;
  flutuante = (float) duplo;
  inteiro = (int) flutuante;
  caractere = (char) inteiro;
  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n", inteiro);
  printf("flutuante = %.7f\n", flutuante);
  printf("duplo = %.7f\n", duplo);

  return 0;
}