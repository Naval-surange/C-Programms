#include<stdio.h>

int main()
{
    float pi = 3.1415;
    float volume;
    float radius ;

    printf("Enter the radius of sphere\n");
    scanf("%f",&radius);
    
    volume = 4.0/3.0*pi*radius*radius*radius; 
    printf("volume : %f\n",volume);


}