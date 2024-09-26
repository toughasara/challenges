#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("veuillez entrer un nombre : ");
    scanf("%f", &x);
    if (x < 0)
        printf("le nombre est negatif");
    else if ( x > 0)
        printf("le nombre est positif");
    else 
        printf("le nombre est nul");


    return 0;
}