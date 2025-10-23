#include <stdio.h>
int main()
{
    char c;
    printf("enter any charecter");
    scanf(" %c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("its an uppercase letter");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("this is a lowercase charecter");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("this is a digit");
    }
    else if ((c >= 0 && c <= 47) || (c > 57 && c <= 64) || (c > 90 && c < 97) || c > 122)
    {
        printf("ths is a special symbol");
    }
    else
    {
        printf("any error occured");
    }
    return 0;
}
