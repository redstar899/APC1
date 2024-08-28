#include <stdio.h>
#include <float.h>
#include <limits.h>

int main() {
  double ISBN = 1458967582135;
  int numpaginas = 128;
  const float preco = 219;
  int publicadoem = 2004;
  printf("O livro com o ISBN: %li\n", ISBN);
  printf("O livro tem: %i páginas\n", numpaginas);
  printf("O livro foi publicado por: %.2f\n", preco);
  printf("O livro foi publicado em: %i\n", publicadoem);
  
  return 0;
}