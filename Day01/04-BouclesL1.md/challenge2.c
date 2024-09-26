#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s, i;
    printf("entrer le nombre n :");
    scanf("%d", &n);
    s = 1;
    for(i=1;i<=n;i++){
        s = s * i;
    }
    printf("le résultat est !%d", s);

    return 0;
    
    
}