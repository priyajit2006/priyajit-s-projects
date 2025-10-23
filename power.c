// compute value of one number raised to another
#include <stdio.h>
int main()
{
    float base, result = 1;
    int exponent;
    printf("please enter the values\n");
    scanf("%f %d", &base, &exponent);
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
        // result *= base;
    }
    printf("result = %.2f\n", result);
    return 0;
}
/*
    3^7
    1 = 1 *  3= 3
    3 = 3  * 3 = 9



*/