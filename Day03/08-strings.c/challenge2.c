#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[10];
    printf("veuillez entrer une mot : ");
    scanf("%s", chaine);
    
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    printf("La longueur de la chaine est : %d", i);


    return 0;
}