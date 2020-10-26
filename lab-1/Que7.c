#include<stdio.h>
int main()
{
    int n,d20=0,d10=0,d5=0,d1=0;
    printf("Enter a dollar amount : ");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n>=20)
        {   d20  =  n/20;
            n = n - 20* (n/20);
            continue;
        }
        if(n>=10)
        {
            d10 = n/10;
            n = n - 10*(n/10);
            continue;
        }
        if(n>=5)
        {
            d5 = n/5;
            n = n -5*(n/5);
            continue;
        }
        if(n>=1)
        {
            d1 = n/1;
            n = n -1*(n/1);
        }
    }
    printf("20$ bill : %d\n10$ bills : %d \n5$ bill : %d\n1$ bills : %d\n",d20,d10,d5,d1);
}