#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a phone no. [(xxx) xxx xxxx]:");
    scanf("(%d)%d-%d",&a,&b,&c);
    printf("You entered  : %d.%d.%d\n",a,b,c);

}