#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("you entered date : %04d%02d%02d\n",y,m,d);

    return 0;
    }