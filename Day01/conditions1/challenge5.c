#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee, mois, jour, heure, minute, seconde;
    int ch;
    mois = 12;
    jour = 365;
    heure = 8760;
    minute = 525600;
    seconde = 31536000;
    printf("1 : convetire l'annee en mois .\n");
    printf("2 : convetire l'annee en jour .\n");
    printf("3 : convetire l'annee en heure .\n");
    printf("4 : convetire l'annee en minute .\n");
    printf("5 : convetire l'annee en seconde .\n");
    printf("veuillez entrer le choix: ");
    scanf("%d", &ch);
    printf("veuillez entrer une annee :");
    scanf("%d", &annee);
    switch(ch)
    {
        case 1:printf("%d annee = %d mois", annee, annee * mois);
              break;
        case 2:
        printf("%d annee = %d jours ", annee, annee * jour);
                break;
        case 3:
        printf("%d annee = %d heure ", annee, annee * heure);
                break;
        case 4:
        printf("%d annee = %d minute ", annee, annee * minute);
                break;   
        case 5:
        printf("%d annee = %d seconde ", annee, annee * seconde);
                break;    
        default:printf("erreur");   
                break; 
    }

    

    return 0;
}