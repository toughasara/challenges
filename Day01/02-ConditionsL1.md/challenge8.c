#include <stdio.h>
#include <stdlib.h>

int main()
{
     float moyenne;
     printf("veuillez entrer la moyenne : ");
     scanf(" %f", &moyenne);
     if((moyenne < 10) && (moyenne >= 0))
        printf("l'eleve est recalé");
     else if ((moyenne >= 10 ) && (moyenne < 12))
        printf("l'eleve obtient la mention passable");
     else if((moyenne >= 12 ) && (moyenne < 14))
        printf("l'eleve obtient la mention assez bien");
     else if((moyenne >= 14 ) && (moyenne < 16))
        printf("l'eleve obtient la mention bien");
     else if((moyenne >= 16) && (moyenne <=20))
        printf("l'eleve obtient la mention tres bien");
     else 
        printf("erreur");
        


    return 0;
}