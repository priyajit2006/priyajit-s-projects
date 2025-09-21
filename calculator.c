#include<stdio.h>
int main(){
    int first,second, n, result;
    printf("enter the 1st value-");
    scanf("%d",&first);
    printf("enter the second value -");
    scanf("%d",&second);
    printf("please choose oporetors -\n");
    printf(" 1. +\n 2. -\n 3. *\n 4. /\n");
    scanf("%d",&n);
        if(n == 1) {
            result = first+second;
            printf("%d\n",result);
        }
        else if (n==2){
             result = first - second;
            printf("%d\n", result);
        }
        else if (n==3){
            result = first * second;
            printf("%d\n",result);
        }
        else if (n==4){
            result = first / second;
            printf("%d\n",result);
        }
         else {
          printf("error");
         }

return 0;
}