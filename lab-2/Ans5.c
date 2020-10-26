#include<stdio.h>
int main()
{
    int a[16],rsum[4],temp;
    printf("Enter 16 values");
    for(int i=0;i<16;i++)
    {
        scanf("%d",&temp);
        a[i] = temp;
    }
    for(int i = 0;i<16;i++)
    {
        printf("%-4d" , a[i]);
        if((i+1)%4==0)
        {
            printf("\n");
        }
    }

    printf("Row Sum : %d,%d,%d,%d",a[0]+a[1]+a[2]+a[3],a[4]+a[5]+a[6]+a[7],a[8]+a[9]+a[10]+a[11],a[12]+a[13]+a[14]+a[15]);
    printf("Row Sum : %d,%d,%d,%d",a[0]+a[4]+a[8]+a[12],a[1]+a[5]+a[9]+a[13],a[2]+a[6]+a[10]+a[14],a[3]+a[7]+a[11]+a[15]);
    printf("Row Sum : %d,%d",a[0]+a[5]+a[10]+a[15],a[3]+a[6]+a[9]+a[12]);
}

