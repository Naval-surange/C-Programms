#include<stdio.h>

int main()
{
    float exp , x;
    printf("Enter value of x : ");
    scanf("%f",&x);

    exp = (((((3*x+2)*x-5)*x-1)*x+7)*x)-6;
    printf("%0.2f\n" , exp);

}