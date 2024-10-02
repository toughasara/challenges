#include <stdio.h>
#include <string.h>


int main()
{
    char P[50];
    char D[50];
        printf("donner la premiere mot : ");
        scanf("%s", P);
    
        printf("donner la deuxieme mot : ");
        scanf("%s", D);

        if(P[0] == D[0])
            printf("les chaines sont egales");

        else 
            printf("les chaines sont differentes");


    return 0;
    
    
}