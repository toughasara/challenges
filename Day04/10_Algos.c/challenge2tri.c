#include <stdio.h>
#include <stdlib.h>


   int i, j, n, t;
   void triinsertion (int T[], int taille) {
       for (int i = 1; i < taille; i++) {
          int tmp = T[i];
          int j = i - 1;
          while (tmp < T[j] && j >= 0) {
              T[j + 1] = T[j];
              j--;
          }
          T[j + 1] = tmp;
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

    triinsertion ( T, n);

    for(i=0;i<n;i++){
        printf("T[%d] = %d \n", i, T[i]);
    }


   return 0;

}