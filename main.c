#include <stdio.h>
int main() {
    int start,end;
    int a;
    printf("enter the value of starting no -");
    scanf("%d",&start);
    printf("enter the end value -");
    scanf("%d",&end);
    int i = start;
    while(i<=end)
    { if(i%2 !=0) 
    {
        printf("%d\n",i);
    }
        i++;
    }

    return 0;
}
