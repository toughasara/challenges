#include <stdio.h>
#include <string.h>


int main()
{
    char P[50];
    char D[50];
    char R[50];
        printf("donner la premiere mot : ");
        scanf("%s", P);
    
        printf("donner la deuxieme mot : ");
        scanf("%s", D);

        strcpy(R,P);
        strcat(R,D);

        printf("la chaine resultante est :%s",R);

    return 0;
    
    
}