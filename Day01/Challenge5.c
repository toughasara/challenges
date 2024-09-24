#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;
    printf("veuillez entrer la température en Celsius : ");
    scanf("%f",&C);
    if (C<0)
      printf("l'état de l'eau est solide");
    else if (C >= 100)
      printf("l'état de l'eau est gaz");
    else 
      printf("l'état de l'eau est Liquide");
  
    return 0;
}