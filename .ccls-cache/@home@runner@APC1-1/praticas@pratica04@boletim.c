#include <stdio.h>

int main() {
  long int matricula = 0;
  float A1 = 0.0f;
  float A2 = 0.0f;
  float media = 0.0f;

  printf("Entre com a matricula: ");
  scanf("%li", &matricula);
  printf("Entre com a nota A1: ");
  scanf("%f", &A1);
  printf("Entre com a nota A2: ");
  scanf("%f", &A2);
  media = (A1 + A2) / 2;
  printf("Matricula	A1	A2	Media\n");
  printf("%li	%.1f	%.1f	%.1f\n", matricula, A1, A2, media);
  
  return 0;
}