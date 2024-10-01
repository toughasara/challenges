#include <stdio.h>
#include <stdlib.h>

float somme( int a , int b){
    int s;
    s = a + b;
    return s;
}

int main()
{
    float a, b;
    int s;

    printf("veuillez entrer la valeur a : ");
    scanf("%f", a);

    printf("veuillez entrer la valeur a : ");
    scanf("%f", a);

    s = somme(a,b);
    
    printf("a + b = %s", s);

    return 0;
}