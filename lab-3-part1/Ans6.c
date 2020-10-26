#include <stdio.h>
#include <string.h>
int main()
{
    char s[12];
    int se = 0, so = 0, m;
    printf("Enter EAN :");
    scanf("%s", s);
    printf("%s", s);
    for (int i = 1; i < 12; i = i + 2)
    {
        se += s[i] - '0';
    }
    for (int i = 0; i < 12; i = i + 2)
    {
        so += s[i] - '0';
    }
    //printf("\n%d,%d",se,so);
    m = 9 - (se * 3 + so - 1) % 10;
    printf("\ncheck digit : %d\n", m);
}