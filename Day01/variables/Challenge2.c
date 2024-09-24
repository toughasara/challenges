#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c ;
    float k;
    printf("veuillez entrer la température en Celsius : ");
    scanf("%d",&c);
    k=c+273.15;
    printf("la température en Kelvin est : %.2f",k);

    return 0;
}