#include<stdio.h>
int main(){
    int first,second,result;
    char op;
    printf("enter the 1st value -");
    scanf("%d",&first);
    printf("enter the second value -");
    scanf("%d",&second);
    printf("please choose oporetors -\n");
    printf(" 1. +\n 2. -\n 3. *\n 4. /\n");
    scanf(" %c",&op);
        if (op=='+')
        {
            result = first+second;
              printf("%d\n",result);
        }
        else if (op=='-')
        {
          result = first - second;
            printf(" result - %d\n", result);
        }
        else if (op=='/'){
          result = first / second;
            printf(" result - %d\n", result);
        }
        else if (op=='*'){
          result = first * second;
            printf(" result - %d\n", result);
        }
        else if(op == '1') { 
            result = first+second; 
            printf("%d\n",result);
        
        }
        else if (op=='2'){
             result = first - second;
            printf(" result - %d\n", result);
        }
        else if (op=='3'){
            result = first * second;
            printf(" result - %d\n",result);
        }
        else if (op=='4'){
            result = first / second;
            printf(" result - %d\n",result);
        }
         else {
          printf("error\n");
         }

return 0;
}