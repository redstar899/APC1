/*
contrua um programa que calcule a soma de dois numeros inteiros
*/
#include <stdio.h>
#include <math.h>
#define pi = 3.14159265359

int main()  {
  int a, b, soma;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma dos numeros e: %d", soma);
  printf(" E seno da soma eh %f\n", sin(soma));
  return 0;
}