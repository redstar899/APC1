#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

  int incremento = numero;
  int pos_incremento = incremento++;
  int pre_incremento = ++incremento;
  

  int decremento = numero;
  int pos_decremento = decremento--;
  int pre_decremento = --decremento;

  printf("O incremento de %i eh %i\n", numero, incremento);
  printf("O pre incremento de %i eh %i\n", pre_incremento, pos_incremento);
  printf("O decremento de %i eh %i\n", numero, decremento);
  printf("O pos decremento de %i eh %i\n", pre_decremento, pos_decremento);
  return 0;
}