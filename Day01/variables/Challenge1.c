#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char nom[(50)], prenom[50], sexe, adresse_email[50];
    printf("veuillez entrer votre nom:");
    scanf("%49s", nom);
    printf("veuillez entrer votre prenon:");
    scanf("%49s", prenom);
    printf("veuillez entrer votre age:");
    scanf("%d", &age);
    printf("veuillez entrer votre sexe:");
    scanf(" %c", &sexe);
    printf("veuillez entrer votre adresse_email:");
    scanf("%49s", adresse_email);

    printf("nom: %s \n", nom);
    printf("prenon: %s \n", prenom);
    printf("sexe: %c \n", sexe);
    printf("age: %d \n", age);
    printf("adresse_email: %s \n", adresse_email);

    return 0;
    
    
}