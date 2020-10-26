#include<stdio.h>

int main()
{
    int n , p , d,m,y;
    printf("Enter item number :");
    scanf("%d",&n);
    printf("Enter unit price :");
    scanf("%d",&p);
    if(p>9999.99)
    {
        printf("price should be less than 9999.99 $");
        return 0;
    }
    printf("Enter date :");
    scanf("%d/%d/%d",&d,&m,&y);

    printf("Item        Unit        Purchase\n");
    printf("%d          $ %6d    %d/%d/%d",n,p,d,m,y);
    return 0 ;
}