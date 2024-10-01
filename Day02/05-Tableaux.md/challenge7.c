#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, g, n, m, j;

    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];

    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    for(i=0 ; i<=n ; i++){
        for(g=1+i ; g<n ; g++){
            if(T[i] > T[g])
              m = T[i];
              T[i] = T[g];
              m = T[g];    
        }
        if(m == 0)
          break;
    }

    for(j=0 ; j<n ; j++){
        printf("T[%d] = %d \n", j, T[j]);
    }
    

   

   return 0;

}