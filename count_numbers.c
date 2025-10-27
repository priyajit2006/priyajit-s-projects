#include <stdio.h>

int main()
{
    int positive = 0, negative = 0, zero = 0, valuecount, values;
    do
    {
        printf("enter a number please\n");
        scanf("%d", &values);

        if (values >= 1)
        {
            positive++;
        }
        if (values == 0)
        {
            zero++;
        }
        if (values < 0)
        {
            negative++;
        }
        printf("do u want to put more values?? if yes press 1 if no press 0\n");
        scanf("%d", &valuecount);
    }
     while (valuecount == 1);

    if (valuecount == 0)
    {
        printf("positive values are total = %d\n", positive);
        printf("zero  values are %d\n", zero);
        printf(" negative  values are total = %d\n", negative);
        return 0;
    }
}
/*
gcc count_numbers.c
./a.exe


*/
