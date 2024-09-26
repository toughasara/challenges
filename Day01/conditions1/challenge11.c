#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("veuillez entrer un nombre entre 1 et 7: ");
    scanf("%d", &nombre);
    switch(nombre){
        case 1 :printf("lundi");
                break;
        case 2 :printf("mardi");
                break;
        case 3 :printf("mercredi");
                break;
        case 4 :printf("jeudi");
                break;   
        case 5 :printf("vendredi");
                break;
        case 6 :printf("samedi");
                break;    
        case 7 :printf("dimenche");
                break;
        default:printf("le nombre est incorrecte");   
                break;    
    }

    return 0;
    
    
}