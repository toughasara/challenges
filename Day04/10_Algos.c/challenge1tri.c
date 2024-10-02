#include <stdio.h>
#include <stdlib.h>


   int i, j, n, t;
   void triBulle (int T[], int n) {
      for (int i = 0; i < n - 1; i++){
         for (int j = 0; j < n-i- 1; j++){
               if (T[j] > T[j + 1]){
                   t = T [j+1];
                   T [j+1] = T[j];
                   T [j] = t;
               }
         }
      }
    }

int main()
{

    printf("veuillez entrer la taille du tableau : ");
    scanf("%d", &n);
    int T[n];

    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("\n");

    for(i=0;i<n;i++){
        printf("T[%d] = %d \n", i, T[i]);
    }
    printf("\n");

    triBulle ( T, n);

    for(i=0;i<n;i++){
        printf("T[%d] = %d \n", i, T[i]);
    }


   return 0;

}