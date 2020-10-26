#include<stdio.h>
int main()
{
    int gsi,gi,pc ,in ,cd;
    printf("enter ISBN : ");
    scanf("%d-%d-%d-%d-%d" , &gsi , &gi ,&pc ,&in ,&cd);
    printf("GSI prefix : %d \n Group identifier : %d \n publisher code : %d \n Item number : %d \n Check Digit ; %d",gsi , gi ,pc ,in ,cd);
    return 0;
}