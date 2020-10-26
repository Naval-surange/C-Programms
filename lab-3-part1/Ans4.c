#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number between 0 and 32767 :");
    scanf("%d", &n);
    printf("Octal representation : %05o\n", n);
}