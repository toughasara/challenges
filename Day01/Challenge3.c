#include <stdio.h>


int main()
{
    float Km, Yards;
    printf("veuillez entrer la distance en kilometres : ");
    scanf("%f",&Km);
    Yards = Km * 1093.61;
    printf("la distance en yards est : %.2f",Yards);


    return 0;
}