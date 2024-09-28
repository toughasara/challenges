#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float a, b, c, Moyenne_geometrique;
    printf("veuillez entrer le nombre a :");
    scanf("%f", &a);
    printf("veuillez entrer le nombre b :");
    scanf("%f", &b);
    printf("veuillez entrer le nombre c :");
    scanf("%f", &c);
    Moyenne_geometrique = pow((a * b * c), (1.0 / 3.0));
    printf("Moyenne_geometrique est : %.2f ", Moyenne_geometrique);

    
    return 0;
}