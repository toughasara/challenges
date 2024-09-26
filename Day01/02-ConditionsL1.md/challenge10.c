#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour, moies, annee;
    printf("veuillez entrer une date au format jj/mm/aaaa:");
    scanf("%d/%d/%d", &jour, &moies, &annee);
    switch(moies){
        case 1:printf("%d-janvier-%d", jour, annee);
                break; 
        case 2:printf("%d-fevrier-%d", jour, annee);
               break;
        case 3:printf("%d-marc-%d", jour, annee);
               break; 
        case 4:printf("%d-avril-%d", jour, annee);
               break;
        case 5:printf("%d-mai-%d", jour, annee);
               break; 
        case 6:printf("%d-Juin-%d", jour, annee);
               break;
        case 7:printf("%d-Juillet-%d", jour, annee);
               break; 
        case 8:printf("%d-aout-%d", jour, annee);
               break;   
        case 9:printf("%d-Septembre-%d", jour, annee);
                break; 
        case 10:printf("%d-Octobre-%d", jour, annee);
               break;
        case 11:printf("%d-septembre-%d", jour, annee);
               break; 
        case 12:printf("%d-decembre-%d", jour, annee);
               break;        
        default:printf("erreur");   
               break; 
    }

    return 0;
    
    
}