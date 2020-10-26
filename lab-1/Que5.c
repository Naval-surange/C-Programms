#include<stdio.h>

int main()
{
    float x,exp;
    printf("Enter value of x : ");
    scanf("%f",&x);
    exp =3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6 ;
    printf("%0.2f\n",exp);
}