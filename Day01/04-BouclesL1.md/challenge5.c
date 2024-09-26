#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, e, r, i;
    printf("entrer le nombre b :");
    scanf("%d", &b);
    printf("entrer le nombre e :");
    scanf("%d", &e);
    r = 1;
    for(i=1;i<=e;i++){
        r = r * b;
    }
    printf("le résultat est %d", r);

    return 0;
    
    
}
