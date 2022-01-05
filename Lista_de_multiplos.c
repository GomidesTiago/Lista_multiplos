#include <stdio.h>

int main()
{

  int a, b, X, aux;
  printf("Incirra um numero a: ");
  scanf("%d", &a);

  printf("Incirra um numero b: ");
  scanf("%d", &b);

  if (b < a) // Garantindo que a seje menor que b
  {
    aux = a; 
    a = b;
    b = aux;
  }
  do
  {
    printf("Incirra um numero X: ");
    scanf("%d", &X);

  } while (X < 0 || X > 10);
  for (int i = a + 1; i < b; i++)
  {
    if (i % X == 0)
    {
      printf("\n %d, e multiplo %d", i, X);
    }
    else
    {
      printf("\n %d, nao e multiplo %d", i, X);
    }
  }
}