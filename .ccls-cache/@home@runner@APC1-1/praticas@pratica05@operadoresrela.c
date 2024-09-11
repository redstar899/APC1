#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com outro numero: ");
  deu_certo = scanf("%i", &numero2);

  int igual = numero1 == numero2;
  int diferente = numero1 != numero2;
  int menor = numero1 < numero2;
  int menor_igual = numero1 <= numero2;
  int maior = numero1 > numero2;
  int maior_igual = numero1 >= numero2;

  printf("%i eh igual a: %i? %i\n", numero1, numero2, igual);
  printf("%i eh diferente de: %i? %i\n", numero1, numero2, diferente);
  printf("%i eh menor que: %i? %i\n", numero1, numero2, menor);
  printf("%i eh menor ou igual a: %i? %i\n", numero1, numero2, menor_igual);
  printf("%i eh maior que: %i? %i\n", numero1, numero2, maior);
  printf("%i eh maior ou igual a: %i? %i\n", numero1, numero2, maior_igual);

  return 0;
}