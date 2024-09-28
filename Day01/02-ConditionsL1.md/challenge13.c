#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Xa, Xb, Ya, Yb, Xp, Yp, R1, R2;
    printf("veuillez entrer 1ere cordonnee Xa et Ya : \n");
    scanf("%f %f", &Xa, &Ya);
    printf("veuillez entrer 1ere cordonnee Xb et Yb : \n");
    scanf("%f %f", &Xb, &Yb);
    printf("veuillez entrer 1ere cordonnee Xp et Yp : \n");
    scanf("%f %f", &Xp, &Yp);
    R1 = (Yp - Ya) / (Xp - Xa);
    R2 = (Yb - Ya) / (Xb - Xa);
    if( Xa <= Xp && Xp <= Xb && Ya <= Yp && Yp <= Yb && R1 <= R2)
       pritnf("oui il se trouve ou sur le segment");
    else 
       pritnf("oui il se trouve ou sur le segment");
       

    


    return 0;
    
    
}
