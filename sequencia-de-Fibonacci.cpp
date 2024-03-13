#include <stdio.h>

int main() {
  int n, a = 1, b = 2, c;

  printf("Digite um numero: ");
  scanf("%d", &n);


  if (n == 1 || n == 2) {
    printf("O numero %d pertence a sequencia de Fibonacci.\n", n);
    return 0;
  }


  for (int i = 3; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }

  if (c == n) {
    printf("O numero %d pertence a sequencia de Fibonacci.\n", n);
  } else {
    printf("O numero %d nao pertence a sequencia de Fibonacci.\n", n);
  }

  return 0;
}

