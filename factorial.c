// 7! = 1*2*3*4*5*6*7
#include <stdio.h>
int main()
{
  int n, product = 1;
  printf("enter the value\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    product *= i;

    //  product = product * i;
  }
  printf("the factorial of %d is %d", n, product);
  return 0;
}
/*
 product = product * i
  1  = 1 *1 ---> 1
 1  = 1 *2 ---> 2
  2 = 2 * 3 ---> 6
 6 = 6 * 4 = 24
 1*2*3*4*5*6*7*8*9*10

*/