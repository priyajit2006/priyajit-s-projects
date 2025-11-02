#include <stdio.h>
int main()
{
  int num, remainder, octal = 0, place = 1;
  printf("enter an integer value\n");
  scanf("%d", &num);

  while (num > 0)
  {
    remainder = num % 8;
    octal = octal + remainder * place;
    num = num / 8;
    place = place * 10;
  }
  printf("octal equivalent = %d\n", octal);

  return 0;
}

