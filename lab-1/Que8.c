#include<stdio.h>

int main()
{
    float amount , rate ,mp ,mr;

    printf("Enter amount of loan : ");
    scanf("%f",&amount);
    //printf("\n");
    printf("Enter intrest rate : ");
    scanf("%f",&rate);
    //printf("\n");
    printf("Enter monthly payment : ");
    scanf("%f",&mp);
    //printf("\n");
    mr = rate/12;


    amount = amount - mp + amount*mr/100 ;
    printf("Balance remaining after first payments : %0.2f\n",amount);
    amount = amount - mp + amount*mr/100;
    printf("Balance remaining after first payments : %0.2f\n",amount);
    amount = amount - mp + amount*mr/100;
    printf("Balance remaining after first payments : %0.2f\n",amount);


}