#include <stdio.h>
#include <stdlib.h>

float a, b, min;
float minimum(){
    if(a < b)
      min = a;
    else
      min = b;
    return min;
}

int main()
{
    printf("veuillez entrer la valeur a : ");
    scanf("%f", &a);

    printf("veuillez entrer la valeur b : ");
    scanf("%f", &b);

    min = minimum();
    
    printf("le minimum est %.2f", min);

    return 0;
}