#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ms, kmh;
    printf("veuillez entrer la vitesse en kilomètres par heure : ");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("la vitesse en mètres par seconde est : %.2f",ms);

    return 0;
}
