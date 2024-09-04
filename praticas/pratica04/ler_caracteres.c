#include <stdio.h>

int main() {
  char tecla = '\0';

  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();

  printf("Voce digitou a tecla: %c\n", tecla);

  printf("Digite outra tecla: ");
  deu_certo = scanf(" %c", &tecla);
  getchar();
  printf("Voce digitou a tecla: %c\n", tecla);

  char nome[31];
  printf("Entre com um nome: ");
  deu_certo = scanf("%[^\n]%s", nome);
  printf("Voce digitou o nome: %s\n", nome);
  
  return 0;
}