#include <stdio.h>
int main()
{
    int hours, i = 0;
    float otpay;
    while (i <= 10)
    {
        printf("enter no of hours they worked in a week\n");
        scanf("%d", &hours);
        if (hours >= 40)
        {
            otpay = (hours - 40) * 120;
        }
        else
        {
            otpay = 0;
        }
        printf("hours = %d, Overtime pay for per employee  = %f\n", hours, otpay);
        i++;
    }
    return 0;
}

