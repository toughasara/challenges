#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("veuillez entrer le nombre de multiplication : ");
    scanf("%d", &m);
    for(i=0;i<n;i++){
        printf("T[%d] = %d \n", i, T[i] * m);
    }
   

   return 0;

}