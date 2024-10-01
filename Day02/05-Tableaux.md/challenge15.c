#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, g, n, b;

    printf("veuillez entrer la taille du premier tableau : ");
    scanf("%d", &n);
    int T[n];

    printf("veuillez entrer la taille du dexieme tableau : ");
    scanf("%d", &b);
     int F[b];

    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    for(i=0;i<b;i++){
        printf("F[%d] = ", i);
        scanf("%d", &F[i]);
    }
    
    int S[n+b];
    int k =0;
    
     for(i=0;i<n;i++){
         S[k++] = T[n];
  
     }
     
     for(g=0;g<b;g++){
         S[k++] = F[b];
  
     }
     
     for(int j=0;j< n + b;j++){
         printf("%d ",S[j]);
     }

   return 0;

}