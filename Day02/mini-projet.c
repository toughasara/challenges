
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct livre {
    char titre[50];
    char auteur[50];
    float prix;
    int quantite;
};

struct livre livres[100];
int compteur = 0;
int numlivre = 0;
int i;

void Ajouter_un_livre(){
    printf("********************AJOUTER UN LIVRE********************\n");
    if(numlivre < 100) {
    printf("entrez le titer de livre : ");
    scanf("%s", &livres[numlivre].titre);
    printf("entrez le auteur de livere : ");
    scanf("%s", &livres[numlivre].auteur);
    printf("entrez le prix de livre : ");
    scanf("%f", &livres[numlivre].prix);
    printf("entrez la quantite de livere : ");
    scanf("%d", &livres[numlivre].quantite);
    numlivre++;
    }
    else 
    printf("espace plein !");
}
void Affichage_livre_disponible()
{
    printf("********************AFFICHAGE DES LIVRES DISPONIBLES********************\n");
    printf("les livres disponibles :\n");
    for(i=0 ; i<numlivre ; i++){
        printf("titre= %s \n", livres[i].titre);
        printf("auteur = %s \n", livres[i].auteur);
        printf("prix = %.2f \n", livres[i].prix);
        printf("quantitee = %.2d \n\n", livres[i].quantite);
        }
}

void recherche_livre()
{
    printf("********************RECHERCHER LIVRE PAR SON TITRE********************\n");
    int found = 0;
    char titre[50];

    printf("\n Entrer le titre du livre que vous voulez : ");
    scanf("%s", &titre);
    for (i = 0; i < numlivre; i++)
    {
        if (strcasecmp(livres[i].titre, titre) == 0){
            found = 1;
            printf("titre = %s \n", livres[i].titre);
            printf("auteur = %s \n", livres[i].auteur);
            printf("prix = %.2f \n", livres[i].prix);
            printf("quantite = %.2d \n", livres[i].quantite);
        }
    }
    if (!found)
        printf("Ce livre n'existe pas");
}

void Modifier_quantite()
{
    printf("********************MODIFICATION DE LA QUANTITE D'UN LIVRE********************\n");
    int found = 0;
    char titree[50];

    printf("Entrer le titre du livre que vous voulez modifier leur quantite : ");
    scanf("%s", &titree);
    for (i = 0; i < numlivre ; i++)
    {
        if(strcmp(titree, livres[i].titre) == 0)
             {
                printf("entrer le stock a ajouté: ");
                scanf("%d", &livres[i].quantite);
                printf("stock à été mis-à-jouré\n");
                found++;
                break;
             }
    }
    if (!found)
        printf("Ce livre n'existe pas");
}

void Supprimer_livre()
{
    printf("********************SUPPRIMER D'UN LIVRE********************\n");
    int found = 0;
    char titreee[50];
    printf("entrer le titre de le livre que vous voulez supprimer : ");
    scanf("%s", &titreee);
    for(i=0; i<numlivre ; i++)
    {
        if( strcmp(titreee, livres[i].titre) == 0){
            for(int N=i; N<numlivre; N++){
                livres[N] = livres[N+1];
            }
            numlivre--;
            found = 1;
            printf("le livre est supprimer avec success.");
            break;
        }
    }
    if(!found){
        printf("le livre n'existe pas.");
    }
}

void Afficher_nombre_total()
{
    printf("********************NOMBRE TOTAL DES LIVRES********************\n");
    for(i=0 ; i<numlivre ; i++){
        compteur = compteur + livres[i].quantite;
    }
    printf("le nombre totale des livres est :%d",compteur);
}

int main()
{

    int choix;

    do
    {
        printf("\n******************** GESTION DE de Stock ********************\n");
        printf("1.Ajouter un livre au stock. \n");
        printf("2.Afficher tous les livres disponibles. \n");
        printf("3.Rechercher un livre par son titre. \n");
        printf("4.Modifier la quantitee dun livre. \n");
        printf("5.Supprimer un livre du stock. \n");
        printf("6.Afficher le nombre total de livres en stock. \n");
        printf("7.quitter. \n");
        printf("choisissez un choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            Ajouter_un_livre();
            break;
        case 2:
            Affichage_livre_disponible();
            break;
        case 3:
            recherche_livre();
            break;
        case 4:
            Modifier_quantite();
            break;
        case 5:
            Supprimer_livre();
            break;
        case 6:
            Afficher_nombre_total();
            break;
        case 7:
          printf("vous avez quittez !");
          return 0;
        default:
            printf("ce choix n'existe pas !");
        }
    }
    while (choix != 7);


    return 0;
}