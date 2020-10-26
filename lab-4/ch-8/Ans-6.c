#include <stdio.h>
int main()
{
    char m[500], c;
    int i = 0;
    printf("Enter message : ");
    scanf("%[^\n]s", m);
    c = m[0];
    printf("In BIFF Speak : ");
    //printf("%s",m);
    while (1)
    {

        c = m[i];
        if(c=='\0')
        {
            break;
        }
        if(c=='a')
        {
            printf("4");
        }
        else if(c=='b')
        {
            printf("8");
        }
        else if(c=='e')
        {
            printf("3");
        }
        else if(c=='i')
        {
            printf("1");
        }
        else if(c=='o')
        {
            printf("0");
        }
        else if(c=='s')
        {
            printf("5");
        }
        else if(c==' ')
        {
            printf(" ");
        }
        else
            printf("%c",c-32);
        
        i++;
    }
    printf("!!!!!!!!!!!\n");
    return 0;
}