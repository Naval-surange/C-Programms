#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],c;
    int n[10]={0},len=0,i=0;
    printf("Enter a digit : ");
    scanf("%s",s);
    c = s[0];
    while (c!='\0')
    {
        c = s[i]; 
        len++;
        i++;
    }
    len = len-1;
    for(i=0;i<len;i++)
    {
        n[s[i]-'0'] ++;
    }
   
   printf("Repeted digits : ");
    
    for(int i=0;i<10;i++)
    {
        if(n[i]>=2)
            printf("%d  ",i);
    }

}