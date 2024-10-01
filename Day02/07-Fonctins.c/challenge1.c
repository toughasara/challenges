#include <stdio.h>
#include <stdlib.h>

float a, b, s;
float somme(float a, float b){
    float s;
    s = a + b;
    return s;
}

int main()
{
    float a, b, s;
    printf("veuillez entrer la valeur a : ");
    scanf("%f", &a);

    printf("veuillez entrer la valeur b : ");
    scanf("%f", &b);
    
    s = somme( a, b);
    
    printf("a + b = %.2f", s);

    return 0;
}