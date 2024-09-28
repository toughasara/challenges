#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, s, m;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    s = 0;
    for(i=0;i<n;i++){
        s += T[i];
    }
    m = s / n;
    printf("la moyenne est %d", m);

   return 0;

}