#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s, i;
    do{
        printf("entrer le nombre n :");
        scanf("%d", &n);
    }while(n < 0);
    s = 0;
    for(i=1;i<=n;i++){
        s = s + i;
    }
    printf("le résultat est %d", s);

    return 0;
    
    
}