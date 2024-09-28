#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, max;
    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];
    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    max = T[0];
    for(i=1; i<n; i++){
        if(max < T[i])
          max = T[i];
    }
    
    printf("le maximale = %d \n", max);

   return 0;

}