#include <stdio.h>
int main()
{
    int basic, da, hra, gross,nav;
    printf("enter the employee's salary\n");
    scanf("%d", &basic);
    if (basic < 1500)
    {
        hra = basic * 0.1;
        da = basic * 0.9;
    }
    else if (basic >= 1500)
    {
        hra = 500;
        da = basic * 98 / 100;
    }
    else
    {
        printf("any error  has occured\n");
    }
    gross = basic + hra + da;
    nav = gross *12;
      printf("the gross salary of the employee is %d\n", gross);
    printf("the annual salary of the employee is %d\n", nav);
    return 0;
}