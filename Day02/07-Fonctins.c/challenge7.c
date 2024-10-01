#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, g, i;
    int chaine[30]; 

    printf("veuillez entrer un chiffres : ");
    scanf("%d", &n);

    printf("veuillez entrer une mot : ");
    scanf("%s", chaine);

    for(g=n-1 , i = 0 ; g>=0 , i < n ; g--, i++ ){
             printf("chaine[%d] = %s \n", i, chaine[g]);
        }
    

    return 0;
}