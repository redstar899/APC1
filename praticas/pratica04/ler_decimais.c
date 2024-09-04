#include <stdio.h>

int main() {
  float nota = 0.0f;

  printf("Entre com a nota entre 0 a 10: ");
  int deu_certo = scanf("%f", &nota);

  printf("Voce digitou a nota: %.2f\n", nota);

  double pi = 0.0;
  printf("Entre com o valor de pi com ate 10 casas: ");
  deu_certo = scanf("%lf", &pi);

  printf("Voce digitou o valor de pi: %.10f\n", pi);
  return 0;
}