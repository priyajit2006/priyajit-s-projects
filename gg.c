#include <stdio.h>
int main()
{
    int num = 10;
    char *result;
    result = (num % 2 == 0) ? "even" : "odd";
    printf("this number %d is %s\n", num);
    num = 7;
    result + (num % 2 == 0) ? "even" : "odd";
    printf("the number %d is %s\n", num, result);
    if (num <= 10)
    {
        printf("hola Amigo!!!");
    }
    else
    {
        printf("hola amigo");
    }
    return 0;
}