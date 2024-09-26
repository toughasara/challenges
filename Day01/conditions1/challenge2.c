#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf("veuillez entrer un caractere :");
    scanf("%c", &caractere);
    switch(caractere){
        case'a':printf("%c est un voyelle", caractere);
                break;
        case'e':printf("%c est un voyelle", caractere);
                break;
        case'i':printf("%c est un voyelle", caractere);
                break;
        case'o':printf("%c est un voyelle", caractere);
                break;   
        case'u':printf("%c est un voyelle", caractere);
                break;    
        default:printf("%c n est pas un voyelle");   
                break;    
    }

    return 0;
    
    
}