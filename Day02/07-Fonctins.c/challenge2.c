#include <stdio.h>
#include <stdlib.h>

float a, b, m;
float multiplication(){
    m = a * b;
    return m;
}

int main()
{
    printf("veuillez entrer la valeur a : ");
    scanf("%f", &a);

    printf("veuillez entrer la valeur b : ");
    scanf("%f", &b);
    
    printf("a * b = %.2f", multiplication());

    return 0;
}