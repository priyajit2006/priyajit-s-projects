#include<stdio.h>
int main(){
    int month,year ,result;
    printf("=== Simple Calender Tool ===\n");
    printf ("enter month (1-12):");
    scanf("%d",&month);
    printf("enter the year: ");
    scanf("%d",&year);
    if(month==2){
    if (((year % 4 == 0 && year % 100 != 0)) || (year % 400 == 0)) {
        printf("this is a leap year so it has 29 days in february");
    }
    
    else {
         printf("this is not a leap year so it has 28 days in february");
        }
}
      else if (month==1){
        printf("January has 31 days in %d",year);
    }
    else if (month==3){
        printf("March has 31 days in %d",year);
    }
    else if (month==4){
        printf("April has 30 days in %d",year);
    }
    else if (month==5){
        printf("May has 31 days in %d",year);
    }
    else if (month==6){
        printf("June has 30 days in %d",year);
    }
    else if (month==7){
        printf("July has 31 days in %d",year);
    }
    else if (month==8){
        printf("August has 31 days in %d",year);
    }
    else if (month==9){
        printf("September has 30 days in %d",year);
    }
    else if (month==10){
        printf("October has 31 days in %d",year);
    }
    else if (month==11){
        printf("Novemeber has 30 days in %d",year);
    }
    else if (month==12){
        printf("December has 31 days in %d",year);
    }
    else{
        printf("invalid statement");
    }
    return 0;
}