#include <stdio.h>

int main() {
  int numero = 0;

  printf("Entre com um numero:");
  int deu_certo = scanf("%i", &numero);
  printf("A leitura de certo? %i\n", deu_certo);

  printf("voce digitou o numero: %i\n", numero);

  int coord_x = 0;
  int coord_y = 0;

  printf("entre com as coordenadas do ponto: ");
  deu_certo = scanf("%i,%i", &coord_x, &coord_y);
  printf("A leitura deu certo? %i\n", deu_certo);
  
  return 0;
}