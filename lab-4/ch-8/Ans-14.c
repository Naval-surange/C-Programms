#include <stdio.h>
int main()
{
    int i = 0,j,l=0,len;
    char c[100], temp;
    printf("Enter a string : ");
    while (1)
    {
        scanf("%c", &c[i]);
        if (c[i] == '!' || c[i] == '?' || c[i] == '.')
            break;
        i++;
    }

    //i++;
    //printf("%d",i);

    //printf()

    len = i+1;

    printf("Revrsed string :  ");
    for (j = i-1; j >= 0 ; j--)
    {
        if (c[j] == ' ' )
        {
            for (int k = j + 1; 1; k++)
            {
                if(c[k] == '.'||c[k] == '!'||c[k] == '?' )
                {
                    printf(" ");
                    break;
                }
                printf("%c", c[k]);
                if (c[k] == ' ' )
                {
                    break;
                }
            }
        }
        else
        {
            continue;
        }
    }

    while(1)
    {
        printf("%c",c[l]);
        
        if(c[l] == ' ')
        {
            break;
        }
        l++;
    }
     printf("%c\n",c[len-1]);
    //printf("\nj === %d",j);

    //printf("%s",c);
    //while (c != '\0')
}