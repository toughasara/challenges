#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, s;
    printf("veuillez entrer le nombre a :");
    scanf("%f", &a);
    printf("veuillez entrer le nombre b :");
    scanf("%f", &b);
    if (a == b){
        s = (a+b)*3;
        printf("la resultat est %.2f",s );
    }
    else{
        s = a+b;
        printf("la resultat est %.2f", s);

    }
      



    return 0;
    
    
}