#include <stdio.h>
#include <stdlib.h>

float a, b, max;
float maximum(){
    if(a > b)
      max = a;
    else
      max = b;
    return max;
}

int main()
{
    printf("veuillez entrer la valeur a : ");
    scanf("%f", &a);

    printf("veuillez entrer la valeur b : ");
    scanf("%f", &b);

    max = maximum();
    
    printf("le maximum est %.2f", max);

    return 0;
}